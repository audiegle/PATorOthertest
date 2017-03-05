#include<stdio.h>

int main(void){
    char s[1001],n;
    int i,mod=0,tmp,slen,a[1001];
    scanf("%s %c",s,&n);
    for(i=0;s[i]!=0;i++){
        tmp=mod*10+s[i]-'0';
        a[i]=tmp/(n-'0');
        mod=tmp%(n-'0');
    }
    slen=i;
    i=0;
    while(!a[i])i++;
    if(i>=slen)printf("0");
    else{
        for(;i<slen;i++)
            printf("%d",a[i]);
    }
    printf(" %d",mod);

}
