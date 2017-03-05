/*本程序用来解决PAT乙级1004题*/
/*结果是有一个测试点没有通过*/
/*可能原因未知*/
/*更正:将人名和学号的存储空间变大后测试点通过了*/
#include<stdio.h>
#include<string.h>
typedef struct {
    char name[100];
    char studentid[100];
    int score;
}student; /*用来存放学生信息的结构体类型*/

int main(void){
    int n,i,j,k,h;
    char s[100];
    scanf("%d",&n);
    getchar(); /*除掉输入数字后打的回车*/
    student Max,Min;
    Max.score=0;Min.score=100; /*注意这里Min.score要设置为100*/
    for(i=0;i<n;i++){
        student stu;
        j=0;
        while((s[j]=getchar())!='\n') /*用scanf时会遇到空格然后就停止输入字符串了*/
            j++;
        s[j]=0;
        k=0;
        for(j=0;s[j]!=' ';j++){
            stu.name[j]=s[j]; /*读入名字*/
        }
        stu.name[j]=0;

        for(k=j+1;s[k]!=' ';k++){
            stu.studentid[k-j-1]=s[k]; /*读入学号*/
        }
        stu.studentid[k-j-1]=0;
        stu.score=0;
        for(h=k+1;s[h]!=0;h++){
            stu.score=stu.score*10+s[h]-'0'; /*读入分数*/
        }
        if(stu.score>Max.score){
            strcpy(Max.name,stu.name);
            strcpy(Max.studentid,stu.studentid);
            Max.score=stu.score;
        }
        if(stu.score<Min.score){
            strcpy(Min.name,stu.name);
            strcpy(Min.studentid,stu.studentid);
            Min.score=stu.score;
        }
    }
    for(i=0;Max.name[i]!=0;i++)printf("%c",Max.name[i]);
    printf(" ");
    for(i=0;Max.studentid[i]!=0;i++)printf("%c",Max.studentid[i]);
    printf("\n");
    for(i=0;Min.name[i]!=0;i++)printf("%c",Min.name[i]);
    printf(" ");
    for(i=0;Min.studentid[i]!=0;i++)printf("%c",Min.studentid[i]);
    return 0;
}
