#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct Point {
    double x;
    double y;
} Point;

typedef struct Rectangle{
    Point lowerLeftCorner;
    Point upperRightCorner;
} Rectangle;

int is_square(Rectangle *rectangle){
    const double width = fabs(rectangle -> lowerLeftCorner.x - rectangle -> upperRightCorner.x);
    const double hight = fabs(rectangle -> lowerLeftCorner.y - rectangle -> upperRightCorner.y);

    return width == hight;
}

int main()
{
    Rectangle square = {{0, 0}, {5, 5}};

    if (is_square(&square)){
        printf("Das Rechteck ist ein Quadrat.\n");
    }else{
        printf("Das Rechteck ist kein Quadrat.\n");
    }
    
    return 0;
}