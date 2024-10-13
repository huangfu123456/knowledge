#include<stdio.h>
int main(void)
{   int min=0,max=0;
    int num[4];
    printf("请输入四个数字：");
    int i;
    for( i = 0;i<4;i++)
    {
        scanf("%d",&num[i]);
        if(i == 0){
            min=max = num[i];
        }
        if(min>num[i]){
            min = num[i];
        } else if(max<num[i]){
            max = num[i];
        }
    }
    printf("min=%d max=%d",min,max);

    return 0;
}