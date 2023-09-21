#include <vector>
using namespace std;

class Solution {
public:
    vector<int> countSmallerSegmentTree(vector<int>& nums) {
        int num_buckets = 2 * 10000 + 1;
        vector<int> segment_tree(4 * num_buckets, 0);
        vector<int> result(nums.size());

        function<void(int, int, int, int)> update = [&](int tree_index, int bucket, int tree_left, int tree_right) {
            if (tree_left == tree_right) {
                segment_tree[tree_index]++;
                return;
            }

            int m = (tree_left + tree_right) / 2;
            if (bucket <= m) {
                update(2 * tree_index + 1, bucket, tree_left, m);
            } else if (bucket > m) {
                update(2 * tree_index + 2, bucket, m + 1, tree_right);
            }

            segment_tree[tree_index]++;
        };

        function<int(int, int, int, int)> query_range_sum = [&](int tree_index, int tree_left, int tree_right, int i, int j) -> int {
            if (tree_left > j || tree_right < i) {
                return 0;
            }

            if (tree_left >= i && tree_right <= j) {
                return segment_tree[tree_index];
            }

            int m = (tree_left + tree_right) / 2;
            return query_range_sum(2 * tree_index + 1, tree_left, m, i, j) +
                   query_range_sum(2 * tree_index + 2, m + 1, tree_right, i, j);
        };

        int offset = 10000;

        for (int i = nums.size() - 1; i >= 0; i--) {
            int num = nums[i];
            result[i] = query_range_sum(0, 0, num_buckets - 1, 0, (num + offset) - 1);
            update(0, num + offset, 0, num_buckets - 1);
        }

        return result;
    }
};