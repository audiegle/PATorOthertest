#include<stdio.h>
#include<math.h>
int cmp(int*a,int*b){
    return *(int*)a-*(int*)b;
}
int main(void){
    int n;
    scanf("%d",&n);getchar();
    int* ans=(int*)malloc(n*sizeof(int));
    int i;
    for(i=0;i<n;i++){
        scanf("%d",ans+i);getchar();
    }
    qsort(ans,n,sizeof(int),cmp);
    int sum=0,j;
    for(i=n-1;i>=0;i--){
        for(j=i;ans[j]==ans[i];j--)
            sum++;
        if(sum==ans[i])break;
    }
    printf("%d",sum);
}
