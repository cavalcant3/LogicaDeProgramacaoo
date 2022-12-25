#include<stdio.h>

int main(){
      float BaseSide;
      float result=0;
    printf("Which size is the base of square?");
    scanf("%f", &BaseSide);
    
    
    result = BaseSide * 4;

    printf("Perimeter: %f\n", result);
    result = BaseSide * BaseSide;
    printf("Area: %f\n", result);
    printf("chegou aqui");


    return 0;
}