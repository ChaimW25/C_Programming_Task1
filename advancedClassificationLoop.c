#include <stdio.h>
#include "NumClass.h"
#include <math.h>

int isPalindrome(int n){
    int temp=n;
    int sum=0;
    while (temp>0)
    {
        int s=temp%10;
        sum*=10;
        sum+=s;
        temp/=10;
    }
    if(sum==n){
        return TRUE;
    }
    return FALSE;
    
}
int isArmstrong(int n){
    int temp1=n; 
    int counter=0;
    while (temp1>0)
    {
        temp1/=10;
        counter++;
    }
    temp1=n;
    int sum=0;
    while (temp1>0)
    {
       sum+=(int)pow((double)(temp1%10),(double)counter);
       temp1/=10;
    }
    if(sum==n){
        return TRUE;
    }
    return FALSE;
}
