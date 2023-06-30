
//1970. Last Day Where You Can Still Cross


#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;


class Solution {
public:
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};

    bool checkpossible(int tillDay, int row,int col, vector<vector<int>>&cells){
        vector<vector<bool>>visited(row,vector<bool>(col,0));
        for(int i=0;i <tillDay; i++){
            visited[cells[i][0]-1][cells[i][1]-1] = 1;
        }
        queue<pair<int,int>>q;
        for(int i=0;i<col;i++){
            if(visited[0][i] == 0) q.push({0,i});
            visited[0][i] = 1;
        }
        while(!q.empty()){
            pair<int,int>front = q.front();
            q.pop();
            int Ir = front.first;
            int Ic = front.second;
            if(Ir == row - 1) return true;
            for(int i=0;i<4;i++){
                int x = Ir+dx[i];
                int y = Ic+dy[i];
                if(x < 0 || x == row || y < 0 || y == col || visited[x][y] == 1) continue;
                visited[x][y] = 1;
                q.push({x,y});
            }
        }
        return false;
    }
   

    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        //we apply binary search for selection of grid wheather to fill water or not
        int left = 1;
        int right = cells.size();
        int  ans = 0;
        while(left<=right){
            int mid = left + (right - left)/2;
            if(checkpossible(mid,row,col,cells)){
                ans = mid;
                left = mid+1;
            }
            else right = mid - 1;
        }
        cout<<ans<<"\n";
        return ans;
    }
};

/*
class Solution {
public:
    bool isPossible(int m, int n, int t, vector<vector<int>>& cells) {
        vector<vector<int>> grid(m + 1, vector<int>(n + 1, 0)); // Grid representation
        vector<pair<int, int>> directions {{1, 0}, {-1, 0}, {0, 1}, {0, -1}}; // Possible directions

        for (int i = 0; i < t; i++) {
            grid[cells[i][0]][cells[i][1]] = 1; // Mark cells from the given list as blocked
        }

        queue<pair<int, int>> q;
        
        for (int i = 1; i <= n; i++) {
            if (grid[1][i] == 0) {
                q.push({1, i}); // Start BFS from the top row
                grid[1][i] = 1; // Mark the cell as visited
            }
        }
        while (!q.empty()) {
            pair<int, int> p = q.front();
            q.pop();
            int r = p.first, c = p.second; // Current cell coordinates
            for (auto d : directions) {
                int nr = r + d.first, nc = c + d.second; // Neighbor cell coordinates
                if (nr > 0 && nc > 0 && nr <= m && nc <= n && grid[nr][nc] == 0) {
                    grid[nr][nc] = 1; // Mark the neighbor cell as visited
                    if (nr == m) {
                        return true; // Found a path to the bottom row
                    }
                    q.push({nr, nc}); // Add the neighbor cell to the queue for further exploration
                }
            }
        }
        return false; // Unable to find a path to the bottom row
    }

    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        int left = 0, right = row * col, latestPossibleDay = 0;
        while (left < right - 1) {
            int mid = left + (right - left) / 2; // Calculate the mid-day
            if (isPossible(row, col, mid, cells)) {
                left = mid; // Update the left pointer to search in the upper half
                latestPossibleDay = mid; // Update the latest possible day
            } else {
                right = mid; // Update the right pointer to search in the lower half
            }
        }
        return latestPossibleDay;
    }
};
*/

//Using Union Find Algorithm

/*
class DSU{
    public:
    vector<int> parent;
    vector<int> size;
    DSU(int n){
        for(int i=0;i<n;i++){
            parent.push_back(i);
            size.push_back(1);
        }
    }
    
    int find_parent(int u){
        if(parent[u]==u)
            return u;
        
        return parent[u] = find_parent(parent[u]);
    }
    
    void uni(int u,int v){
        u = find_parent(u);
        v = find_parent(v);
        
        if(u==v)
            return;
        
        else if(size[u]>=size[v]){
            size[u]+=size[v];
            parent[v] = u;
        }
        else
        {
            size[v] += size[u];
            parent[u] = v;
        }
    }
};
class Solution {
public:
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        DSU d(row*col+2); //plus 2 coz 2 dummy nodes one start and one at end
        
        int start_dummy = row*col;
        int end_dummy = row*col+1;
        vector<vector<int>> grid(row,vector<int>(col,1));
        
        for(int j=0;j<col;j++){
            d.uni(start_dummy,j);
            d.uni(end_dummy,(row-1)*col+j);
        }
        int dr[] = {-1,0,1,0};
        int dc[] = {0,-1,0,1};
        
        for(int i=row*col-1;i>=0;i--){
            int r = cells[i][0]-1,c = cells[i][1]-1;//-1 coz it was in one based indexing
            grid[r][c] = 0;
            int key = r*col + c;
            for(int k=0;k<4;k++){
                int new_r = r + dr[k];
                int new_c = c + dc[k];
                
                if(new_r<0 || new_c<0 || new_r>=row || new_c>=col || grid[new_r][new_c])
                    continue;
                
                int new_key = new_r*col + new_c;
                d.uni(key,new_key);
                
                if(d.find_parent(start_dummy)==d.find_parent(end_dummy))
                    return i;
                
            }
        }
        return 0;
    }
};
*/