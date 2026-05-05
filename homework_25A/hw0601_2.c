//选择法
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define     N       20
int nmb[N],i,j,n,Max;
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
    //生成随机数组
    for(i=N-1;i>=0;i--){
        Max=nmb[0];
        for(j=0;j<=i;j++){
            if(nmb[j]>=Max){
                Max=nmb[j];n=j;
            }
        }
        exc(&nmb[n],&nmb[i]);
    }
    //排序
    for(i=0;i<=N-1;i++){
        printf("%d ",nmb[i]);
    }
    //输出
}