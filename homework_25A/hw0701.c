#include<stdio.h>
#include<stdlib.h>
int i,j,data[500],key[10]={9,53,368,1064,1753,1,271,799,1968,1997},cmp,avr,n,Max,N;
void exc(int *a,int *b){
    int c;
    c=*b;*b=*a;*a=c;
}
void sfind(int a,int z[]){
    cmp=0;
    for(int b=0;b<500;b++){
        cmp+=1;
        if(a==z[b]){
            printf("%d\t存在，比较了%d\t次\n",a,cmp);
            avr+=cmp;
            n+=1;
            return;
        }
    }
    printf("%d\t不存在，比较了%d次\n",a,cmp);
}
void hfind(int a,int z[]){
    cmp=0;int max=499,mid,min=0;
    while(max>=min){
        mid=(max+min)/2;
        cmp+=1;
        if(a==z[mid]){
            avr+=cmp;n+=1;
            printf("%d\t存在，比较了%d次\n",a,cmp);
            return;
        }
        else if(a>z[mid])min=mid+1;
        else max=mid-1;
    }
    printf("%d\t不存在，比较了%d次\n",a,cmp);
}
int main(){
    srand(1);
    for(i=0;i<500;i++){
        data[i]=rand()%2000;
    }//初始化数据
    avr=0;n=0;
    for(i=0;i<10;i++){
        sfind(key[i],data);
    }//顺序查找
    printf("找到时平均进行了%d次比较\n",avr/n);
    for(i=499;i>=0;i--){
        Max=data[0];
        for(j=0;j<=i;j++){
            if(data[j]>=Max){
                Max=data[j];N=j;
            }
        }
        exc(&data[N],&data[i]);
    }//选择法排序
    avr=0;n=0;
    for(i=0;i<10;i++){
        hfind(key[i],data);
    }//二分法查找
    printf("找到时平均进行了%d次比较\n",avr/n);
}