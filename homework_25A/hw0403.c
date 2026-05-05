# include<stdio.h>
int i,j,s,n=0;
int main(){
    for(i=1;i<=1000;i=i+1){
        s=0;
        for(j=1;j<i;j=j+1){
            if(i%j==0)
                s=s+j;
        }
        if(s==i)
            n=n+1;
    }
    printf("1~1000的完数共有%d个\n",n);
    for(i=1;i<=1000;i=i+1){
        s=0;
        for(j=1;j<i;j=j+1){
            if(i%j==0)
                s=s+j;
        }
        if(s==i){
            printf("完数%d的因子为：",i);
            for(j=1;j<i;j=j+1){
                if(i%j==0)
                    printf(" %d",j);
            }
            printf("\n");
        }
    }
    return 0;
}