class Solution {
public:
    bool checkPerfectNumber(int n) {
        if (n == 1) return false;
        int sum = 1;
        for (int i = 2; i * i <= n; i++)  // here we can also write i <=sqrt(n)
        {
            if (n % i == 0) {
                sum += i;
                if (n / i != n and n / i != i) sum += n / i;
            }
        }
        return sum == n;
    }
};