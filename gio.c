#include<stdio.h>
#include<conio.h>

int main()
{
        int giay;
        printf("Nhap vao so giay: ");
        scanf("%d",&giay);
        if(giay > 86399)
         printf("Nhap so nho hon\n");
     int gio = giay/3600;
     int phut = giay/60 - gio*60;
     giay = giay - phut*60 - gio*3600;
     printf("%.2d:%.2d:%.2d",gio,phut,giay);
     getch();
  
     return 0;
}