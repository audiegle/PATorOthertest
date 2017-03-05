/*本程序用来解决PAT乙级1003题*/
/*结果是有一个测试点未通过*/
/*可能的问题出在本程序不能处理" APA ATAAA"这种情况*/
/*但我未从题中读到这种情况到底该返回YES还是NO*/
#include<stdio.h>
int main(void){
    int n,i,j,k,otherwords=0;
    int a[3];
    char s[100];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        j=0;
        while((s[j]=getchar())!='\n') /*读入包含空格的所有字符*/
            j++;
        s[j]=0;
        k=otherwords=0;
        for(j=0;s[j]!=0;j++){ /*有没有别的字符*/
            if((s[j]!='P')&&(s[j]!='A')&&(s[j]!='T')&&s[j]!=' '){
                otherwords=1;
                printf("NO\n");break;
            }
        }
        if(otherwords==1)continue;

        a[0]=a[1]=a[2]=0;
        for(j=0;s[j]!=0;j++){
            if(s[j]=='A'||s[j]==' ') /*统计A的个数*/
                a[k]+=1;
            else{
                if(s[j]=='P'){ /*如果出现了P就计数到a[1]中*/
                    if(a[1]!=0)otherwords=1; /*为了防止出现类似"PPAAPAAT"这种情况*/
                    k=1;
                    while(s[j+1]=='P') /*跳过所有的P*/
                        j++;
                }
                else if(s[j]=='T'){ /*如果出现了P就计数到a[2]中*/
                    if(a[2]!=0)otherwords=1; /*为了防止出现类似"PPAAPAAT"这种情况*/
                    k=2;
                    while(s[j+1]=='T') /*跳过所有的T*/
                        j++;
                }
            }
        }
        if((a[0]*a[1]==a[2])&&otherwords==0&&(a[0]||a[1]||a[2] /*这是为了防止PT这种情况*/)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
