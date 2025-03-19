/*
** EPITECH PROJECT, 2024
** libstr
** File description:
** Headers file ofr the libstr
*/

#include <stdint.h>
#include <stdarg.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <stdio.h>

#ifndef STR_H_
    #define STR_H_

int my_getnbr(char const *str);
char *my_revstr(char *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char *src);
int my_strcmp(char *s1, char *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char *src);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char **my_str_to_word_array(char *str, char spe);
void free_arr(char **arr);
char *my_strupcase(char *str);
int mini_printf(char *format, ...);
int my_putchar(char c);
int my_put_nbr(int nb);
int my_put_nbr_float(double nb, int nb_deci);
int my_putstr(char const *str);
void my_put_uint(unsigned int nb);
int display_string(int count, va_list list, char **sett);
int display_char(int count, va_list list, char **sett);
int g_writing(char type, va_list list, char **s);
int count_d(long long n);
char *char_to_str(char c);
char *dec_to_base(uintptr_t nb, int base);
char *force_lower(char *str);
char *force_upper(char *str);
char *int_to_str(int nb);
char *float_to_str(double nb, int nb_deci);
int str_to_int(char *str);
int display_zero(char *str, int n, int b, char c);
int display_pointer(int count, va_list list, char **sett);
int display_hexa(int count, va_list list, char **sett, char type);
int display_octal(int count, va_list list, char **sett);
int display_binary(int count, va_list list, char **sett, char type);
int display_int(int count, va_list list, char **sett);
int display_unsigned_int(int count, va_list list, char **sett);
int display_float(int count, va_list list, char **sett, int nb);
int my_printf(char *format, ...);
int sci_writing(char c, double f, char **s);
int hexa_sci_writing(char c, double f, char **s);
int my_put_long(long long nb);
int display_float_spe(int count, double f, char **sett, int n);

#endif /* STR_H_ */
