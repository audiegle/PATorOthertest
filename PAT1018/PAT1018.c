#include<stdio.h>
int groupmax(int* a,int length){
    int ans=0,i,max=a[0];
    for(i=0;i<length-1;i++)//give priority to the lower-index number.
        if(a[i+1]>max){max=a[i+1];ans=i+1;}
    return ans;
}
int judgement(char p1,char p2){
    //'1'means p1 wins,'0'means even,'-1'means p2 wins.
    if(p1==p2)return 0;
    else if(p1=='C'){
        switch(p2){
            case 'B':return -1;
            case 'J':return 1;
        }
    }
    else if(p1=='B'){
        switch(p2){
            case 'C':return 1;
            case 'J':return -1;
        }
    }
    else if(p1=='J'){
        switch(p2){
            case 'C':return -1;
            case 'B':return 1;
        }
    }
}
int main(void){
    int n;
    scanf("%d",&n);getchar();
    int i;
    char player1,player2,pattern[3]={'B','C','J'};
    int p1_win=0,p2_win=0,even=0,ans;
    int c1[3]={0,0,0},c2[3]={0,0,0};
    for(i=0;i<n;i++){
        scanf("%c %c",&player1,&player2);getchar();
        ans=judgement(player1,player2);
        switch(ans){
            case 1:{
                p1_win+=1;
                switch(player1){
                    case 'B':c1[0]+=1;break;
                    case 'C':c1[1]+=1;break;
                    case 'J':c1[2]+=1;break;
                }
                break;
            }
            case 0:even+=1;break;
            case -1:{
                p2_win+=1;
                switch(player2){
                    case 'B':c2[0]+=1;break;
                    case 'C':c2[1]+=1;break;
                    case 'J':c2[2]+=1;break;
                }
                break;
            }
        }
    }
    printf("%d %d %d\n",p1_win,even,p2_win);
    printf("%d %d %d\n",p2_win,even,p1_win);
    printf("%c %c",pattern[groupmax(c1,3)],pattern[groupmax(c2,3)]);
}
