#include<stdio.h>
struct student{
int stunum;
char name[20];
float examscore;
float labscore;
float totalmark;
};
int main(){
    struct student stutable[10];
    printf("按行分别输入10位学生的学号，姓名，笔试成绩，实验成绩：\n");
    for(int i=0;i<10;i++){
        scanf("%d %s %f %f",&stutable[i].stunum,stutable[i].name,&stutable[i].examscore,&stutable[i].labscore);
        stutable[i].totalmark=0.6*stutable[i].examscore+0.4*stutable[i].labscore;
    }
    printf("按总分排序如下：\n");
    struct student T;
    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
            if(stutable[j].totalmark<=stutable[j+1].totalmark){T=stutable[j];stutable[j]=stutable[j+1];stutable[j+1]=T;}
        }
    }
    for(int i=0;i<10;i++){
        printf("%d\t%s\t%.1f\t%.1f\t%.2f\n",stutable[i].stunum,stutable[i].name,stutable[i].examscore,stutable[i].labscore,stutable[i].totalmark);
    }
    int a,b;printf("输入要查找的分数区间");
    scanf("%d%d",&a,&b);
    for(int i=0;i<10;i++){
        if(a<=stutable[i].totalmark&&stutable[i].totalmark<=b)printf("%d\t%s\t%.1f\t%.1f\t%.2f\n",stutable[i].stunum,stutable[i].name,stutable[i].examscore,stutable[i].labscore,stutable[i].totalmark);
    }
    return 0;
}