//program to find armstrong no between 101 to 500
#include <stdio.h>
#include<conio.h>
int main(){
    int n,rem,sum=0,temp;
    printf("Armstrong numbers between 101 to 500 are:\n");
    for(n=101;n<=500;n++){
        temp=n;
        while(temp!=0){
            rem=temp%10;
            sum=sum+(rem*rem*rem);
            temp=temp/10;
        }
        if(sum==n){
            printf("%d\n",n);
        }        
        sum=0;
    }
    getch();
    return 0;
}