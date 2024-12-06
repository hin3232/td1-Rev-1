#include<stdio.h>
int PGCD(int a ,int b){
    while (b!=0){
        int mod ;
        mod=a%b;
        a=b;
        b=mod;
        
    }return a;}
int LCM(int a,int b){
    int lcm ;
    lcm=(a*b)/PGCD(a,b);
    return lcm;
    
}

int main (){
    int a,b;
    printf("Enter a and b :\n ");
    scanf ("%d %d",&b,&a);
    int lc=LCM(a,b);
    printf ("  Least Common Multiple (LCM):\n %d",lc);
    return 0;
}