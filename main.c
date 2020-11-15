#include "myMath.h"
#include <stdio.h>

    int main() {
        float num;
        printf("Enter your Number :");
        scanf("%f", &num);
        double ans = (Exponent(num)) + (Power(num, 3.0)) - 2.0;
        printf("The Answer is: %0.4lf\n", ans);
        num = 0;
        printf("Enter your Number :");
        scanf("%f", &num);
        double ans2 = (mul(3, num)) + Power(mul(2, num), 2);
        printf("The Answer is: %0.4f\n", ans2);
        float num2;
		printf("Enter your Number :");
		scanf("%f", &num2);
		double temp= (mul(4.0,num2));
		double temp2=(Power(temp,3));
        float ans3 = (div(temp2,5)) - (mul(2.0,num2));
        printf("The Answer is: %0.4lf\n", ans3);
		return 0;

    };

