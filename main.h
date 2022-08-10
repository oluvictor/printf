#ifndef MAIN_H
#define MAIN_H
typedef struct pr
{
	char c;
	int (*f)(char *);
} printer;
int _putchar(char c);
int _printf(const char *format, ...);
#endif
