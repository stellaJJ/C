#include <stdio.h>
/*4주차 복습 

연습문제 7-1 1번 //for문 사용했었어야 함. 처음에 파이썬처럼 문자열에 n1곱하려고 함.

int main (void)
{
    int n1;
    printf("양의 정수 입력: ");
    scanf("%d", &n1);
    for (int i=0; i<n1; i++)
    {
        printf("hello world\n");
    }
    

    return 0;
}
*/

/*연습문제 7-1 2번

int main (void)
{
    int n1, i;
    printf("양의 정수 입력: ");
    scanf("%d", &n1);

    for(i=1; i<=n1; i++) //아니 처음에 했던거랑 똑같은데 왜 그 땐 무한루프 떴지; 시방새;;
    {
        printf("%d\n",i*3); //재호씨는 while로 썼고 i<n조건에 실행 부분에 i++ 썼음
    }
    return 0;
}
*/

/*연습문제 7-1 3번

int main (void)
{
    int n, total=0; //처음에 total 값 초기화 안 해서 문제 생겼었음.

    while(n!=0)
    {
        printf("더할 수를 계속 입력/0은 종료 ");
        scanf("%d",&n);

        total+=n;

    }
    printf("%d", total);

    return 0;
}
*/

/*연습문제 7-1 4번
int main (void)
{
    int n,i;
    printf("출력할 단수를 입력: ");
    scanf("%d", &n);
    for(i=9; 0<i; i--) //아니 해답 전부 while로 돼있네;흠..ㅋㅋ 엉차피 9개만 출력인데 굳이?
    {
        printf("%dx%d=%d\n", n,i,n*i); //while로 하면 조건에 0<i만 하고 중괄호 안에 i--하나만 쓰면됨.
    }


    return 0;
}
*/

/*연습문제 7-1 5번
int main (void)
{
    int n,i=0, s;
    double total=0;
    printf("입력할 정수 개수?: ");
    scanf("%d",&n);

    while(i<n)
    {

    printf("정수 입력: " );
    scanf("%d",&s);
    total+=s;
    i++;

    }

    printf("평균: %f",total/n );
    
}
*/

/*연습문제 7-2 1번
int main (void)
{
    int n=0,i=0, total=0;
    while(i<5) //5개 정수 입력하라는 뜻..
    {
        printf("다섯개의 정수 입력: ");
        scanf("%d",&n);

        while(n<1)
        {
            printf("1 이상의 정수 재입력: ");
            scanf("%d",&n);
        }

        total+=n;
        i++;


    }
    printf("합계: %d", total);
    return 0;
}
*/

/*7-2 연습문제 2번
int main (void)
{
    int s=0, n=0;
    while(s<5)
    {
        while(n<s)
        {
            printf("0");
            n++;
        }
        n=0; //n을 0으로 초기화 안 하면 항상 s랑 1차이 나서 하나만 출력되는듯
        printf("*\n");
        s++;
    }
    return 0;
}
*/

/*연습문제 7-3 1번
int main (void)
{
    int n=1, total=0;
    while(n!=0)
    {
        printf("정수입력: (0은 종료)");
        scanf("%d",&n);
        total+=n;
    }
    printf("합계: %d", total);
    return 0;
}
*/

/*연습문제 7-3 2번
int main (void)
{
    int n=0, total=0;
    do
    {   
        n+=2;
        total+=n; //처음에 n++해서 1751이 나왔는데, ++때문에 2빼고는 홀수들의 합이된것같음.

    }while(n<100);

    printf("0부터 100까지 짝수들의 합: %d", total);
    return 0;
}
*/

/*연습문제 7-3 3번
int main (void)
{
    int cur=2, is=0; //cur이 단수, is가 곱하는 수

    do
    {
        is=1;

        do
        {
            printf("%dX%d=%d\n", cur, is, cur*is);
            is++;

        }while(is<10);
        cur++;

        printf("\n");

    }while(cur<10);

    return 0;
}
*/

/*연습문제 7-4 1번
int main (void)
{
    int n1,n2, result=0;

    printf("두 개 정수 입력: ");
    scanf("%d %d", &n1, &n2);
    
    for( result=0; n1<=n2; n1++)
    {
        result+=n1;
    }
    printf("%d",result);
    return 0;
}
*/

/*연습문제 7-4 2번
int main (void)
{
    int n, fac=1;
    printf("팩토리얼 계산할 정수 입력: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        fac*=i;
    }
    printf("%d!: %d", n, fac);

    return 0;
}
*/

/*4주차 과제
int main (void)
{
    int s, i, r; //s는 별, i는 공백, r은 높이.

    for (int r=0; r<5; r++)
    {
        for (int i=1; i<5-r; i++) //공백출력
        {
            printf(" ");
        }

        for(int s=0; s<2*r+1; s++)
        {
            printf("*"); //별찍기
        }
        printf("\n");
    }
    return 0;
}
*/

//공백 4-3-2-1-0, 별 1-3-5-7-9