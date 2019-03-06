#include <stdio.h>
#include <conio.h>

int tong(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    {
        s+=i;
    }
    return s;
}
int max(int a, int b)
{
    return (a>b) ? a : b;
}
int nt(int n)
{
    int i;
    if (n<2) return 0;
    for (i=2; i<=n/2; i++)
    {
        if (n%i==0) return 0;
    }
    return 1;
}
int main(int argc, char const *argv[])
{
    int i,n,a,b;
    printf("Nhap n: "); scanf("%d", &n);
    tong(n);
    printf("\n%d", n);
    nt(n);
    printf("\n%d", n);
    printf("nhap a: "); scanf("%d", &a);
    printf("nhap b: "); scanf("%d", &b);
    n=max(a,b);
    printf("%d",n);
    getch();
    return 0;
}