/*本题用来解决PAT测试1009题*/
#include<stdio.h>
int main(void){
    char s[80][80];
    int i=0,j=0;
    char tmp=0;
    while(tmp!='\n'){
        tmp=getchar();
        if(tmp==' '){s[i][j]=0;i++;j=0;}
        else{s[i][j]=tmp;j++;}
    }
    s[i][j-1]=0;
    for(j=0;s[i][j]!=0;j++)
        printf("%c",s[i][j]);
    for(i-=1;i>=0;i--){
        printf(" ");
        for(j=0;s[i][j]!=0;j++){
            printf("%c",s[i][j]);
        }
    }
    return 0;
}
