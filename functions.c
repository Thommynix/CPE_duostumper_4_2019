/*
** EPITECH PROJECT, 2020
** functions.c
** File description:
** functions.c
*/

#include "main.h"

int my_getnbr(char *str)
{
    int i;
    int neg;
    int n;

        neg = 1;
        i = 0;
        while (str[i] != '\0' && (str[i] == '+' || str[i] == '-')) {
            if (str[i] == '-')
            neg = neg * -1;
        i++;
        }
        n = 0;
        while (str[i] >= 48 && str[i] <= 57) {
            n = (n * 10) + str[i] -48;
            i++;
        }
        return (n * neg);
}

int my_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != "\0")
        i++;
    return (s1[i] - s2[i]);
}

int my_puterr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(2, &str[i], 1);
        i++;
    }
    return (0);
}

int my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
    return (0);
}