#include <stdio.h>
struct employee
{
    char name[20];
    char pid[20];
    int salary;
};

int main(void)
{
    struct employee arr[3];
    int i=0;
    for (i=0; i<3; i++)
    {
        printf("이름: ");
        scanf("%s", arr[i].name, sizeof(arr[i].name));

        printf("주민번호: ");
        scanf("%s", arr[i].pid, sizeof(arr[i].pid));

        printf("급여정보: ");
        scanf("%d", &arr[i].salary);
    }
    
    for (i=0; i<3; i++)
    {
        printf("이름: %s \n", arr[i].name);
        printf("주민번호 %s \n", arr[i].pid);
        printf("급여: %d \n", arr[i].salary);
        printf("\n");

    }
    return 0;
}