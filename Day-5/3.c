#include<stdio.h>

int main(){
float maths,english,science,avg;

printf("enter the maths marks : ");
scanf("%f",&maths);
printf("enter the english marks : ");
scanf("%f",&english);
printf("enter the science marks : ");
scanf("%f",&science);



if (maths<0 && maths>100)
{
printf("enter valid number");
}

else
{
    avg=(maths+english+science)/3;
printf("avg=%f \n",avg);
}



}
