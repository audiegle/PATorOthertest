#include<stdio.h>
int gcd(int n,int m){
  return n%m==0 ? m:gcd(m,n%m);//Õ·×ªÏà³ý·¨
}
int main(void){
  int k,i;
  double n1,m1,n2,m2;
  scanf("%lf/%lf %lf/%lf %d",&n1,&m1,&n2,&m2,&k);
  int* ans=(int*)malloc(k*sizeof(int));
  double s1,s2,tmp;
  s1=n1/m1;s2=n2/m2;
  if(s1>s2){tmp=s1;s1=s2;s2=tmp;}
  double j;
  /*for(i=(k*s1)+1;i<=(k*s2);i++)
    if(gcd(k,i)==1){ans[j]=i;j++;}*/
    //Why it's wrong?If I correct the data type and then
    //it turns out to be one test point left
    //and I don't know why...
    for(j=1,i=0;j<k;j++){
        if((j/k)<s2&&(j/k)>s1&&gcd(j,k)==1){
            ans[i]=j;i++;
        }
    }
  printf("%d/%d",ans[0],k);
  for(j=1;j<i;j++)
    printf(" %d/%d",ans[(int)j],k);
}
