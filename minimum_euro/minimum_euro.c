#include <stdio.h>

//write a code which asks an amount of money (in Euro) from the user. 
//Then it calculates the smallest number of notes (20 €, 10 € and 5€) and coins (1 €), that amount can be paid. 
//The biggest notes should be used as many times as possible. For example 53 € comes 2.20 € + 1.10 € + 3.1 € . 
//(Hint: divison of integers)

int main()
{
    int amount;
    int note20, note10, note5;

    /* Initialize all notes to 0 */
    note20 = note10 = note5 =  0;


    /* Initialize all coins to 0 */
    int coin1;

    coin1 = 0;


    /* Input amount from user */
    printf("Enter amount in Euro (€): ");
    scanf("%d", &amount);


    if(amount >= 20)
    {
        note20 = amount/20;
        amount -= note20 * 20;
    }
    if(amount >= 10)
    {
        note10 = amount/10;
        amount -= note10 * 10;
    }
    if(amount >= 5)
    {
        note5 = amount/5;
        amount -= note5 * 5;
    }
     if(amount >= 1)
    {
        coin1 = amount/1;
        amount -= coin1 * 1;
    }


    /* Print required notes */
    printf("Total number of notes = \n");

    printf(" € 20 = %d\n", note20);
    printf(" € 10 = %d\n", note10);
    printf(" € 5 = %d\n", note5);
    printf(" € 1 = %d\n", coin1);


    return 0;

}
