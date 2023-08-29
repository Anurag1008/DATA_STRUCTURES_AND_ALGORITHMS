
//2483. Minimum Penalty for a Shop

/*
class Solution {
public:
    int bestClosingTime(string customers) {
        int score = 0;
        int maxscore = 0;
        int minpos = -1;

        for(int i=0;i<customers.size();i++){
            score+= (customers[i] == 'Y') ? 1 : -1;
            if(score > maxscore){
                maxscore = score;
                minpos = i;
            }
        }
        return minpos+1;
    }
};
*/