class Solution {
public:
    double angleClock(int h, int m) {
        double a = (m / 60.0) * 360;
        double b = ((h % 12) / 12.0) * 360;
        double x = (m / 60.0) * 30;
        b += x;

        double c = abs(a - b);

        if (c > 180.0)
            return 360.0 - c;

        return c;
    }
};