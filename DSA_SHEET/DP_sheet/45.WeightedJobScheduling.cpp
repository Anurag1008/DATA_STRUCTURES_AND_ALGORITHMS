
//https://leetcode.com/problems/maximum-profit-in-job-scheduling/

//1235. Maximum Profit in Job Scheduling


//Recurssion + Memorization

/*
class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        vector<pair<pair<int, int>, int>> jobs; // { {endTime, startTime}, profit }

        for (int i = 0; i < n; ++i) {
            jobs.push_back({{endTime[i], startTime[i]}, profit[i]});
        }

        sort(jobs.begin(), jobs.end());

        vector<int> dp(n, 0);

        dp[0] = jobs[0].second;

        for (int i = 1; i < n; ++i) {
            int currentProfit = jobs[i].second;
            int prevJobIdx = -1;

            // Find the latest non-conflicting job
            for (int j = i - 1; j >= 0; --j) {
                if (jobs[j].first.first <= jobs[i].first.second) {
                    prevJobIdx = j;
                    break;
                }
            }

            if (prevJobIdx != -1) {
                currentProfit += dp[prevJobIdx];
            }

            dp[i] = max(currentProfit, dp[i - 1]);
        }

        return dp[n - 1];
    }
};

*/

//Tabulation + Greedy approach of JOB SCHEDULING 2ND PROBLEM OR GREEDY

/*
class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        vector<pair<pair<int, int>, int>> jobs; // { {endTime, startTime}, profit }

        for (int i = 0; i < n; ++i) {
            jobs.push_back({{endTime[i], startTime[i]}, profit[i]});
        }

        sort(jobs.begin(), jobs.end());

        vector<int> dp(n, 0);

        dp[0] = jobs[0].second;

        for (int i = 1; i < n; ++i) {
            int currentProfit = jobs[i].second;
            int prevJobIdx = -1;

            // Find the latest non-conflicting job
            for (int j = i - 1; j >= 0; --j) {
                if (jobs[j].first.first <= jobs[i].first.second) {
                    prevJobIdx = j;
                    break;
                }
            }

            if (prevJobIdx != -1) {
                currentProfit += dp[prevJobIdx];
            }

            dp[i] = max(currentProfit, dp[i - 1]);
        }

        return dp[n - 1];
    }
};

*/