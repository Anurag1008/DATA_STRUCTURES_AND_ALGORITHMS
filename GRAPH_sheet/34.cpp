//water jug problem using BFS

/*
class Solution {
public:
    bool canMeasureWater(int x, int y, int z) {
        if(x+y < z) return false;
        vector<int>dir={x,-x,y,-y};
        set<int>visited;
        queue<int>q;
        visited.insert(0);
        q.push(0);
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(int direction : dir){
                int total = curr  + direction;
                if(total == z) return true;
                if(total < 0 || total > x+y) continue;
                if(visited.find(total)==visited.end()){
                    q.push(total);
                    visited.insert(total);
                }
            }
        }
        return false;
    }
};
*/