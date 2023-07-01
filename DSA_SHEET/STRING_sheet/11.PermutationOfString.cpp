
//https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1

// class Solution
// {
// 	public:
// 	    void permString(string& s,int l,int r,set<string>&ans){
// 	        if(l == r) ans.insert(s);
// 	        else
// 	           for(int i=l;i<=r;i++){
// 	               swap(s[l],s[i]);
// 	               permString(s,l+1,r,ans);
// 	               swap(s[l],s[i]);
// 	           }
// 	    }
// 		vector<string>find_permutation(string S)
// 		{
// 		    set<string>temp;
// 		    vector<string>ans;
// 		    permString(S,0,S.length()-1,temp);
// 		    for(auto it : temp){
// 		        ans.push_back(it);
// 		    }
// 		    return ans;
		    
// 		}
// };
