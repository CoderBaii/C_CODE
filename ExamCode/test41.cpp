#include <stdio.h>
#include <string.h>
//程序输入学生姓名，查询其学习成绩。查询可连续进行，直到键入end结束。

struct student
{
    int no;
    char name[8];
    int score;
};

struct student stu[] = {{10,"Tom",90},{11,"Jerry",80},{12,"Harold",70}};

int main()
{
    char str[10];
    int i;
    do
    {
        printf("Enter a name:");
        scanf("%s",str);
        for(i=0;i<3;i++)
        {
            if(strcmp(str,stu[i].name) == 0)
            {
                printf("No: %d\n",stu[i].no);
                printf("Name: %s\n",stu[i].name);
                printf("Score: %d\n",stu[i].score);
                break;
            }
            if(i >= 3)
                printf("Not Found\n");
        }
    }while(strcmp(str,"end") != 0);
    return 0;
}