#include <stdio.h>
#include "NumClass.h"
#include <math.h>

int isPaliHelp1(int n, int counter){
   if(n==0){
       return counter;
   }
   return isPaliHelp1(n/10,counter+1);
}


int isPaliHelp3(int n, int i){
    int temp=n/(int)pow(10,i);
    return temp%10;
} 


int isPaliHelp2(int n, int length, int i){
if(i==length/2){
return TRUE;
}
int a1=isPaliHelp3(n,i);
int a2=isPaliHelp3(n,length-1-i);
if(a1!=a2){
    return FALSE;
}
return isPaliHelp2(n,length,i+1);
}


int isPalindrome(int n){

int length=isPaliHelp1(n,0);
return isPaliHelp2(n,length,0);

}

int isArmsHelp1(int n, int counter){
    if(n==0){
        return counter;
    }
    return isArmsHelp1(n/10,counter+1);
}

int isArmsHelp2(int n, int temp, int sum, int length){
    if(temp==0){
        if(sum==n){
            return TRUE;
        }
        return FALSE;
    }
    sum+=(int)pow((double)(temp%10),(double)length);
    temp/=10;
    return isArmsHelp2(n,temp,sum,length);
}



int isArmstrong(int n){
    int length=isArmsHelp1(n,0);
    return isArmsHelp2(n,n,0,length);
}
