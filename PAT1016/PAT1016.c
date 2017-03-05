#include<stdio.h>

int main(void){
    char a[12],b[12],da,db;
    scanf("%s %c %s %c",a,&da,b,&db);
    double pa=0,pb=0;
    int i;
    for(i=0;a[i]!=0;i++)
        if(a[i]==da)pa=pa*10+a[i]-'0';
    for(i=0;b[i]!=0;i++)
        if(b[i]==db)pb=pb*10+b[i]-'0';
    printf("%d",(int)(pa+pb));
}
