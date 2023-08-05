//1925
#include <stdio.h>
#include <math.h>

double calcLength(int x1, int x2, int y1, int y2)
{
    return pow(y1 - x1, 2) + pow(y2 - x2, 2);
}

void findMax(double x, double y, double z)
{
    if (x == y && y == z)
        printf("JungTriangle\n");
    else if (x == y || y == z || x == z)
    {
        if (x >= y && x >= z)
            check2Q(x, y, z);
        else if (y >= x && y >= z)
            check2Q(y, x, z);
        else
            check2Q(z, x, y);
    }
    else
    {
        if (x >= y && x >= z)
            checkQ(x, y, z);
        else if (y >= x && y >= z)
            checkQ(y, x, z);
        else
            checkQ(z, x, y);
    }
    return;
}

void check2Q(double max, double a, double b)
{
    if (a + b == max)
        printf("Jikkak2Triangle\n");
    else if (a + b < max)
        printf("Dunkak2Triangle\n");
    else
        printf("Yeahkak2Triangle\n");
    return;
}

void checkQ(double max, double a, double b)
{
    if (a + b == max)
        printf("JikkakTriangle\n");
    else if (a + b < max)
        printf("DunkakTriangle\n");
    else
        printf("YeahkakTriangle\n");
    return;
}

int main()
{
    double x, y, z = 0;
    int x1, x2, y1, y2, z1, z2;

    scanf("%d %d %d %d %d %d", &x1, &x2, &y1, &y2, &z1, &z2);

    if ((x2 - y2) * (y1 - z1) == (y2 - z2) * (x1 - y1))
    {
        printf("X\n");
        return 0;
    }

    x = calcLength(x1, x2, y1, y2);
    y = calcLength(y1, y2, z1, z2);
    z = calcLength(z1, z2, x1, x2);

    findMax(x, y, z);

    return 0;
}
