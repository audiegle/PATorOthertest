/*�������������PAT�Ҽ�1004��*/
/*�������һ�����Ե�û��ͨ��*/
/*����ԭ��δ֪*/
/*����:��������ѧ�ŵĴ洢�ռ������Ե�ͨ����*/
#include<stdio.h>
#include<string.h>
typedef struct {
    char name[100];
    char studentid[100];
    int score;
}student; /*�������ѧ����Ϣ�Ľṹ������*/

int main(void){
    int n,i,j,k,h;
    char s[100];
    scanf("%d",&n);
    getchar(); /*�����������ֺ��Ļس�*/
    student Max,Min;
    Max.score=0;Min.score=100; /*ע������Min.scoreҪ����Ϊ100*/
    for(i=0;i<n;i++){
        student stu;
        j=0;
        while((s[j]=getchar())!='\n') /*��scanfʱ�������ո�Ȼ���ֹͣ�����ַ�����*/
            j++;
        s[j]=0;
        k=0;
        for(j=0;s[j]!=' ';j++){
            stu.name[j]=s[j]; /*��������*/
        }
        stu.name[j]=0;

        for(k=j+1;s[k]!=' ';k++){
            stu.studentid[k-j-1]=s[k]; /*����ѧ��*/
        }
        stu.studentid[k-j-1]=0;
        stu.score=0;
        for(h=k+1;s[h]!=0;h++){
            stu.score=stu.score*10+s[h]-'0'; /*�������*/
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
