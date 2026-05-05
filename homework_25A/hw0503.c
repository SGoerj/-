//第三题 连续素数和
#include<stdio.h>
int n,P[10],S=0,i,N=0,x;
int prime(int a){
    for(int x=2;x<=(a-1);x++){
        if(a%x==0)
            return 0;
    }
    return 1;
}
int main(){
    scanf_s("%d",&n);
    for(i=n;i>=2&&N<=10;i-=1){
        if(prime(i)){
            P[N]=i;
            N++;
        }
    }
    if(N<10){
        printf("failed.");
    }
    else{
        for(N=0;N<=9;N++){
            S+=P[N];
            printf("%d",P[N]);
            if(N!=9)
                printf("+");
        }
        printf("=%d",S);
    }
}