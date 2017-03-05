#include<stdio.h>
int main(void){
    double n[3];
    int k,i=0;
    scanf("%d",&k);
    for(;k>=1;k--){
        scanf("%lf",n);
        scanf("%lf",n+1);
        scanf("%lf",n+2);
        if(n[0]+n[1]>n[2])printf("Case #%d: true\n",++i);
        else printf("Case #%d: false\n",++i);
    }
}
