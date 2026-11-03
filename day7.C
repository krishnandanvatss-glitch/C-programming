#include <stdio.h>

int main(){
    int marks;

    printf("enter your marks: ");
    scanf("%d",&marks);

    if (marks >= 90){
        printf("grad A");
    }
else if(marks >=75){
    printf("grad b");
}   
else if(marks >=50){
    printf("grad c");
}
else {
    printf("fail");
}
return 0;
}