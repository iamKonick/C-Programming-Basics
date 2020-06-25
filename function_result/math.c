#include <stdio.h>

//write a code the calculates a result for the following formula f = (a-b) * (x -y). 
//Print the result on screen using printf - function. 
//The values of the variables should be asked by the user.

int main()
{
    int a, b, x, y, f;

    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);

    f = (a - b) * (x - y);

    printf("The Calculated Value : %d",f);
    return 0;

}
