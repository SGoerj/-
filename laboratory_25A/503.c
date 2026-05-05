#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define     N   20
int n=0;
int get_array(int a[]){
    char B[2048],*p=B;
    fgets(B,2048,stdin);
    p[strcspn(p,"\n")]='\0';
    while(*p){
        while(*p&&!isdigit(*p))p++;
        if(!*p)break;
        a[n]=strtol(p,&p,10);++n;
    }
    return n;
}
int is_asc_or_desc(int a[],int n){
    int i=0,t=1;
    while(i<n-1&&t==1){
        (a[i]<=a[i+1])?(t=1):(t=0);
        i++;
    }
    if(t==1)return t;
    i=0;t=-1;
    while(i<n-1&&t==-1){
        (a[i]>=a[i+1])?(t=-1):(t=0);
        i++;
    }
    if(t==-1)return t;
    return 0;
}
int main(){
    int a[N],i;
    get_array(a);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n%d",is_asc_or_desc(a,n));
}