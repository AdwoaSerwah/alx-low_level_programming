#include <stdio.h>

/**
 * times_table - Prints the 9 times tablek
 */
void times_table(void)
{
    int column = 0;
    int row;
    int product;
    int reverseNum = 0;
    int num;
    int digit;
    int numDigits;
    int temp;
    int currentDigits;
    /**
     * int i = 0;
     * int j;
     * char arrayActualNum[] = "Actual Number: ";
     * char arrayReverseNum[] = "Reversed number: ";
     */

    while (column <= 9)
    {
        row = 0;
        while (row <= 9)
        {
            product = column * row;
            if (product == 0)
            {
                putchar('0');
                if (row < 9){
                    putchar(',');
                    
                }
                if (column == 0 && row < 9)
                {
                    putchar(' ');
                    putchar(' ');
                }                
            }
            else
            {
            numDigits = 0;
            temp = product;
            while (temp > 0)
            {
                numDigits++;
                temp /= 10;
            }
            
            if (numDigits < 2)
            {
                putchar(' ');
                putchar(' ');
            }
            else
            {
                putchar(' ');
            }

            while (product > 0)
            {
                num = product % 10;
                reverseNum = reverseNum * 10 + num;
                /* putchar(num + '0'); */
                product /= 10;
            }

            currentDigits = 0;
            while (reverseNum > 0)
            {
                digit = reverseNum % 10;
                putchar(digit + '0');
                /*putchar('\n');*/
                reverseNum /= 10;
                currentDigits++;    
            }
            while (currentDigits < numDigits)
            {
                putchar('0');
                currentDigits++;
            }
            if (row < 9)
            {
                putchar(',');            
            }           
            }
            row++;
        }
        column++;
        putchar('\n');
        
    }
}
