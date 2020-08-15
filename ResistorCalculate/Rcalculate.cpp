#include<stdio.h>
#include<math.h>
int main()
{
    int _2digit, _1digit, _multiply;
    double sum1, sum2;
    
    printf("black is 0\n");
    printf("brown is 1\n");
    printf("red is 2\n");
    printf("orange is 3\n");
    printf("yellow is 4\n");
    printf("green is 5\n");
    printf("blue is 6\n");
    printf("violet is 7\n");
    printf("gray is 8\n");
    printf("white is 9\n");
    
    printf("Enter first color : \n");
    scanf_s("%d", &_2digit);
    printf("Enter second color : \n");
    scanf_s("%d", &_1digit);
    printf("Enter third color : \n");
    scanf_s("%d", &_multiply);
  

    sum1 = (_2digit * 10) + (_1digit);
    sum2 = sum1 * pow(10, _multiply);
    
    printf("Resistor is : %lf",sum2);
    return 0;

}