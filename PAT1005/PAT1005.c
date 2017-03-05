#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int cmp(const void*a,const void*b){
    return 0-(*(int*)a-*(int*)b);
}

int main(void){
    int n,i=0,j,k;
    scanf("%d",&n);getchar();
    int* a=(int *)malloc(n*sizeof(int));
    int ans[100];
    scanf("%d",&a[0]);
    for(i=1;i<n;i++)
        scanf(" %d",&a[i]);
    qsort(a,n,sizeof(int),cmp);
    for(i=0;i<n;i++){
        k=a[i];
        if(k==0)continue;
        while(k!=1){
            if(k%2==0){
                k/=2;
                for(j=0;j<n;j++)
                    if(a[j]==k)a[j]=0;
            }
            else{
                k=(3*k+1)/2;
                for(j=0;j<n;j++)
                    if(a[j]==k)a[j]=0;
            }
        }
    }
    j=0;
    for(i=0;i<n;i++){
        if(a[i]!=0){
            ans[j]=a[i];
            j++;
        }
    }
    qsort(ans,j,sizeof(int),cmp);
    printf("%d",ans[0]);
    for(i=1;i<j;i++)
        printf(" %d",ans[i]);
}
