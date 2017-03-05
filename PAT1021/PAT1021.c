#include<stdio.h>

int main(void){
    char s[1001];
    int ans[10];
    scanf("%s",s);
    int i,tmp;
    for(i=0;i<10;i++)ans[i]=0;
    for(i=0;s[i]!=0;i++){
        tmp=s[i]-'0';
        ans[tmp]++;
    }
    for(i=0;i<10;i++){
        if(!ans[i]);
        else{
            printf("%d:%d\n",i,ans[i]);
        }
    }
    return 0;
}
