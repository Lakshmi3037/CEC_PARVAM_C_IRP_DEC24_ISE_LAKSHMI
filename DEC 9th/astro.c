#include<stdio.h>
int main(){
    char alphaUpr[]="ABCDEFGHIJKLMNOPQRSTWXYZ";
    char alphaLow[]="abcdefghijklmnopqrstwxyz";
    for(int i=0;i<26;i++)
        printf("%c= %c= %d ",alphaUpr[i],alphaLow[i],i+1);
    return 0;
}
