#include<stdio.h>
int i,j,card,a[20]={10,20,30,40,50,60,70,80,90,100},b[10]={1,43,72,23,9,87,54,3,55,0};
void exc(int *a,int *b){
    int c;
    c=*b;*b=*a;*a=c;
}
int main(){
    for(i=0;i<=9;i++){
        a[i+10]=b[i];
    }
    for(i=1;i<=19;i++){
        for(j=i-1,card=a[i];j>=0&&a[j]>=card;j--){
            exc(&a[j],&a[j+1]);
        }
    }
    for(i=0;i<=19;i++){
        printf("%d ",a[i]);
    }
}