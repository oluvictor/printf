#ifndef MAIN_H
#define MAIN_H
typedef int (*f)(char *) printer;
int _putchar(char c);
int _printf(const char *format, ...);
int get_printer(va_list va, char c);
int print_char(char c);
#endif
