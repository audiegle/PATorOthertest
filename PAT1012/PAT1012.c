#include<stdio.h>
#include<malloc.h>

int main(void){
    int n,i,ans[5]={0,0,0,0,0},flag=1,count=0,c=0;
    scanf("%d", &n);getchar();
    int* a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",a+i);
        getchar();
        if(a[i]%10==0)ans[0]+=a[i];
        else if(a[i]%5==1){ans[1]+=flag*a[i];flag=-flag;count++;}
        else if(a[i]%5==2) ans[2]+=1;
        else if(a[i]%5==3) {ans[3]+=a[i];c++;}
        else if((a[i]>=ans[4])&&(a[i]%5==4)) ans[4]=a[i];
    }
    if(ans[0]==0)printf("N");
    else printf("%d",ans[0]);

    if(count==0)printf(" N");
    else printf(" %d",ans[1]);

    if(ans[2]==0)printf(" N");
    else printf(" %d",ans[2]);

    if(ans[3]==0)printf(" N");
    else printf(" %.1f",((float)ans[3])/c);

    if(ans[4]==0)printf(" N");
    else printf(" %d",ans[4]);
}
