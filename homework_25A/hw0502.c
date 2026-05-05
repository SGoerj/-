//第二题 输出倒置的弗洛伊德三角形
#include<stdio.h>
int n;
int main(){
    scanf_s("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1,k=(i-1)*i/2+1;j<=i;j++,k++){
            printf("%d ",k);
        }
        printf("\n");
    }
}