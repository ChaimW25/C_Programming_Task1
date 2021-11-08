#include "NumClass.h"
#include <stdio.h>
#include <math.h>

int isPrime(int a){

 for (size_t i = 2; i <= a/2; i++)
 {
    if(a%i==0){
        return FALSE;
    }
 }
 return TRUE;
    
}
int factorial(int s){
    int mult=1;
    for (size_t i = 1; i <= s; i++)
    {
        mult*=i;
    }
    return mult;
}
int isStrong(int a){
int temp=a;
int sum=0;
while (temp>0)
{
    sum+=factorial(temp%10);
    temp/=10;
}
if(sum==a){
    return TRUE;
}
return FALSE;
}
