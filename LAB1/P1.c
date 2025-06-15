// WAP to calculate area of a Circle (A = πr2).

#include <stdio.h>
int main() {
    int radius;
    double area;
    printf("enter radius:");
    scanf("%d",&radius);
    area=(3.14)*radius*radius;
    printf("area=%lf",area);


}