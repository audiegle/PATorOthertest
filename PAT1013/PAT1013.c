#include<stdio.h>
#include<math.h>
int IsPrime(int n){
    int i;
    if(n<=1)return 0;
    else if(n==2)return 1;
    else if(n%2==0)return 0;
    else
        for(i=3;i<=sqrt(n);i+=2)
            if(n%i==0)return 0;
    return 1;
}
int main(void){
    int m,n,i,count=0;
    scanf("%d %d",&m,&n);getchar();
    if(m==1)printf("2");
    count=1;
    for(i=3;count<n;i+=2){
        if(IsPrime(i)){
            count++;
            if(count<m);
            else if(!((count-m)%10))
                printf("%d",i);
            else printf(" %d",i);
            if((count>=m)&&!((count-m+1)%10))
                printf("\n");
        }
    }
}
