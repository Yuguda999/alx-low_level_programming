#include <stdio.h>
  
/**
* main - prints smallest combinations of numbers 0-9 separated by comma and space without repetition1
*
* return: returns 0 if successful
*/
int main(void) 
{ 
        int i, j, x;
        
        for (i = 0; i < 10; i++) {
            for (j=i; j < 10; j++) {
                
                if (i == 9 && j == 9) {
                    break;
                    }
                putchar('0'+i);
                putchar('0'+j);
                putchar(',');
                putchar(' ');
             }
        }
        putchar('\n');
        
        return (0); 
}
