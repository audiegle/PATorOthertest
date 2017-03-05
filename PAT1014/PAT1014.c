#include<stdio.h>
int IsUpper(char s){
    if(s>='A'&&s<='Z')return 1;
    else return 0;
}
int IsLower(char s){
    if(s>='a'&&s<='z')return 1;
    else return 0;
}
int IsEng(char s){
    if(IsUpper(s)||IsLower(s))return 1;
    else return 0;
}
int IsNum(char s){
    if(s>='0'&&s<='9')return 1;
    else return 0;
}
int main(void){
    char s1[60],s2[60],s3[60],s4[60];
    scanf("%s",s1);scanf("%s",s2);scanf("%s",s3);scanf("%s",s4);
    int i,j=0;
    char daymark=0,hourmark=0;
    char week[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    for(i=0;s1[i]*s2[i]!=0;i++)
        if(s1[i]==s2[i]){
            if(s1[i]<='G'&&s1[i]>='A'&&j==0){daymark=s1[i]-'A';j++;}
            else if((IsNum(s1[i])&&j==1)||(s1[i]<='N'&&s1[i]>='A'&&j==1)){hourmark=s1[i];j++;}
        }

    for(i=0;s3[i]*s4[i]!=0;i++)
        if(s3[i]==s4[i]&&IsEng(s3[i]))
            break;

    if(IsUpper(hourmark))hourmark=hourmark-'A'+10;
    else if(IsLower(hourmark))hourmark=hourmark-'a'+10;
    else if(IsNum(hourmark))hourmark=hourmark-'0';

    printf("%s",week[daymark]);
    printf(" %.2d",hourmark);
    printf(":%.2d",i);
}
