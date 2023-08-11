#include <stdio.h>
  
 /**
 * main - prints all lowercase alphabets
 *
 * return: Always (success)
 */
 int main(void) 
 { 
         char lowercase;
         
         for (lowercase = 'a'; lowercase <= 'z'; lowercase++) {
             putchar(lowercase);
  }
          putchar('\n');
         
         return (0); 
 }
