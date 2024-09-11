#include <stdio.h>
int main (void)
{
    int num1,num2;

    printf("input two integers: \n");
    scanf("%d %d",&num1,&num2);

    int result1=num1&num2;
    printf("%d&%d=%d \n",num1,num2,result1);

    int result2=num1|num2;
    printf("%d|%d=%d \n",num1,num2,result2);

    int result3=num1^num2;
    printf("%d^%d=%d",num1,num2,result3);
    return 0;
}