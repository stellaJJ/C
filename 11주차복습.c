#include <stdio.h>

/*연습문제14-1

void square(int num)
{
    printf("\n%d",num*num); //일단 정답에선 int squarebyvalue라고 했고
                            //리턴 num*num으로 했다.
}

void square_by_pointer(int*ptr1)
{
    printf("\n%d",*ptr1*(*ptr1)); //정답에서는 n값을 인자로 받아 포인터값에 복제, 넘을 포인터 값으로 선언 
}                                 //포인터를 num*num의 값으로 바꿨다..
int main (void)
{
    int n=3;

    square(n);
    square_by_pointer(&n);
    return 0;
}*/


/*연습문제 14-1 2번 

void swap3(int* ptr1, int* ptr2, int* ptr3)
{
    int temp;
    temp=*ptr2; 
    *ptr2=*ptr1; //temp에 저장한 값을 바꿈.
    *ptr1=*ptr3; //바꾸는데에 값이 이용된 포인터 값을 바꿈.
    *ptr3=temp; //그리고 임시저장한 값을 이용할 수 있는 포인터 변환을 가장 마지막에 하면됨.
    printf("%d %d %d", *ptr1, *ptr2, *ptr3);
}

int main (void)
{
    int num1=10, num2=20, num3=30;
    swap3(&num1, &num2, &num3);
    return 0;
}*/


//포인터 앞에 (데이터보호) const->다른 주소 가리키기 가능.
//포인터가 num1이 아닌 num2를 가리키도록 가능하다

//포인터 뒤에 const(포인터 보호) ->포인터 값 변경 가능.*연산자 사용해서 변경 가능.

/*연습문제 14-2 문제 1     arr대상 const 선언한 이유

//그냥 배열 값을 변경하지 못하게 해서 별 문제 없이 잘 읽으려고.. 아닐까..

void show_all_data(const int*arr, int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        printf("%d", arr[i]);
    }
}*/


/*연습문제 14-2 문제 2      지적할 만한 사항
void show_data(const int*ptr)
{
    int *rptr=ptr; //ptr은 const라 수정 불가능, rptr은 int라 수정가능.. 그래서 일단 문제생김
    printf("%d", *rptr);
    *rptr=20; //ptr에 const가 선언되어있는데 rptr을 수정하려고 하는 게 문제
                //데이터 읽기만 하든가, const를 없애든가..
}

int main()
{
    int num=10;
    int*ptr=&num;
    show_data(ptr);
    return 0;
}*/



/*개념확인과제
#include <math.h>
double cal_standard_dev(int data[])
{
    int total=0;
    double mean=0.0, std_dev=0.0;
    for(int i=0; i<5; i++)
        total+=data[i];

    mean=(double)(total/5);

    for(int i=0; i<5; i++)
        std_dev+=pow((data[i]-mean),2); //처음에 분산 구할 때 누적을 안함.

    std_dev=sqrt(std_dev/5);
        

    return std_dev;
}

int main (void)
{
    int arr[5];
    
    for(int i=0; i<5; i++)
    {
        printf("enter 5 real numbers: ");
        scanf("%d",&arr[i]);
    }
   
    printf("standard deviation= %.3f", cal_standard_dev(arr));

    return 0;
}*/