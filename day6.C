#include <stdio.h>

int main(){
    int marks;

    printf("Enter your marks:");
    scanf("%d",&marks);

    if (marks >=33){
        printf("you are pass");
    }
    else{
        printf("you are fail");
    }
    return 0;
}