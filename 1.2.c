#include<stdio.h>
int PGCD(int a ,int b){
    while (b!=0){
        int mod ;
        mod=a%b;
        a=b;
        b=mod;
        
    }return a;
}
int main (){
    int a,b;
    printf("Enter a and b (a>b):\n ");
    scanf ("%d %d",&b,&a);
    int gc=PGCD(a,b);
    printf (" the Greatest Common Divisor (GCD):\n %d",gc);
    return 0;
}