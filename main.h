/*
** EPITECH PROJECT, 2019
** DuoStumper
** File description:
** Declarations
*/

#ifndef MY_H_
# define MY_H_

# define D_QTE (50)

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>


typedef struct fridge_s
{
  int tomato;
  int dough;
  int onion;
  int pasta;
  int olive;
  int pepper;
  int ham;
  int cheese;
  int kill;
} fridge_t;

int read_file(void);
int my_strcmp(char const *s1, char const *s2);
int my_puterr(char const *str);
int my_putchar(char c);
int my_getnbr(char *str);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int	my_strncmp(char *s1, char *s2, int n);
char *my_strncpy(char *dest, char *src, int n);
char **my_str_to_wordtab(char *str);
void disp_no_meal(char *name);
void do_pasta(fridge_t *fridg);
void do_pizza(fridge_t *fridg);
char *get_next_line(const int fd);
char *my_strcat(char *dest, char const *src);
char *my_strcat2(char *str, char *str2, int max, int start);
int my_strlen(char const *str);
void addititon(char *name, int nb, fridge_t *fridg);
int add_to_fridge(char *command, fridge_t *fridg);
int nb_compo_compo_pizza(fridge_t *fridg);
void load_fridge(fridge_t *fridg, int fd);
void write_inside(int fd, char **tab);
void fill_tab(char **tab, fridge_t *fridg);
char **make_tab(void);
void add_val(char *txt, int digits);
void write_file(int fd, char c);
void write_infd(int fd, char *str);
int total_len(char **tab);
int my_intlen(int nb);
char int_to_str(int x);
void check_cmd(char *str, fridge_t *fridg);
void  disp_err(char *str);
int	check_char(char *str);
int	check_elem(char *str);
int nb_compo_pasta(fridge_t *fridg);
int nb_compo_pizza(fridge_t *fridg);
#endif
