#include<stdio.h>
#include<conio.h>
#include<math.h>

int NT(int n)
{
    int i;
    printf("Enter n: "); scanf("%d", n);

    if(n < 2){
        printf("\n%d khong phai so nguyen to", n);
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("\n%d la so nguyen to", n);
        return 1;
    }else{
        printf("\n%d khong phai so nguyen to", n);
        return 0;
    }
    getch();
}