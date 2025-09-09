#include<stdio.h>

struct plane {
    int x, y;
};

int main(){
    struct plane point = {12, 29};
    struct plane *points = &point;
    points -> x = 14;
    points -> y = 45;
    printf("Point: (%d, %d)\n", points -> x, points -> y);
}