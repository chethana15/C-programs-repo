#include<stdio.h>

int main(){
    float radius;
    printf("Enter radius: ");
    scanf("%f",&radius);

    printf("Area of circle with radius %f is %f",radius,(3.14*radius*radius));
    return 0;
}