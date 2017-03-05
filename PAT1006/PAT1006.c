#include<stdio.h>

int main(void){
    char ns[4];
    int i=0,slen=0,j;
    char s[2]={'S','B'};
    scanf("%s",ns);
    while(ns[slen]!=0)
        slen++;
    while(ns[i]!=0){
        j=0;
        while(j<ns[i]-'0'){
            if(slen==1)
                printf("%d",j+1);
            else
                printf("%c",s[slen-2]);
            j++;
        }
        slen--;i++;
    }
}
