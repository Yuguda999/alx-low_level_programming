#include <stdio.h>
  
/**
* main - prints numbers 0-9
*
* return: returns 0 if successful
*/
int main(void) 
{ 
        int i;
        
        for (i = 0; i < 10; i++) {
            putchar('0'+i);
        }
        putchar('\n');
        
        return (0); 
}
