/*�������������PAT�Ҽ�1003��*/
/*�������һ�����Ե�δͨ��*/
/*���ܵ�������ڱ������ܴ���" APA ATAAA"�������*/
/*����δ�����ж�������������׸÷���YES����NO*/
#include<stdio.h>
int main(void){
    int n,i,j,k,otherwords=0;
    int a[3];
    char s[100];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        j=0;
        while((s[j]=getchar())!='\n') /*��������ո�������ַ�*/
            j++;
        s[j]=0;
        k=otherwords=0;
        for(j=0;s[j]!=0;j++){ /*��û�б���ַ�*/
            if((s[j]!='P')&&(s[j]!='A')&&(s[j]!='T')&&s[j]!=' '){
                otherwords=1;
                printf("NO\n");break;
            }
        }
        if(otherwords==1)continue;

        a[0]=a[1]=a[2]=0;
        for(j=0;s[j]!=0;j++){
            if(s[j]=='A'||s[j]==' ') /*ͳ��A�ĸ���*/
                a[k]+=1;
            else{
                if(s[j]=='P'){ /*���������P�ͼ�����a[1]��*/
                    if(a[1]!=0)otherwords=1; /*Ϊ�˷�ֹ��������"PPAAPAAT"�������*/
                    k=1;
                    while(s[j+1]=='P') /*�������е�P*/
                        j++;
                }
                else if(s[j]=='T'){ /*���������P�ͼ�����a[2]��*/
                    if(a[2]!=0)otherwords=1; /*Ϊ�˷�ֹ��������"PPAAPAAT"�������*/
                    k=2;
                    while(s[j+1]=='T') /*�������е�T*/
                        j++;
                }
            }
        }
        if((a[0]*a[1]==a[2])&&otherwords==0&&(a[0]||a[1]||a[2] /*����Ϊ�˷�ֹPT�������*/)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
