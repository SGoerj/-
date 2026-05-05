#include<stdio.h>
int sumoffactors(int p,int fac[]){
    int s=0;
    for(int i=1,n=0;i<=p;i++){
        if(p%i==0){
            fac[n]=i;s+=i;n++;
        }
    }
    return s;
}
int main(){
    int p,fac[200]={0};
    scanf_s("%d",&p);
    printf("%d\n",sumoffactors(p,fac));
    for(int i=0;fac[i];i++){
        printf("%d ",fac[i]);
    }
}