#include <stdio.h>
void bi(int num1)
{
    int i=0;
    int r[32];
    while (num1!=0)
    {
        int q=num1/2;
        r[i]=num1%2;
          i++;
        num1=q;
      
    }

    for(int j=i-1; j>=0; j--)
        printf("%d",r[j]);
}

int main (void)
{
    
    int num1;
    printf("please enter a number: ");
    scanf("%d", &num1);
    bi(num1);

    return 0;
}
