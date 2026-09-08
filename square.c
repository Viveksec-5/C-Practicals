#include <stdio.h>

float squarearea(float side);
float areacircle(float rad);
float arearectangle(float a, float b);

int main()
{
    float a, b;
    printf("enter the value of a and b: \n");
    scanf("%f %f", &a, &b);
    float arearectangle(float a, float b);
    printf("area: %f \n",  arearectangle(a,b));

    return 0;
}

float squarearea(float side)
{
    return side * side;
}
float areacircle(float rad)
{
    return 3.14 * rad * rad;
}
float arearectangle(float a, float b)
{
    return a * b;
}