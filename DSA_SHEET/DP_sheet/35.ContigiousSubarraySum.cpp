

// Using kadan's Algorithms

/*
class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {
        long long ans = arr[0];
        long long sum = arr[0];
        for (int i = 1; i < n; i++)
        {
            sum = max((long long)arr[i], sum + arr[i]);
            ans = max(ans, sum);
        }
        return ans;
    }
};
*/