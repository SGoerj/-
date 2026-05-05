# include<stdio.h>
int sc;
int main(){
    scanf_s("%d",&sc);
    if (95<=sc&&sc<=100)
        printf("百分制=%d，五分制=A+，GPA=4.3",sc);
    else if (90<=sc&&sc<=94)
        printf("百分制=%d，五分制=A，GPA=4.0",sc);
    else if (85<=sc&&sc<=89)
        printf("百分制=%d，五分制=A-，GPA=3.7",sc);
    else if (82<=sc&&sc<=84)
        printf("百分制=%d，五分制=B+，GPA=3.3",sc);
    else if (78<=sc&&sc<=81)
        printf("百分制=%d，五分制=B，GPA=3.0",sc);
    else if (75<=sc&&sc<=77)
        printf("百分制=%d，五分制=B-，GPA=2.7",sc);
    else if (72<=sc&&sc<=74)
        printf("百分制=%d，五分制=C+，GPA=2.3",sc);
    else if (68<=sc&&sc<=71)
        printf("百分制=%d，五分制=C，GPA=2.0",sc);
    else if (65<=sc&&sc<=67)
        printf("百分制=%d，五分制=C-，GPA=1.7",sc);
    else if (sc==64)
        printf("百分制=%d，五分制=D+，GPA=1.5",sc);
    else if (61<=sc&&sc<=63)
        printf("百分制=%d，五分制=D，GPA=1.3",sc);
    else if (sc==60)
        printf("百分制=%d，五分制=D-，GPA=1.0",sc);
    else if(0<=sc&&sc<60)
        printf("百分制=%d，五分制=f，GPA=0",sc);
    else
        printf("数据有误！");
    return 0;
}