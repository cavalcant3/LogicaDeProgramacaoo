#include <stdio.h>

int main(){
    float base;
    float altura;
    float resultado;
    //receive the value of user
    printf("write the value of base:");
    //read the value and sends it to the variable
    scanf("%f", &base);

     printf("write the value of height:");
     scanf("%f", &altura);
     resultado = base*altura;
     printf("Value of the area is:%f\n ", resultado);
     //---
     resultado = base+altura;
      printf("Value of the perimeter is: %f\n ", resultado);
    
 return 0;
}

int ola(){
    printf("asasas mundo");
    return 0;
}

