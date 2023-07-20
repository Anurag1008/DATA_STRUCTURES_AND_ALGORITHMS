//https://practice.geeksforgeeks.org/problems/set-bits0143/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//Number of 1 Bits

/*
class Solution {
  public:
    int setBits(int N) {
        int count = 0;
        while(N != 0){
            if(N&1 == 1) count++;
            N>>=1;
        }
        return count;
    }
};


#include<bitset>

class Solution {
  public:
    int setBits(int N) {
        unsigned int num = N;
        std::bitset<32> bits(num);
        int count = bits.count();
        return count;
    }
};
*/