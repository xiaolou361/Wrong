#include <stdio.h>
//pi = 4*(1-1/3+1/5-1/7+1/9... �������һ�����ֵҪС��10^-6
int main()
{
    double s = 0;
    int i;
    for (i = 1; i < 10e+6; i+=2) {
        if (i % 4 == 1)
            s += 1.0 / i;
        else
            s += -1.0 / i;

    }
    printf("%f\n", 4*s);
    return 0;
}