/*�����������PAT����1010��*/
/*���������õĲ��Ե���ʵ��������*/
/*û�����"1 0 1 -1"�������*/
/*����������15�м���"tmp=='\n'������������*/
#include<stdio.h>

int main(void){
    char tmp=0;
    int flag=0;
    int a[2]={0,0};
    while(tmp!='\n'){
        scanf("%d %d",&a[0],&a[1]);
        tmp=getchar();
        if(a[1]==0){
            if(flag==0&&(tmp=='\n'))printf("0 0");
        }
        else{
            if(flag==0){flag=1;printf("%d %d",a[0]*a[1],a[1]-1);}
            else
                printf(" %d %d",a[0]*a[1],a[1]-1);
        }
    }
}
