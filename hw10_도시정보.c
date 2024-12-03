#include <stdio.h>
#include <string.h>

typedef struct information
{
    char country[20];
    char name[20];
    int pop;
}information;

int main(void)
{
    information arr[3];
    printf("input three cities: \n");

    for (int i=0; i<3; i++)
    {
    
        printf("Name> ");
        fgets(arr[i].name, sizeof(arr[i].name),stdin );
        arr[i].name[strcspn(arr[i].name, "\n")]='\0';
        

        printf("Country> ");
        fgets(arr[i].country, sizeof(arr[i].country), stdin );
        arr[i].country[strcspn(arr[i].country, "\n")]='\0';
        

        printf("Population> ");
        scanf("%d", &arr[i].pop);
        getchar();
    }

    printf("Printing the three cities: \n");

    for(int i=0; i<3; i++)
    {
        printf("%d. %s in %s with a population of %d people\n", i+1, arr[i].name, arr[i].country, arr[i].pop);

    }

    return 0;
}