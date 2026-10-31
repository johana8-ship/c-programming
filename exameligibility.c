#include <stdio.h>
int main(){
    /*
    name:johana muteti
    reg nu:CT100/30845/26
    week 3 assinment 1 :exam eligibility
    */

    float attendance =0;
    float marks =0;


    printf("exam eligibility cheker.\n");


    printf("enter your percentage attendance:\n");
    scanf("%f", &attendance);

    printf("enter your avarage marks:");
    scanf("%f", &marks);

    if( attendance >=75 && marks >=40){
        printf("eligible for the exam");
    } else {
        printf("not eligible for the exam");
    }

    return 0;
}