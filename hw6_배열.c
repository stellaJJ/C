#include <stdio.h>
int main (void)
{
    int arr[5], even[5], odd[5];
    int i=0,j=0,k=0;

    for(i=0; i<5; i++)
    {
        printf("please input five intergers: ");
        scanf("%d",&arr[i]);
    }

    for (i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
        
        if (arr[i]%2==0)
        {
            even[j]=arr[i];
            j++;
        }
            

        else
        {
            odd[k]=arr[i];
            k++;
        }
            

    }
    printf("\n");
    printf("Odd numbers: ");
    
    for(i=0; i<k; i++)
        printf("%d ", odd[i]);

    printf("\n");
    printf("Even numbers: ");

    for(i=0; i<j; i++)
        printf("%d ", even[i]);


    return 0;

}

