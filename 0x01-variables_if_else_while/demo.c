#include <stdio.h>

/**
 * print_combinations - Prints all possible combinations of two two-digit numbers.
 */
void print_combinations(void)
{
    int number1, number2;
    int last_number1 = 98; // Last valid value for number1
    int last_number2 = 99; // Last valid value for number2

    for (number1 = 0; number1 <= last_number1; number1++)
    {
        for (number2 = number1 + 1; number2 <= last_number2; number2++)
        {
            if (number1 != number2)
            {
                putchar('0' + number1 / 10);
                putchar('0' + number1 % 10);
                putchar(' ');
                putchar('0' + number2 / 10);
                putchar('0' + number2 % 10);

                // Check if it is the last number set
                if (number1 != last_number1 || number2 != last_number2 - 1)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
}

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
    print_combinations();
    return 0;
}

