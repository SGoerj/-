#include<stdio.h>
void exc(int *a,int *b){
    int c;
    c=*b;*b=*a;*a=c;
}
void four_corner(int n,int a[n][n]){
    int min=a[0][0],nmb,i;
    for(i=0;i<(n*n);i++){
        if(*(*(a)+i)<=min){
            min=*(*(a)+i);nmb=i;
        }
    }
    exc((*(a)+nmb),(*(a)));
    for(i=1,min=a[0][1];i<(n*n);i++){
        if(*(*(a)+i)<=min){
            min=*(*(a)+i);nmb=i;
        }
    }
    exc((*(a)+nmb),(*(a)+n-1));
    for(int i=1,min=a[0][1];i<(n*n);i++){
        if(i==n-1)i++;
        if(*(*(a)+i)<=min){
            min=*(*(a)+i);nmb=i;
        }
    }
    exc((*(a)+nmb),(*(a+n-1)));
    for(int i=1,min=a[0][1];i<(n*n);i++){
        if(i==n-1||i==n*n-n)i++;
        if(*(*(a)+i)<=min){
            min=*(*(a)+i);nmb=i;
        }
    }
    exc((*(a)+nmb),(*(a+n-1)+n-1));
}
int main(){
    int n;
    scanf_s("%d",&n);
    int a[n][n];
    for(int i=0;i<(n*n-1);i++){
        scanf_s("%d ",*a+i);
    }
    scanf_s("%d",*a+n*n-1);
    four_corner(n,a);printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}