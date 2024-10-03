#include <stdio.h>
int main (void)
{
    int w, h, i; //w=가로, h 높이, i 공백

    for (h=0; h<5; h++)
    {
        for (w=0; w<4-h; w++)
    
            printf(" ");

        for (i=0; i<2*h+1; i++)
            printf("*");

        printf("\n");
    }
    return 0;


}

