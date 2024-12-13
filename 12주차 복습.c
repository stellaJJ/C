#include <stdio.h>
/*12주차 복습*/

//fputc()두번째에 stdout=putchar()
//fget()첫번째에 stdin=getchar()
//문자열읽으려면 fgets

/*연습문제 21-1*/

int main (void)
{
    int w, diff;
    printf("input: ");
    w=getchar();

    diff='a'-'A'; //소문자 아스키값이 더 큼

    if(w>='A' && w<='z')
    {
        w+=diff;
        putchar(w);
    }

    else   
        printf("잘못된 입력입니다.");


    return 0;
    
}