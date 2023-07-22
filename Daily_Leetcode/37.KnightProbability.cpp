//688. Knight Probability in Chessboard

/*
class Solution {
public:
    //Array of Direction's
    int dirx[8] = {-2,-1,1,2,2,1,-1,-2};
    int diry[8] = {1,2,2,1,-1,-2,-2,-1};
    //DP for 3D storage of moves row col but we do string for this purpose.
    unordered_map<string,double>mp;

    double knightProbability(int n, int k, int row, int column) {
        return find(n,k,row,column);
    }

    double find(int n,int moves,int r, int c){
        //base condition 1
        if(r<0 || c<0 || r>=n || c>=n) return 0;
        //base condition 2
        if(moves == 0) return 1;

        string key = to_string(r)+"Anurag"+to_string(c)+"Kumar"+to_string(moves);
        
        //checking wheather already present or not.
        if(mp.find(key)!=mp.end()) return mp[key];
        
        double probability = 0;
        //iterating over all possible direction
        for(int i=0;i<8;i++){
            probability+=find(n,moves-1,r+dirx[i],c+diry[i])/8.0;
        }
        mp[key] = probability;
        return mp[key];
    }
};
*/