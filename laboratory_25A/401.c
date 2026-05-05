#include<time.h>
#include<stdlib.h>
#include<stdio.h>
int a[21],i,j,k;
int main(){
    srand(time(NULL));
    for(i=1;i<=20;i++)a[i]=rand()%101;
    printf("请输入你想查找的k：");
    scanf("%d",&k);a[0]=k;
    for(i=20;;i--){
        if(a[i]==k&&i!=0){
            printf("%d是第%d个数",k,i);
            return 0;
        }
        else{
            printf("not found\n");
            break;
        }
    }
    for(i=1;i<=20;i++)printf("%d ",a[i]);
}