#include <stdio.h>

int nwd(int a,int b)
{
    int pom;
    while(b!=0)
    {
        pom=b;
        b=a%b;
        a=pom;
    }
    return a;
}

int nww(int a,int b)
{
    return a*b/nwd(a,b);
}

int main(void)
{
    int x,y;
    scanf("%d %d", &x, &y);
    int wynik=nwd(x,y);
    printf("NWD, x i y, to = %d\n", wynik);
}