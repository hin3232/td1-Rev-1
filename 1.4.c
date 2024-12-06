#include <stdio.h>
void SOF(int N){
    int prime[N+1];
    for (int i=0;i<=N;i++){
        prime[i]=1;
        prime[0]=prime[1]=0;}
    for (int j=2;j*j<=N;j++){
            if (prime[j]==1){//اذا كان عدد الولي
             for (int p =j*j;p<=N;p+=j){
                prime[p]=0;
            }}
            
        }
    printf (" the prime numbers from 2 to %d :\n  ",N);
        
    for (int i=2 ; i<=N;i++){
        if (prime[i])
        { printf ("%d \n ",i);}    }
    
    
}
int main (){
    int N;
    printf(" enter N:\n");
    scanf("%d",&N);
    SOF(N);
    return 0;
}