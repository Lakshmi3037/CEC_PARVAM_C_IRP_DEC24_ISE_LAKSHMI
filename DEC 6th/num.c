#include<stdio.h>
int main(){
    int num,sum=0,rem=0;
    printf("enter the number to get sum of digit:");
    scanf("%d",&num);

    while(num>0){
        rem=num%10;
        sum=sum+rem*rem;
        num=num/10;
    }
    printf("sum of digit=%d",sum);
    return 0;
}