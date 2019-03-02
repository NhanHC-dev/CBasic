#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
int a,b;       char c;

printf("Nhap so thu nhat:");
scanf("%d",&a);

printf("Nhap so thu hai:");
scanf("%d",&b);

printf("Nhap ki tu:");
scanf(" %c",&c);

printf("Enter 1st number: %d\n",a);
printf("Enter 2nd number: %d\n",b);
printf("Enter operand: %c\n",c);
 
  if(c=='+')
   {printf("=> The result of: %d %c %d = %d",a,c,b,a+b);}
  else if(c=='-')
   {printf("=> The result of: %d %c %d = %d",a,c,b,a-b);}
  else if(c=='*')
   {printf("=> The result of: %d %c %d = %d",a,c,b,a*b);}
  else if (c=='/') 
   {printf("=> The result of: %d %c %d = %d",a,c,b,a/b);}

   getch();
}