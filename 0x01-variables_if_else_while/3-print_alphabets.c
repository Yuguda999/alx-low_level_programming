#include <stdio.h>
  
/**
* main - prints all lowercasecase and uppercase alphabets
*
* return: returns 0 if successful
*/
int main(void) 
{ 
        char lowercase, uppercase;
        
        for (lowercase = 'a'; lowercase <= 'z'; lowercase++) {
            putchar(lowercase);
  }
        for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)     {
            putchar(uppercase);
 }
          putchar('\n');
         
        return (0); 
 }
