#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
int stunum;
char name[20];
float score;
struct student *next;
};
struct student *buildlist(int n){
    struct student*pointer=NULL,*head=NULL;
    for(int i=0;i<n;i++){
        pointer=(struct student*)malloc(sizeof(struct student));
        scanf("%d %s %f",&pointer->stunum,pointer->name,&pointer->score);
        pointer->next=head;head=pointer;
    }
    return head;
}
void printlist(struct student *head){
    while(head){
        printf("%d\t%s\t%.1f\n",head->stunum,head->name,head->score);
        head=head->next;
    }
}
void searchlist(struct student *head, char *name){
    while(head){
        if(strcmp(head->name,name)==0){printf("%d\t%s\t%.1f\n",head->stunum,head->name,head->score);return;}
        head=head->next;
    }
    printf("不存在");
}
void freechain(struct student *head){
    while(head){
        struct student *p=head;
        head=head->next;
        free(p);
    }
}
int main(){
    int n;printf("输入学生人数：");scanf("%d",&n);printf("每行按学号，姓名，成绩的顺序输入数据：\n");
    char Name[20];
    struct student*head=buildlist(n);
    printlist(head);
    printf("输入查找的人名：");
    scanf("%s",Name);
    searchlist(head,Name);
    freechain(head);
    return 0;
}