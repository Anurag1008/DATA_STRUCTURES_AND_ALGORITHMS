//1631 Path with minimum Efforts

/*
class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int col_size = heights[0].size();
        int row_size = heights.size();

        priority_queue<pair<int,pair<int,int>>,
        vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>>pq;

        int dr[] = {-1,0,1,0};
        int dc[] = {0,1,0,-1};

        //visited vector

        vector<vector<int>>dist(row_size,vector<int>(col_size,1e9));
        dist[0][0] = 0;

        pq.push({0,{0,0}});

        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int diff = it.first;
            int r = it.second.first;
            int c = it.second.second;

            if(r== row_size-1 && c == col_size-1) return diff;

            for(int i=0;i<4;i++){
                int new_r = r + dr[i];
                int new_c = c + dc[i];
                if(new_r >= 0 && new_c >= 0 && new_r < row_size && new_c < col_size){
                    int newEfforts = max(abs(heights[new_r][new_c]-heights[r][c]),diff);
                    if(newEfforts < dist[new_r][new_c]){
                        dist[new_r][new_c] = newEfforts;
                        pq.push({newEfforts,{new_r,new_c}});
                    }
                }

            }
        }
        return 0;

    }
};
*/