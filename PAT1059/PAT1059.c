#include<stdio.h>
#include<math.h>
int prime(int n){
  int i=2;
  if(n<=1)return 0;
  else if(n==2)return 1;
  else{
    while(i<=sqrt(n)){
      if(!(n%i))return 0;
      i++;
    }
    return 1;
  }
}
int main(void){
  int n,i;
  scanf("%d",&n);getchar();
  int* id=(int*)malloc(n*sizeof(int));
  int* carry=(int*)malloc(n*sizeof(int));
  for(i=0;i<n;i++){
    scanf("%d",id+i);getchar();
    carry[i]=1;
  }
  int k,tmp,j=0;
  scanf("%d",&k);getchar();
  for(i=0;i<k;i++){
    j=0;
    scanf("%d",&tmp);getchar();
    printf("%.4d: ",tmp);
    while(id[j]!=tmp&&j<n)j++;
    if(j==n)
      printf("Are you kidding?");
    else if(carry[j]==0)
      printf("Checked");
    else{
      if(j==0)printf("Mystery Award");
      else if(prime(j+1))printf("Minion");
      else printf("Chocolate");
       }
    if(i<k-1)printf("\n");
    if(j<n)carry[j]=0;
  }
}
