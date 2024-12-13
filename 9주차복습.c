#include <stdio.h>
//9주차 복습
/*연습문제 11-1 1번

int main (void)
{
    int arr[5];
    int max,min,total=0;

    for(int i=0; i<5; i++)
    {
        printf("5개 정수 입력: ");
        scanf("%d", &arr[i]);

    }
    max=min=arr[0];

    for(int i=0; i<5; i++)
    {
        total+=arr[i];
        if(max<arr[i])
            max=arr[i];
        if(min>arr[i])
            min=arr[i];

    }
    printf("최댓값: %d", max);
    printf("최솟값: %d", min);
    printf("총합: %d", total);

    
    return 0;
}*/

/*연습문제 11-1 문제2

int main (void)
{
    char arr[]={'G','o','o','d',' ','t','i','m','e'};

    for (int i=0; i<sizeof(arr)/sizeof(char); i++)
    {
        printf("%c",arr[i]); //c 는 단일문자, s는 문자열(공백전까지만입력받음) , g는 실수
    }
    return 0;
}*/


/*연습문제 11-2 1번
int main (void)
{
    char word[50];
    int i=0;

    printf("단어 입력: ");
    scanf("%s", word);

    while(word[i]!='\0')
        i++;


    printf("%d", i);
    return 0;
}*/


/*연습문제 11-2 2번
int main (void)
{
    char word[50];
    int len=0;
    int temp;

    printf("영단어 입력: ");
    scanf("%s", word);

    while(word[len]!='\0')
        len++;

    for(int i=0; i<len/2; i++)
    {
        temp=word[i]; //맨 앞 값을 임시저장
        word[i]=word[len-1-i]; //맨앞에 맨뒤 저장
        word[len-1-i]=temp;

    }
    printf("\n %s", word);

    return 0;
}*/


/*연습문제 11-2 3번
int main (void)
{
    char word[50];
    int max; int len=0;

    printf("영단어 입력하세요: ");
    scanf("%s", word);
    max=word[0];

    while(word[len]!='\0')
        len++;

    for (int i=0; i<len; i++)
    {
        if (max<word[i])
            max=word[i];
    }
    printf("%c", max);

    return 0;
}*/

/*연습문제 16-1 1번
int main (void)
{
    int arr[3][9];
    for(int i=0; i<3; i++)
    {

    
        for(int j=0; j<9; j++)
        {
            arr[i][j]=(i+2)*(j+1);
            printf("%2d ", arr[i][j]); //숫자 출력 공간을 2로 정하기.
                                      //오른쪽 정렬(+) 2는 출력 숫자.
            
        }
        printf("\n");
    }

    return 0;
}*/

/*연습문제 16-1 2번
int main(void)
{
    int arrA[2][4]={1,2,3,4,5,6,7,8};
    int arrB[4][2];
    for(int i=0; i<2; i++)
        for(int j=0; j<4; j++)
        {
            arrB[j][i]=arrA[i][j];
        }

    for(int i=0; i<4; i++)
    {

    
        for(int j=0; j<2; j++)
        {
            printf("%d ",arrB[i][j]);
        }
        printf("\n");

    }

    return 0;
}*/

/*개념확인과제
int main (void)
{
    int num[5];
    int odd[5], even[5];
    int j=0, j1=0;
    printf("please input five integers: ");

    for (int i=0; i<5; i++)
    {
        scanf("%d",&num[i]);

        if (num[i]%2==0) //정답에서는 이걸 포문에서 안 하고
        {
            even[j]=num[i];
            j++;
        }

        else    
        {
            odd[j1]=num[i];
            j1++;
        }
    }
    printf("odd numbers: "); //출력할 때 if(num[i]%2==1)printf("%d",num[i])로함
    for(int i=0; i<j1; i++)
        printf("%d ",odd[i] );

    printf("\neven numbers: ");
    for(int i=0; i<j; i++)
        printf("%d ", even[i]);
}*/

/*정답코드
int main (void)
{
    int ary[5];
    printf("please input five integers: ");

    for(int i=0; i<5; i++)
        scanf("%d", &ary[i]);

    printf("\n");

    printf("Odd numbers: ");
    for (int i=0; i<5; i++)
        if(ary[i]%2==1) printf("%d ", ary[i]);

    printf("\nEven numbers: ");
    for (int i=0; i<5; i++)
        if(ary[i]%2==0) printf("%d ", ary[i]);

    return 0;
}*/