#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>/*for malloc*/
#include <stdarg.h>/*for variadic functions*/
#include <stdint.h>


#define HEX_DIGITS "0123456789abcdef"
#define BUFF_SIZE 1024/*where write output is to be stored*/

int _printf(const char *format, ...);
void print_buff(char buffer[], int *buff_index);
int _putchar(char c);
void print_pointer(void *pointer, ...);


#endif /* MAIN_H */
