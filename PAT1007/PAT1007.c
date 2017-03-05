/*本程序解决PAT测试1007题*/

#include<stdio.h>
#include<math.h>
int IsPrime(int n);
int main(void){
    int n,i=1,k=1,ans=0;
    scanf("%d",&n);
    int* Prime=(int*)malloc((n/2+1)*sizeof(int));
    /*for(i=2,k=0;i<=n;i++){
        if(IsPrime(i)){Prime[k]=i;k++;}
        else;
    }*/
    Prime[0]=2;
    while((2*i+1)<=n){
        if(IsPrime(2*i+1)){Prime[k]=2*i+1;k++;}
        i++;
    }
    i=0;
    while(i<k){
        if((Prime[i+1]-Prime[i])==2)ans++;
        i++;
    }
    printf("%d",ans);
    return 0;
}

int IsPrime(int n){
    int i=2;
    if(n<=0){printf("Encount negative number!");return 0;}
    else if(n==1)return 0;
    else if(n==2)return 1;
    while(i<=sqrt(n)){ /*important:这里一定要用根号，不然会运行超时*/
        if(n%i==0)return 0;
        i++;
    }
    return 1;
}
