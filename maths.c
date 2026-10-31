#include <stdio.h>
int main(){

    /*
    NAME:johana muteti
    REG NO:CT100/G/30845/26
    week two assinment
    */

    //volume of the cylinder
float radius =0;
float height =0;
const float pi = 3.142f;

float total =0;

printf("this is the volume of the cylinder.\n\n");
printf("enter the radius of the cilynder:");
scanf("%f", &radius);

printf("enter the height of the cylinder:");
scanf("%f", &height);

total= pi * radius *radius *height;

printf("total volume:%.2f\n\n\n", total);

//this is the surface area of the cylinder

printf("this is the surface area of the cylinder.\n");

printf("enter the radius of the cylinder:\n");
scanf("%f", &radius);

printf("enter the height ofthe cylinder:\n");
scanf("%f", &height);

total =(2*pi*radius*radius)+(2*pi*radius*height);

printf("the total surface area is:%.2f",total);


return 0;




}