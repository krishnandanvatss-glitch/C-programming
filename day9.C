#include <stdio.h>

int main(){
    int choice;

    printf("enter 1 or 2:");
    scanf("%d", &choice);

switch (choice){
    case 1:
    printf("hello");
    break;
    case 2:
    printf("goodbye");
    break;
    default:
    printf("invalid choice");
}
return 0;
}
