#include<stdio.h>

int main(){

    float sideTriangle;
    float result;

    for (int i = 0; i < 3; i++)
    {
        printf("Type the size of side:");
        scanf("%f", &sideTriangle);
        result = result + sideTriangle;
    }
   // getch();
    printf("The perimeter of triangle is: %f\n", result);
    
    return 0;
}