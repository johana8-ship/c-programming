#include <stdio.h>

int main(){

    /*
    name: johana muteti
    reg nu: CT100/G/30845/26
    week two assinment
    
    */



    int age = 0;
    float income =0;

    printf("enter your age:\n");
    scanf("%d", &age);

    printf("enter your income:\n");
    scanf("%f", &income);

    if (age >= 21 && income >= 21000){
        printf("congratulations you qualify for a loan.");
    } else {
        printf("we are unable to offer you a loan at the momment.");
    }

     

return 0;

}