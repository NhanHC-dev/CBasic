#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define PI 3.14
int main()
{
     float R;
     
     printf("Nhap vao ban kinh R:");
     scanf("%f", &R);

     printf("%f:\n", R);

     printf("%f:\n", 2*PI*R);

     printf("%f:\n", PI*R*R);

     printf("%f:\n", 4*PI*R*R*R);
     getch();
}