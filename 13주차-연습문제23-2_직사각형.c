#include <stdio.h>
typedef struct point
{
    int xpos;
    int ypos;

}Point;

typedef struct rectangle
{
    Point ul; // up left
    Point lr; //low right

}Rectangle;

void show_rec_area(Rectangle rec)
{
    printf("넓이: %d\n", (rec.lr.xpos-rec.ul.xpos)*(rec.lr.ypos-rec.ul.ypos));

}

void show_rec_pos(Rectangle rec)
{
    printf("좌상단: [%d,%d]\n", rec.ul.xpos, rec.ul.ypos);
    printf("좌하단: [%d,%d]\n", rec.ul.xpos, rec.lr.ypos);
    printf("우상단: [%d,%d]\n", rec.lr.xpos, rec.ul.ypos);
    printf("우하단: [%d,%d]\n", rec.lr.xpos, rec.lr.ypos);

}

int main (void)
{
    Rectangle rec1={{1,1},{4,4}};
    Rectangle rec2={{0,0},{7,5}};
    show_rec_area(rec1);
    show_rec_pos(rec1);
    show_rec_area(rec2);
    show_rec_pos(rec2);
    return 0;

}