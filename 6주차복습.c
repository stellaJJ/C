#include <stdio.h>
/*5주차 복습 */

/*연습문제 9-1 1번
void compare(int n1, int n2, int n3);

int main (void)
{
    int n1, n2, n3;
    printf("3개 정수 입력: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    compare(n1,n2,n3);

    return 0;
}

void compare(int n1, int n2, int n3)
{
    if (n1>=n2 && n1>=n3)
        printf("%d",n1);

    else if(n2>=n1 && n2>=n3)
        printf("%d", n2);

    else if(n3>=n2 && n3>=n1)
        printf("%d", n3);
}
*/

/*[정답]->논리연산자 사용했음.

int MaxNum(int n1, int n2, int n3)
{
    if(n1>n2)
        retrun (n1>n3)? n1: n3;
    else
        return (n2>n3)? n2:n3;
        
}
int MinNum (int n1, int n2, int n3)
{
    if (n1<n2)
        return (n1<n3)?n1:n3;
        
    else 
        return (n2<n3)?n2:n3;
}
int main void 이하는 같음. */


/*연습문제 9-1 2번
double cel_to_fah(double c)
{
    return 1.8*c+32; //섭씨를 화씨로
}
double fah_to_cel(double f)
{
    return (f-32)/1.8; //화씨를 섭씨로
}

int main (void)
{
    int sel;
    double num;
    printf("섭씨를 화씨로 1, 화씨를 섭씨로 2 \n");
    printf("선택>>");
    scanf("%d",&sel);

    if(sel==1)
    {
        printf("섭씨입력: ");
        scanf("%lf", &num);
        printf("변환된 화씨: %f \n", cel_to_fah(num));

    }

    else if(sel==2)
    {
        printf("화씨입력: ");
        scanf("%lf", &num);
        printf("변환된 섭씨: %f \n", fah_to_cel(num));
        
    }

    else    
        printf("선택오류\n");
    return 0;
}
*/

/*연습문제 9-1 3번
void show_fibo(int num)
{
    int f1=0, f2=1, f3, i;
    if (num==1)
        printf("%d ", f1);
    
    else
        printf("%d %d ", f1, f2);
    for (i=0; i<num-2; i++)
    {
        f3=f1+f2;
        printf("%d ", f3);
        f1=f2;
        f2=f3;
    }
}

int main (void)
{
    int n;
    printf("출력하고자 하는 피보나치 수열의 개수: ");
    scanf("%d", &n);
    if (n<1)
    {
        printf("1이상의 값을 입력하세요. \n");
        return 1;

    }
    show_fibo(n);
    return 0;
}
*/

/*연습문제 9-2
//static선언 추가한 변수 만들ㄹ기

int add_to_total(int num)
{
    static int total=0; //static in total은 했는데 =0을 안했었음.
    total+=num;
    return total;

}
int main(void)
{
    int num, i;
    for (i=0; i<3; i++)
    {
        printf("입력%d: ", i + 1);
        printf("snwjr: %d \n", add_to_total(num));
    }
    return 0;
}
*/

/*도전 프로그래밍
int square (int n)
{
    if (n==0)
        return 1;

    else if(n==1)
        return 2;

    else
        return 2*square(n-1);
}

int main (void)
{
    int n;
    printf("정수: ");
    scanf_s("%d", &n);
    printf("2의 %d 승은 %d \n", n, square(n));
    return 0;
}

/*재귀함수 미이용
int square (int n)
{
    int i;
    int result=1;
    
    for (i=1; i<=n; n++)
        result*=2;
        
    return result;
}
*/


/*개념확인과제*/
