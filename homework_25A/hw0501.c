//第一题 打印弗洛伊德三角形
#include<stdio.h>
int n;
int main(){
    scanf_s("%d",&n);
    for(int i=1,k=1;i<=n;i++){
        for(int j=1;j<=i;j++,k++){
            printf("%d ",k);
        }
        printf("\n");
    }
}