/*本题用来解决PAT测试1010题*/
/*本题中设置的测试点其实并不完整*/
/*没有针对"1 0 1 -1"这种情况*/
/*但本程序在15行加了"tmp=='\n'来解决这种情况*/
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
