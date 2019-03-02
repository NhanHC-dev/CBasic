#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float a,b,c,p,S;
  

    printf(" Enter a:"); scanf("%f", &a);
    printf(" Enter b:"); scanf("%f", &b);
    printf(" Enter c:"); scanf("%f", &c);
    if(a+b<=c || a+c<=b || b+c<=a)
    {
        printf(" Day khong pahi la hinh tam giac");
    }
    else
        p=(a+b+c)/2;
        S=sqrt(p*(p-a)*(p-b)*(p-c));
    {  
       printf(" Chu vi tam giac la: %f.\n",a+b+c);
       printf(" Dien tich tam giac la: %f.\n ", S );
    }
    getch();
    return 0;

}