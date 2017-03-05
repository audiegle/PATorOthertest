#include<stdio.h>

int main(void){
    int n,m,i=0;
    scanf("%d %d",&n,&m);getchar();
    if(m>n)m=m%n;
    char tmp;
    int* a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        if(i+m<=n-1)
            scanf("%d",&a[i+m]);
        else
            scanf("%d",&a[i+m-n]);
    }
    /*int next,former=a[0],count=0,k=0;
    while(count<n){
        if(i==k&&count!=0){
            k=i;
            if(i+1>n-1)i=n-i-1;
            else i+=1;
            former=a[i];
        }
        next=former;
        if(i+m>n-1){
            former=a[i+m-n];
            a[i+m-n]=next;
            i=i+m-n;
        }
        else{
            former=a[i+m];
            a[i+m]=next;
            i=i+m;
        }
        count++;
    }*/
    printf("%d",a[0]);
    for(i=1;i<n;i++)
        printf(" %d",a[i]);
}
