/*
** EPITECH PROJECT, 2020
** functions2.c
** File description:
** functions2.c
*/

#include "main.h"

int my_put_nbr(int nb)
{
    unsigned int n2;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb > 9) {
        n2 = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_put_nbr(n2);
    } else {
        nb = nb + 48;
        my_putchar(nb);
    }
    return (0);
}

int my_put_nbr_unsigned(unsigned int nb)
{
    unsigned int n2;

    if (nb > 9) {
        n2 = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_put_nbr(n2);
    } else {
        nb = nb + 48;
        my_putchar(nb);
    }
    return (0);
}

char *my_strcat(char *dest, char const *src)
{
    int dest_size = my_strlen(dest);
    int i = 0;

    for (i = 0; src[i] != '\0'; i++)
        dest[dest_size + i] = src[i];
        dest[dest_size + i] = '\0';
        return (dest);
}
int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}