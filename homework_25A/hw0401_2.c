# include<stdio.h>
int sc;
int main(){
    scanf_s("%d",&sc);
    if(0<=sc&&sc<=100){
        switch((sc>=95)+(sc>=90)+(sc>=85)+(sc>=82)+(sc>=78)+(sc>=75)+(sc>=72)+(sc>=68)+(sc>=65)+(sc>=64)+(sc>=61)+(sc>=60)){
            case 12:
                printf("百分制=%d，五分制=A+，GPA=4.3",sc);break;
            case 11:
                printf("百分制=%d，五分制=A，GPA=4.0",sc);break;
            case 10:
                printf("百分制=%d，五分制=A-，GPA=3.7",sc);break;
            case 9:
                printf("百分制=%d，五分制=B+，GPA=3.3",sc);break;
            case 8:
                printf("百分制=%d，五分制=B，GPA=3.0",sc);break;
            case 7:
                printf("百分制=%d，五分制=B-，GPA=2.7",sc);break;
            case 6:
                printf("百分制=%d，五分制=C+，GPA=2.3",sc);break;
            case 5:
                printf("百分制=%d，五分制=C，GPA=2.0",sc);break;
            case 4:
                printf("百分制=%d，五分制=C-，GPA=1.7",sc);break;
            case 3:
                printf("百分制=%d，五分制=D+，GPA=1.5",sc);break;
            case 2:
                printf("百分制=%d，五分制=D，GPA=1.3",sc);break;
            case 1:
                printf("百分制=%d，五分制=D-，GPA=1.0",sc);break;
            default:
                printf("百分制=%d，五分制=f，GPA=0",sc);break;
        }
    }
    else
        printf("数据有误！");
    return 0;
}