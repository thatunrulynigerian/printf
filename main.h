#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include "helperFunction.h"
void default_handler(char *format, int *countC);
void print_str(const char *strc);
void print_sc(char sc)
int _printf(const char *format, ...);

#endif
