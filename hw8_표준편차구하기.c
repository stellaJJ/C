#include <stdio.h>
#include <math.h>   

double cal_std_dev(int*ptr)
{
    int sum=0;
    double variance=0.0, mean=0.0;

    for(int i=0; i<5; i++)
        sum+=ptr[i];

    mean=(double)sum/5;

    for(int i=0; i<5; i++)
    {
        variance+=pow(ptr[i]-mean, 2);
    }
    variance/=5;
    return sqrt(variance);


}

int main (void)
{
    int arr[5];
    int * ptr=arr;

    for(int i=0; i<5; i++)
    {
        printf("enter 5 real numbers: ");
        scanf("%d", &arr[i]);
    }
    double result=cal_std_dev(&arr);
    printf("standard deviation=%.3f \n", result);

    return 0;
}