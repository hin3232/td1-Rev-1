#include <stdio.h>
#include<math.h>
int prime(int a ){
    if (a==1){
        return 0;
    }
    else{
        for (int i =2;i<=sqrt(a);i++){
            if (a%i==0){
                return 0;
            }
            else{
                return 1;
            }
        }
        
    }
}
int main(){
    printf ("Enter a number : \n");
    int a;
    scanf ("%d",&a);
   
    if( prime(a)) {
        printf (" %d is prime ",a);
    }
    else {
        printf("%d is not prime ",a);
        
    }
   return 0; 
}