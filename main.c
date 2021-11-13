#include <stdio.h>

//function declaration
float diameter(float radius);
float circumference(float radius);
float area(float radius);

void oddEven(int number);

void oddEvenBitwise(int num);

int main() {
  /*  printf("Functions\n");
    //printf("Total = %d \n", sum(6,4));
    printf("Enter any value to square it : ");
    int value=0;
    scanf("%d",&value);
    printf("Square = %d \n", square(value));*/

    /*printf("Enter Radius : ");
    float radius=0.0;
    scanf("%f",&radius);

    printf("Diameter = %.2f\n",diameter(radius));
    printf("Circumference = %.2f\n",circumference(radius));
    printf("Area = %.2f\n",area(radius));*/

   /* printf("Enter a number to check whether number is a even or odd : ");
    int number = 0;
    scanf("%d",&number);
    oddEven(number);*/


    /*printf("Enter any number: ");
    int num;
    scanf("%d",&num);
    oddEvenBitwise(num);*/

    //printf("Enter 3 numbers : ");
    int numbers[3] = {4,12,2};
    int max=0;
    //scanf("%d%d%d",&numbers);
    for (int i = 0; i < 3; ++i) {
        if(numbers[i] > max){
            max = numbers[i];
        }
    }
    printf("Max : %d\n",max);
    return 0;
}

void oddEvenBitwise(int num) {
    scanf("%d", &num);

    if(num & 1)
    {
        printf("%d is odd.", num );
    }
    else
    {
        printf("%d is even.", num );
    }
}


void oddEven(int number) {
    if(number%2==0){
        printf("Even");
    } else{
        printf("Odd");
    }
}

int sum(int fn,int sn){
    int total = fn+sn;
    return total;
}
int square(int no){
    int sq = no*no;
    return sq;
}
float diameter(float radius){
    float dia = 2*radius;
    return  dia;
}
float circumference(float radius){
    float cir = 2 * 3.14 * radius;
    return cir;
}
float area(float radius){
    float ar = 3.14 * radius * radius;
    return ar;
}


