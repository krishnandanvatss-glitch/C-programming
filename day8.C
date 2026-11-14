#include <stdio.h>

int main(){
    int age=20;

    if (age>=18){
        if (age>=21){
            printf("eligible for both conditions");
        }
  else  {
    printf("age is between 18 and 20");
}
    }
    else{
        printf("below 18");
    }
    return 0;
}