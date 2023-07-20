//https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//Bit Difference

/*
class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        int count = 0;
        while(a!=b){
            if( (a&1) != (b&1) ) count++;
            a>>=1;
            b>>=1;
        }
        return count;
    }
};



class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        int x = a^b;
        int count = 0;
        while(x>0){
            x=x&(x-1);
            count++;
        }
        return count;
    }
};

*/