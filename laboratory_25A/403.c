#include<stdio.h>
int data1[10] = {1,2,3,4,5,6,7,8,10,9},data2[10] = {10,9,8,7,6,5,4,3,2,1},comparisons=0,moves=0,i,j,card;
int main(){
    for(i=1;i<=9;i++){
        for(j=i-1,card=data1[i];j>=0&&data1[j]>=card;j--){
            data1[j+1]=data1[j];moves+=1;
        }
        if(j!=i-1){data1[j+1]=card;moves+=1;}
        comparisons+=i-j;
    }
    for(i=0;i<=9;i++){
        printf("%d ",data1[i]);
    }
    printf("\ndata1比较%d次,移动%d次\n",comparisons,moves);
    comparisons=0,moves=0;
    for(i=1;i<=9;i++){
        for(j=i-1,card=data2[i];j>=0&&data2[j]>=card;j--){
            data2[j+1]=data2[j];moves+=1;
        }
        if(j!=i-1){data2[j+1]=card;moves+=1;}
        comparisons+=i-j;
    }
    for(i=0;i<=9;i++){
        printf("%d ",data2[i]);
    }
    printf("\ndata2比较%d次,移动%d次\n",comparisons,moves);
}