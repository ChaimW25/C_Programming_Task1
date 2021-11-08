#include <stdio.h>
#include "NumClass.h"
#include <math.h>

int main(){
int x;
int y;
int temp;
scanf("%d%d\n",&x,&y);
if(x<0||y<0){
    return 0;
}
if(y<x){
     temp=y;
     y=x;
     x=temp;
}
for (int i = x; i <= y; i++)
{
    if(isArmstrong(i)==1){
        printf("%d\n", i);
    }
}
for (int i = x; i <= y; i++)
{
    if(isPalindrome(i)==1){
        printf("%d\n", i);
    }
}
for (int i = x; i <= y; i++)
{
    if(isPrime(i)==1){
        printf("%d\n", i);
    }
}
for (int i = x; i <= y; i++)
{
    if(isStrong(i)==1){
        printf("%d\n", i);
    }
}
    return 0;
}
