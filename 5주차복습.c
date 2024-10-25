#include <stdio.h>
/*5주차 복습*/

/*연습문제 8-1 1번
int main (void)
{
    int n;
    for(n=1; n<100; n++)
    {
        if (n%7==0 || n%9==0)
            printf("%d\n", n);
    }
    return 0;
}
*/

/*연습문제 8-1 2번
int main (void)
{
    int n1, n2;
    printf("두 정수 입력: ");
    scanf("%d %d", &n1, &n2);
    if(n1>n2)
    {
        printf("%d-%d=%d", n1, n2, n1-n2);
    }
    else if(n2>n1)
    {
        printf("%d-%d=%d", n2, n1, n2-n1);
    }
    else
        printf("%d-%d=0", n1,n2);

    return 0;
}
*/

/*연습문제 8-1 3번
int main (void)
{
    int kor, eng, math;
    printf("국영수 점수 입력: ");
    scanf("%d %d %d", &kor, &eng, &math);
    double result=0;
    result=(kor+eng+math)/3;

    if (result>=90)
        printf("A");

    else if (result>=80)
        printf("B");

    else if (result>=70)
        printf("C");

    else if (result>=50)
        printf("D");

    else
        printf("F");
        
    return 0;
}
*/

/*연습문제 8-1 4번
int main (void)
{
    int n1, n2, result;
    printf("두 정수 입력: ");
    scanf("%d %d", &n1, &n2);
    result=(n1>n2)? (n1-n2):(n2-n1);
    printf("%d", result);
    return 0;
}
*/

/*연습문제 8-2 1번
int main (void)
{
    for (int i=0; i<9;)
    {
        i+=2; //i%2!=0;continue;

        for (int k=1; k<=i; k++ )
        {
            printf("%dx%d=%d\n", i, k, i*k); //if (i<j) break;
        }
        printf("\n");

    }
    return 0;
}
*/

/*연습문제 8-2 2번
int main (void)
{

    return 0;
}
*/

/*연습문제 8-3*/

/*과제
int main (void)
{
    int n, i=2;

    printf("양의 정수 입력: ");
    scanf("%d",&n);

    if (n==1)
        printf("it is not a prime number");

    else
    {
        while(i<n)
        {
            if (n%i==0)
            {
                printf("it is not a prime number");
                return 0;
            }
            i++;
        }
            
        printf("it is a prime number");
       
    }
    return 0;
}
*/