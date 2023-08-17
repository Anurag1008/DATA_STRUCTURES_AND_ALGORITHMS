//https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string1956/1

//Longest Palindromic Substring

/*
class Solution{   
public:
    //Expand around center approach
    string solve(int left,int right,string &s){
        string output;
        while(left>=0 && right<s.length() && s[left] == s[right])
        {
            left--;
            right++;
        }
        //adjusting the last call
        left++;
        right--;
        return s.substr(left,right-left + 1);
    }
    string longestPalindrome(string S){
        string result;
        int maxlen = 0;
        for(int i=0;i<S.length();i++){
            string odd = solve(i,i,S);
            if(maxlen < odd.length()){
                maxlen = odd.length();
                result = odd;
            }
            string even = solve(i,i+1,S);
            if(maxlen < even.length()){
                maxlen = even.length();
                result = even;
            }
        }
        return result;
    }
};
*/