class Solution {
public:
    double fun(double x, long long n) {
        if (n == 0) return 1;
        if (n == 1) return x;

        double half = fun(x, n / 2);
        if (n % 2 == 0)
            return half * half;
        else
            return half * half * x;
    }

    double sad(double x, long long n) {
        if (n == 0) return 1;
        if (n == 1) return 1 / x;

        double half = sad(x, n / 2);
        if (n % 2 == 0)
            return half * half;
        else
            return half * half * (1 / x);
    }

    double myPow(double x, int b) {
        long long n = b;

        if (n == 0) return 1;
        if (n > 0)
            return fun(x, n);
        else
            return sad(x, -n);
    }
};
