#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int n,i,t,t1,c,k;
    t=0;
    c=0;
    t1=0;
    printf("nhap n:"); scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Nhap vao:");
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        t+=a[i];
        if (!(a[i] % 2))
        {
            t1+=a[i];
            c++;
        }
    }
    printf("\nTong cua mang: %d", t);
    printf("\nCac so le la: ");
    for(i=0;i<n;i++)
    {
        if (a[i]%2) printf("%d ", a[i]);
    }
    printf("\nTong cac so chan: %d", t1);
    printf("\nCo %d so chan", c);
    printf("\n>> Them phan tu vao cuoi mang <<\n");
    printf("Nhap vao:"); scanf("%d", &a[n+1]);
    printf("\nA[%d]= %d", n+1, a[n+1]);
    printf("\n>> Xoa phan tu bat ki cua mang <<\n");
    printf("Nhap vao: "); scanf("%d", &k);
    a[k]=0;
    printf("\nA[%d]=%d", k, a[k]); 
    getch();
    return 0;
}
