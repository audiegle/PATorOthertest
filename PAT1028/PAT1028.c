#include<stdio.h>
#include<string.h>

int main(void){
  int yy,mm,dd,yyh=2014,yyl=1814,mmh=13,mml=0,ddh=32,ddl=0;
  char nameh[16],namel[16];
  char tmp[16];
  int n,i;
  int count=0;
  scanf("%d",&n);getchar();
  for(i=0;i<n;i++){
    scanf("%s",tmp);getchar();
    scanf("%d/%d/%d",&yy,&mm,&dd);getchar();
    if(yy>2014||yy<1814){count++;continue;}
    else if((yy==2014&&mm>9)||(yy==1814&&mm<9)){count++;continue;}
    else if((yy==2014&&mm==9&&dd>6)||(yy==1814&&mm==9&&dd<6)){count++;continue;}
    else{
      if(yy<yyh){yyh=yy;mmh=mm;ddh=dd;strcpy(nameh,tmp);}
      else if(yy==yyh&&mm<mmh){mmh=mm;ddh=dd;strcpy(nameh,tmp);}
      else if(yy==yyh&&mm==mmh&&dd<ddh){ddh=dd;strcpy(nameh,tmp);}
      else;
      if(yy>yyl){yyl=yy;mml=mm;ddl=dd;strcpy(namel,tmp);}
      else if(yy==yyl&&mm>mml){mml=mm;ddl=dd;strcpy(namel,tmp);}
      else if(yy==yyl&&mm==mml&&dd>ddl){ddl=dd;strcpy(namel,tmp);}
      else;
    }
  }
  printf("%d",n-count);
  if(count==n)return 0;
  printf(" ");
  printf("%s",nameh);printf(" ");
  printf("%s",namel);
}
