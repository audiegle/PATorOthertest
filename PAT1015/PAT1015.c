#include<stdio.h>

int main(void){
    int sum,L,H;
    scanf("%d %d %d",sum,L,H);getchar();
    int* id=(int*)malloc(sum*sizeof(int));
    int* dscore=(int*)malloc(sum*sizeof(int));
    int* cscore=(int*)malloc(sum*sizeof(int));
    int* passi=(int*)malloc(sum*sizeof(int));
    int count=0;
    for(i=0;i<sum;i++){
        scanf("%d %d %d",id+i,dscore+i,cscore+i);
        if(dscore[i]>=L&&cscore[i]>=L){passi[count]=i;count++;}
        getchar();
    }

}
