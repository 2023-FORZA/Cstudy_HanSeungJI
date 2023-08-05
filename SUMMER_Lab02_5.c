//7842

#include <stdio.h>

int main()
{
    int n;
    double a;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf",&a);
        printf("%.10lf\n",a/6.);
    }
    return 0;
}
