//

//Power Set

//using dp

/*
class Solution{
	public:
	    //using dp approch
	    void subseq(int i,string &s,string temp,vector<string>&ans){
	        int n = s.length();
	        if( i == n){
	            ans.push_back(temp);
	            return;
	        }
	        subseq(i+1,s,temp+s[i],ans);
	        subseq(i+1,s,temp,ans);
	    }
	    
		vector<string> AllPossibleStrings(string s){
		    vector<string>ans;
		    string temp = "";
		    subseq(0,s,temp,ans);
		    sort(ans.begin(),ans.end());
		    vector<string>::iterator it1;
            it1=ans.begin();
            ans.erase(it1);
		    return ans;
		}
};
*/

//using Bit manipulation

/*
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    int n = s.length();
		    vector<string>ans;
		    unsigned int power_Set = pow(2,n);
		    for(int i=0;i<power_Set;i++){
		        string temp = "";
		        for(int j = 0; j < n ; j++){
		            if(i & (1 << j)) temp+=s[j]; 
		        }
		        if(temp.size() >= 1) ans.push_back(temp);
		    }
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};
*/