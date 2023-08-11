#include <stdio.h>
  
/**
* main - prints all lowercasecase except e and q
*
* return: returns 0 if successful
*/
int main(void) 
{ 
        char lowercase;
        
        for (lowercase = 'a'; lowercase <= 'z'; lowercase++) {
            if (lowercase != 'e' && lowercase != 'q'){
                putchar(lowercase);
             }
 }
         putchar('\n');
        
        return (0); 
}
