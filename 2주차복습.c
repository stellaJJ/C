#include <stdio.h>
//2주차복습//

/* 연습문제 3장 3번
int main (void)
{
    int n;
    printf("정수를 입력: ");
    scanf("%d",&n);
    printf("%d의 제곱수는 %d", n, n*n);
    return 0;
}
*/

/*연습문제 3장 4번

int main (void)
{
    int division, divided;
    printf("두 개 정수 입력: ");
    scanf("%d %d", &divided, &division);
    printf("%d나누기%d 몫은 %d 나머지는 %d",divided, division, divided/division, divided%division );

    return 0;
}
*/

/*연습문제 3장 5번
int main (void)
{
    int n1,n2,n3;
    printf("세 정수 입력: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("%d", (n1-n2)*(n2+n3)*(n3%n1));

    return 0;
}
*/


/*연습문제 4장 1번
int main (void)
{
    int n1;
    printf("정수입력: ");
    scanf("%d",&n1);
    n1=~n1+1; //+1을 안 하면 5->-6나오고 -1->0가 나옴., not 연산자는 부호 반대로 한거에 -1한 값이 나오네.
    printf("%d",n1);
    return 0;
}
*/

/*연습문제 4장 2번
int main (void)
{
    int n1=3,n2=8, n3=4;
    printf("%d*%d/%d=%d\n",n1, n2, n3, n1+n1+n1+n1+n1+n1+n1+n1-n3-n3);

}
아 이게 아니라 시프트연산자쓰는거였음ㅋㅋㅋㅋ;ㅋ;;ㅋ;ㅋ;

<<왼쪽으로 한칸씩 이동할때마다 두배, >>오른쪽으로 하나 이동할때마다 절반 줄어드니까
*8은 <<3하면 되고 /4는 >>2하면 된다.

*/

/*개념확인과제*/
int main (void)
{
    int n1, n2; 
    printf("input two integers: ");
    scanf("%d %d", &n1, &n2);

    printf("%d & %d = %d\n", n1, n2, n1&n2); //AND 둘이 같은거여야 반환. 0,1 섞이면 0
    printf("%d | %d = %d\n", n1, n2, n1|n2); // OR 1있으면 1, 00만 0반환
    printf("%d ^ %d = %d", n1, n2, n1^n2); // XOR 둘이 같으면 0, 1하나면 1반환.

    return 0;
}