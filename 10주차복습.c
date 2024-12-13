//10주차 복습
#include <stdio.h>
/*연습문제 12-1 1번
int main (void)
{
    int num=10; //10인 정수형 변수 num 선언
    int*ptr1=&num; //포인트1에 num값, 즉 10 저장
    int*ptr2=ptr1; // 포인트2에 포인트1값인 10 저장 

    (*ptr1)++; //ptr1이 가리키는 값인 num에 +1을 시키는거임
    *ptr2++; //ptr2는 ptr1값을 가리키고, ptr1은 num을 가리키므로 결과적으로 num+2

    printf("%d\n", num); 
    return 0;
}*/

/*연습문제 12-1 2번
int main (void)
{
    int num1=10, num2=20;
    int *ptr1=&num1, *ptr2=&num2;
    int *temp; //포인터 주소값을 저장해야하므로 템프도 포인터야함.

    *ptr1+=10; 
    *ptr2-=10;

    temp=ptr1; //주소를 교환하려면 *없이, 포인터 값을 바꾸려면 *사용
    ptr1=ptr2;
    ptr2=temp;

    printf("%d %d", *ptr1, *ptr2);
    
    return 0;
}*/

/*연습문제 13-1 1번
int main (void)
{
    int arr[5]={1,2,3,4,5};
    int *ptr1=arr; //이게 arr[0]을 가리키는 거랑 마찬가지

    for(int i=0; i<5; i++)
    {
        *ptr1+=2;
        ptr1++; //그래서 포인터 1증가시키면 arr[0]가리켰던 것에서 arr[1]됨.
    }
    for(int i=0; i<5; i++)
    {
       printf("%d ",arr[i]);
    }
    
   return 0;
}*/

/*연습문제 13-1 2번
int main (void)
{
    int arr[5]={1,2,3,4,5};
    int *ptr1=arr; //이게 arr[0]을 가리키는 거랑 마찬가지

    for(int i=0; i<5; i++)
    {
        *(ptr1+i)+=2; //  *(ptr1+i)가 ptr이 가리키는 주소에 i*sizeof(자료형)만큼 이동한 주소를 나타냄.
                    //ptr[i]랑 *(ptr1+i)는 같은거임.
    }
    for(int i=0; i<5; i++)
    {
       printf("%d ",arr[i]);
    }

    return 0;
}*/

/*연습문제 13-1 3번
int main (void)
{
    int arr[5]={1,2,3,4,5};
    int*ptr1=&arr[4];
    int total=0;

    for(int i=0; i<5; i++)
    {
        total+=*ptr1--; //ptr1이 원래 가리키고있던 arr[4]말고 arr[3]을 가리키게 함.
    }
    printf("%d",total);

    return 0;
}*/

/*연습문제 13-1 4번
int main (void)
{
    int arr[6]={1,2,3,4,5,6};
    int*fptr=&arr[0];
    int*bptr=&arr[5];
    int temp=0; //얜 또 값을 바꿔야 해서 템프는 포인터일 필요없고

    for(int i=0; i<3; i++)
    {
        temp=*fptr; //여기에는 *이 필요하대.
        *fptr=*bptr;
        *bptr=temp;
        *fptr++;
        *bptr--;
    }

    for(int i=0; i<6; i++)
        printf("%d ", arr[i]);

    return 0;

}*/

/*개념확인과제
int main (void)
{
    int arr1[6]={1,2,3,4,5,6}, arr2[6]={7,8,9,10,11,12};
    int*ptr1=arr1, *ptr2=arr2;
    int temp=0;

    printf("arr1: ");
    for(int i=0; i<6; i++)
        printf("%d ",arr1[i]);

    printf("\narr2: ");

    for(int i=0; i<6; i++)
        printf("%d ",arr2[i]);

    printf("\n\nafter swap\n");

    for(int i=0; i<6; i++)
    {
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    ptr1++; //오른쪽에서 왼쪽으로 우선순위가 주어져서 *ptr1++과 ptr1++은 다르다.
    ptr2++; //*ptr1++현재값 사용하고 ptr1 증가//  ptr1++ 주소 사용하지 않고 ptr1 증가
    }

    printf("arr1: ");
    for(int i=0; i<6; i++)
        printf("%d ",arr1[i]);

    printf("\narr2: ");

    for(int i=0; i<6; i++)
        printf("%d ",arr2[i]);



    return 0;
}*/