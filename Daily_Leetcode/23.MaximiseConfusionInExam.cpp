//2024. Maximize the Confusion of an Exam

//Time Complexity : O(N^2)
//Space Complexity : O(1)

/*
class Solution {
public:
    int subLength(int left,int right,int k,string &s,char ele){
        int size = s.length();
        int count = 0;
        int ans = 0;
        for(right = 0; right < size; right++){
            if(s[right] == ele) count++;
            while(count > k){
                if(s[left] == ele) count--;
                left++;
            }
            ans = max(ans,right - left + 1);
        }
        return ans;
    }
    int maxConsecutiveAnswers(string answerKey, int k) {
        int a = subLength(0,0,k,answerKey,'T');
        int b = subLength(0,0,k,answerKey,'F');
        return max(a,b);
    }
};
*/