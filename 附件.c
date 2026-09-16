#include <stdio.h>
int main()
{
    int sum=0;
    int i;
    for(i=1;i<11;i++){
        sum+=i;
    }
    printf("answer:%d",sum);
    i=1;
    sum=0;
    while(i<11){
        sum+=i;
        i++;
    }
    printf("\nanswer:%d",sum);
    return 0;
}