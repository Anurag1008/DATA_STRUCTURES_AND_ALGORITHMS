//1870. Minimum Speed to Arrive on Time

/*
class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int l = 1;
        int r = 10000009;
        while(l<r){
            int mid  =(r+l)/2;
            double tot_time = 0;
            for(auto d : dist){
                if(tot_time > (int)tot_time) tot_time = (double)((int)tot_time + 1);
                tot_time += ((double)(d))/((double)(mid));
            }
            if(tot_time > hour) l = mid+1;
            else r = mid;
        }
        return (l > 10000000 ? -1 : l);
    }
};
*/