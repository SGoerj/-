# include<stdio.h>
int n;
int main(){
    scanf_s("%d",&n);
    for(int i=1;i<=n;i+=2){
        for(int k=1;k<=n+1-i;k++)
            printf(" ");
        for(int j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
    for(int i=n-2;i>=1;i-=2){
        for(int k=1;k<=n+1-i;k++)
            printf(" ");
        for(int j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
}