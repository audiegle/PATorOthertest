#include<stdio.h>
int main(void){
  char digit[9999],tmp;
  int exp=0,i=0,flag,sig;
  tmp=getchar();
  if(tmp=='-')flag=-1;
  else if(tmp=='+')flag=1;
  while((tmp=getchar())!='E'){
    if(tmp=='.')continue;
    digit[i]=tmp;i++;
  }
  sig=i;
  scanf("%d",&exp);
  if(flag==-1)printf("-");
  i=0;
  if(exp>=0){
    while(exp>=0&&i<sig){
      printf("%c",digit[i]);
      i++;exp-=1;
    }
    if(exp<0&&i<sig){
      printf(".");
      while(i<sig){printf("%c",digit[i]);i++;}
    }
    else if(exp>=0&&i==sig)
      while(exp>=0){printf("0");exp--;}
  }
  else{
    printf("0.");exp++;
    while(exp<0){
      printf("0");
      exp++;
    }
    while(i<sig){
      printf("%c",digit[i]);
      i++;
    }
  }
}
