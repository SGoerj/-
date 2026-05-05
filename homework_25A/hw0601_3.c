//插入法
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define     N       20
int nmb[N],i,j,n,card,k;
void exc(int *a,int *b){
    int c;
    c=*b;*b=*a;*a=c;
}
//交换
int main(){
    srand((unsigned) time(NULL));
    for(i=0;i<=N-1;i++){
        nmb[i]=rand()%101;
    }
    //先生成随机数组
    for(i=1;i<=N-1;i++){
        for(j=i-1,card=nmb[i];j>=0&&nmb[j]>=card;j--){
            exc(&nmb[j],&nmb[j+1]);
        }
    }
    //排序
    for(i=0;i<=N-1;i++){
        printf("%d ",nmb[i]);
    }
    //输出
}