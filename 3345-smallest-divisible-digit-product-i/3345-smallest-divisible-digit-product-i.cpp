class Solution {
public:
    int prodofdigits(int n){
        int res = 1;
        while(n){
            res *= (n%10);
            n/=10;
        }
        return res;
    }
    int smallestNumber(int n, int t) {
        while(n){
            if(prodofdigits(n)%t == 0) break;
            else n++;
        }
        return n;
    }
};