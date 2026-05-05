#include<stdio.h>
int data1[10] = {1,2,3,4,5,6,7,8,10,9},data2[10] = {10,9,8,7,6,5,4,3,2,1},comparisons=0,moves=0,i,j;
void exc(int *a,int *b){
    int c;
    c=*b;*b=*a;*a=c;
}
int main(){
    for(i=9;i>0;i--){
        for(j=0;j<=i-1;j++){
            if(data1[j]>=data1[j+1]){
                exc(&data1[j],&data1[j+1]);
                moves+=3;
            }
            comparisons+=1;
        }
    }
    for(i=0;i<=9;i++){
        printf("%d ",data1[i]);
    }
    printf("\ndata1比较%d次,移动%d次\n",comparisons,moves);
    comparisons=0,moves=0;
    for(i=9;i>0;i--){
        for(j=0;j<=i-1;j++){
            if(data2[j]>=data2[j+1]){
                exc(&data2[j],&data2[j+1]);
                moves+=3;
            }
            comparisons+=1;
        }
    }
    for(i=0;i<=9;i++){
        printf("%d ",data2[i]);
    }
    printf("\ndata2比较%d次,移动%d次\n",comparisons,moves);
}