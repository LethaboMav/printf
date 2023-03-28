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

#endif /* MAIN_H */
