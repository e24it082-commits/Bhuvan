#include <stdio.h>
int main(){
    int a,b,num;
    printf("Enter the val of a nd b:\n");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Enter a:%d\n",a);
    printf("Enter b:%d",b);
    return 0;
}