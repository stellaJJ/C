#include <stdio.h>
typedef struct point
{
    int xpos;
    int ypos;

}Point;

void SwapPoint(Point *ptr1, Point *ptr2)
{
    Point temp; //왜 포인트 템프인지 모르겠음..난 int라고 했는데
    *ptr1=temp;
    *ptr1=*ptr2;
    *ptr2=temp;

}

int main(void)
{
    Point pos1={2,4};
    Point pos2={5,7};
    
    SwapPoint(&pos1, &pos2);
    

    printf("[%d, %d]\n ", pos1.xpos, pos1.ypos);
    printf("[%d, %d]\n ", pos2.xpos, pos2.ypos);

    return 0;

} 