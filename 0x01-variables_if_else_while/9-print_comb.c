#include <stdio.h>
  
/**
* main - prints numbers 0-9 separated by comma and space
*
* return: returns 0 if successful
*/
int main(void) 
{ 
        int i;
        
        while (i < 10) {
            putchar('0'+i);
            i++;
            if (i == 10){
                break;
            }
            putchar(',');
            putchar(' ');
        }
        putchar('\n');
        
        return (0); 
}
