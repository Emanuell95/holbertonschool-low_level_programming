#include "main.h"

void _puts_recursion(char *s) {
    if (*s == '\0') {       
        putchar('\n');      
        return;             
    }
    putchar(*s);            
    _puts_recursion(s + 1); 
}
