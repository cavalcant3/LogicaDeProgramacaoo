#include<stdio.h>

int calculatingAge(int days, int month, int yr){

    //receive data show days
     days += ((yr*365)+(month * 12));

    printf("Your days of birth: %i\n", days);

    return 0;
}


int main(){
    int days = 27;
    int month = 4;
    int year = 2001;
   
   calculatingAge(days,month,year);
    return 0;
}
