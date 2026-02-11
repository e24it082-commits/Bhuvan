#include <stdio.h>
int main(){
    int num;
    char a;
    scanf("%d",&num);
    a=(num>0)?printf("positive"):(num<0)?printf("negative"):printf("zero");
    printf("%c",a);
    return 0;
}