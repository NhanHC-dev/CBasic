#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()

{
    float  a,b,c,delta,x1,x2;
 
    {
    printf("Nhap a:"); scanf("%f", &a);
    printf("Nhap b:"); scanf("%f", &b);
    if(a==0) 
     {printf(" Phuong trinh vo nghiem,\n");}
    else 
     {printf(" Phuong trinh mot nghiem la: %f\n",-b/a);}
    }
    {
     
    printf("Nhap a:"); scanf("%f", &a);
    printf("Nhap b:"); scanf("%f", &b);
    printf("Nhap c:"); scanf("%f", &c);
      delta=b*b-4*a*c;
		if (delta<0) printf("Phuong trinh vo nghiem");
		if (delta==0)
		{
			x1=-b/(2*a);
			printf("Phuong trinh co nghiem kep:%f",x1);
		}
		if (delta>0)
		{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("Phuong trinh co 2 nghiem phan biet");
			printf("%f\n",x1);
			printf("%f\n",x2);
    }
    }
    getch();
    
}