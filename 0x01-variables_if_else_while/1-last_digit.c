#include <stdlib.h> 
 #include <time.h> 
 #include <stdio.h>
  
 /**
 * main - prints if n is less than 5, 0 or less than and not 0
 *
 * return: Always (success)
 */
 int main(void) 
 { 
         int n; 
  
         srand(time(0)); 
         n = rand() - RAND_MAX / 2; 
         unsigned int last_digit = n%10;
         
         if (last_digit > 5) {
             printf("Last digit of %d is %d and is greater than 5\n",n,last_digit);
         }
         else if (last_digit == 0) {
             printf("Last digit of %d is %d and is 0\n",n,last_digit);
         }
         else if (last_digit < 6 && last_digit != 0) {
             printf("Last digit of %d is %d and is less than 6 and not 0\n",n,last_digit);
         }
         
         return (0); 
 }
