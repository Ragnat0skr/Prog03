int main(void)
{
    int i; //Loop counter
    int f = 0; //Counter for each fizz and bang
    int b = 0;
    for (i=1; i<=20; i++) //Starts loop
    {
        if (i%15 == 0) //Divisible by 15 = divisible by both 3 and 5
        {

            printf ("FizzBang\n"); // \n prints on new line
            f = f + 1; //Update counters
            b = b + 1;
        }
        else if ((i%3) == 0) //Divisible by 3 and not 15, therefore not divisible by 5
        {

            printf("Fizz\n");
            f = f + 1;
        }
        else if ((i%5) == 0)
        {

            printf("Bang\n");
            b = b + 1;
    }
        else
        {

            printf("%d\n", i);
        }
    }
    printf("%d\n", f); //Print total of each Fizz and Bang
    printf("%d\n", b);
    return 0;
}
