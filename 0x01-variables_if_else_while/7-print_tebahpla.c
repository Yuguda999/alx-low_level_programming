#include <stdio.h>
  
/**
* main - prints all lowercasecase in reverse
*
* return: returns 0 if successful
*/
int main(void) 
{ 
        char lowercase;
        
        for (lowercase = 'z'; lowercase >= 'a'; lowercase--) {
            putchar(lowercase);
 }
         putchar('\n');
        
        return (0); 
}
