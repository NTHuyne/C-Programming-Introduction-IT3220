#include <stdio.h>
#include <math.h>

int main()
{

    int h1, m1, s1, h2, m2, s2;
    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);
    int T1, T2;
    T1 = h1 * 3600 + m1 * 60 + s1;
    T2 = h2 * 3600 + m2 * 60 + s2;
    int s = abs(T1 - T2);
    printf("%d", s);
    return 0;
}