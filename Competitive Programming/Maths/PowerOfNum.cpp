//50. Pow(x, n)

//complexity O(log(n))

/*
class Solution {
public:
    double pow(double x,int n){
        if(n == 0) return 1;
        double y  = myPow(x,n/2);
        if(n < 0) return 1/y;
        if(n % 2 == 0) return y*y;
        else return y*y*x;
    }
    double myPow(double x, int n) {
        double ans = pow(x,abs(n));
        if(n >= 0) return ans;
        else return 1/ans;
    }
};
*/

/*
class Solution {
public: 
    //Iterative solution by using Bits
    double myPow(double x, int n) {
        int pow = abs(n);
        double ans = 1;
        while(pow > 0){
            if(pow % 2 == 1) ans *= x;
            pow>>=1;
            x*=x;
        }
        return n < 0 ? 1/ans : ans;
    }
};
*/
