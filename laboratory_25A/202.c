#include<stdio.h>
int prime(int a){
    for(int x=2;x<=(a-1);x++){
        if(a%x==0)
            return 0;
    }
    return 1;
}
int main(){
    for(int n=6;n<=100;n+=2){
        for(int i=2;i<=(n/2);i++){
            if(prime(i)&&prime(n-i)){
                printf("%d=%d+%d\n",n,i,n-i);
            }
        }
    }
}