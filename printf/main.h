#ifndef MAIN_H
#define MAIN_H

#define NULL ((void *)0)

int _printf(const char *format, ...);
int _fputchar(int c);
int print_str(char *str);
int format_specifier(const char **format, va_list akk);

#endif /* MAIN_H */
