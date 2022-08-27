/* viet ctrinh in ra so nguyen to nho hon 100 */
 
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    for (int number = 1; number < 100; ++number)
    {
        int count = 0; 
        for (int i = 2; i <= sqrt(number); i++)
        {
            if (number % i == 0)
            {
                count++;
            }
        }
        if (count == 0 && number > 1)
            printf("%d\t", number);
    }
}