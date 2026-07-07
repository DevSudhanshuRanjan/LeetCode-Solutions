class Solution {
public:
    long long sumAndMultiply(int n) {
        int x = 0;
        while(n>0){
            int r = n%10;
            if(r!=0) x = x*10+ r;
            n/=10;
        }
        long long sum = 0;
        long long num = 0;
        while(x>0){
            int r = x%10;
            sum+=r;
            num = num*10 + r;
            x/=10;
        }

        return num*sum;
    }
};