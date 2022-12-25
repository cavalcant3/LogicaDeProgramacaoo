#include<stdio.h>

int main(){
    printf("Wich size of circle radius");
    float radiuss;
    scanf("%f", &radiuss);
    
    float result = radiuss * 2;
    printf("The area of circle is: %f\n", result);
    return 0;
}