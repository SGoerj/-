#include<stdio.h>
int soldiers[100],n,m,i,j=0,k;
void main(){
    printf("n和m分别为：");
    scanf_s("%d%d",&n,&m);
    for(i=0;i<=n-1;i++)
        soldiers[i]=1;
    for(i=1;i<=n-1;i++){
        for(k=0;k<=m;j++){
            if(soldiers[j%n]==1)
                k+=1;
            if(k==m)
                break;
        }
        soldiers[j%n]=0;
    }
    for(i=0;i<=n-1;i++)
        if(soldiers[i]==1)
            printf("%d",i+1);
}