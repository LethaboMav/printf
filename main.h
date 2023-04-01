#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int _printf(const char *format, ...);
int print_c(va_list l);
int print_s(va_list l);
int print_p(void);
int print_i_d(va_list y);
int _strlen(char *s);
void convertb(unsigned int num, char *binary);
void rev_string(char *s);
int print_b(va_list l);
#endif /* MAIN_H */
