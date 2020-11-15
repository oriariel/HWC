
#include "myMath.h"
 double Exponent(int x) { 
        int exp = x;
        float e = 2.71828182846;
        double ans;
        ans = Power(e, x);
        return (ans);

    };
    double Power(double x, int y) {
                double base = x;
                int exp = y;
                double result = 1.0;
                while (exp != 0) {
                    result *= base;
                    --exp;
                }
                return(result);
            };
  