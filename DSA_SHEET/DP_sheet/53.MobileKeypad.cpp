/*
https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/

17. Letter Combinations of a Phone Number

class Solution {
public:
    void bfs(int idx,string output,string digits,string mp[],vector<string> &ans){
        if(idx == digits.length()){ 
            ans.push_back(output);
            return;
        }
        int number = digits[idx] - '0';
        string pos = mp[number];
        for(int i=0;i<pos.length();i++){
            output.push_back(pos[i]);
            bfs(idx+1,output,digits,mp,ans);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length() == 0) return ans;
        string mp[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output = "";
        bfs(0,output,digits,mp,ans);
        return ans;

    }
};

Time complexity : O(4^n) ,because each digit is map to 3 or 4 letter and n is the n number digitd in input string (digit)
Space Complexity : O(n)

*/