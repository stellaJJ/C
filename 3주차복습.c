#include <stdio.h>
/*3주차 복습

연습문제 5장 1번 
int main (void)
{
    int x1, y1, x2, y2;

    printf("좌 상단 x,y: ");
    scanf ("%d %d", &x1, &y1);

    printf("우 하단의 x, y: ");
    scanf("%d %d", &x2, &y2 );

    int s= (x2-x1)*(y2-y1);
    printf(" 두 점이 이루는 직사각형의 넓이는 %d 입니다. ", s );

    return 0;
}
*/

/*연습문제 5장 2번 
int main (void)
{
    double n1, n2;
    printf("두 개의 실수 입력: ");
    scanf("%lf %lf", &n1, &n2);

    printf("%lf+%lf=%lf\n", n1, n2, n1+n2);
    printf("%lf-%lf=%lf\n", n1, n2, n1-n2);
    printf("%lf*%lf=%lf\n", n1, n2, n1*n2);
    printf("%lf/%lf=%lf\n", n1, n2, n1/n2);//f지만 그냥 lf 할래 ㅋ;
    return 0;
}
*/

/*연습문제 5장 4번(3번이 없네)
int main (void)
{
    int  n1;
    printf("아스키코드로 바꿀 정수 입력: ");
    scanf("%d", &n1);

    printf("%d는 아스키코드로 %c", n1,n1 );

    return 0;
}
*/

/*연습문제 5장 
int main (void)
{
    double km,mile;
    printf("please enter kilometers: ");
    scanf("%lf", &km);

    mile=km/1.609; //km가 더 큰 값이니까 .. 마일은 km 값에서 나눠야함.

    printf("%fkm is equal to %.1f miles. ", km, mile);
    
    return 0;
}
*/