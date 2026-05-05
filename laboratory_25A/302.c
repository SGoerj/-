#include<stdio.h>
int main(){
    int i,j,n=0,t;
    int grade[50][4];
    float ave[50];
    FILE *score;
    score=fopen("C:\\Users\\jbh\\Desktop\\vscode\\laboratory\\score50.txt","r");
    printf("平均成绩按学号排序：");
    for(i=0;i<=49;i++){
        for(j=0;j<=3;j++){
            fscanf(score,"%d",&grade[i][j]);
        }
        ave[i]=(grade[i][1]+grade[i][2]+grade[i][3])/3.0;
        if(ave[i]>=85)
            n+=1;
        printf("%.1f ",ave[i]);
    }
    printf("\n85分以上的人数有：%d 人\n",n);
    for(i=0;i<=49;i++){
        for(j=0;j<=49-i;j++){
            if(ave[j]<ave[j+1]){
                t=ave[j+1];
                ave[j+1]=ave[j];
                ave[j]=t;
            }
        }
    }
    printf("平均成绩从高到低排序：");
    for(i=0;i<=49;i++){
        printf("%.1f ",ave[i]);
    }
    fclose(score);
    return 0;
}