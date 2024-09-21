//hw2
#include <stdio.h>
int main(void)
{
    double km;
    printf("please enter kilometers: ");
    scanf("%lf", &km); //%lf 뒤에 \n하니 무한입력오류있었음.
    printf("%.1f is equal to %.1f miles.",km, km/1.609 ); 
    return 0;

}