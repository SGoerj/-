#include<stdio.h>
#include<stdlib.h>
int day_of_year(int year,int month,int day){
    int M0[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},M1[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0&&year%100!=0)||(year%400==0)){
        for(int i=0;i<=month-1;i++)day+=M1[i];
        return day;
    }
    else{
        for(int i=0;i<=month-1;i++)day+=M0[i];
        return day;
    }
}
int main(){
    char a[20],*p=a;
    int nmb[3];
    fgets(a,20,stdin);
    for(int i=0;i<3;i++,p++)
        nmb[i]=strtol(p,&p,10);
    printf("该日期是当年的第%d天\n",day_of_year(nmb[0],nmb[1],nmb[2]));
}