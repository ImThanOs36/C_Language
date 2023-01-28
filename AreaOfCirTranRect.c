#include <stdio.h>

float CircleArea(float redius);
float TrangleArea(float base ,float height);
float RectangleArea(float length, float width);

float main()
{
    float redius;
    printf("Enter radius for Circle Area :");
    scanf("%f", &redius);
    printf("%f \n", CircleArea(redius));



    float base;
    float height;
    printf("Enter Base for Trangle Area :");
    scanf("%f", &base);
    printf("Enter height for Trangle Area :");
    scanf("%f", &height);
    printf("%f\n", TrangleArea(base,height));



    float length;
    float width;
    printf("Enter length for Trangle Area :");
    scanf("%f", &length);
    printf("Enter width for Trangle Area :");
    scanf("%f", &width);
    printf("%f\n", RectangleArea(length,width));



    
    
    return 0;

}
float CircleArea(float redius)
{
    return 3.14 * redius * redius;
}
float TrangleArea(float base,float height)
{
    return base * height / 2;
}
float RectangleArea(float base,float height)
{
    return base * height ;
}