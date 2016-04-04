#ifndef __FONCTIONS_H__
#define __FONCTIONS_H__

void	my_putchar(char c);
void	my_putstr(char *str);
void  	my_put_nbr(int nb);
int     my_strcmp(char *s1, char *s2);

// Les options du ls 

int 	opt_A();
int 	opt_l();
int 	opt_a();
int 	my_ls();
int 	opt_d(int argc, char **argv);
int 	errors(int argc, char **argv);
int 	aff(int argc, char **argv);

// Fin options du ls 

/*
** tableau de pointeur sur fonctions permettant le choix des options
*/
typedef struct s_choiceOpt
{
  int val;
  int (*f)(int argc, char **argv);
} t_choiceOpt;

#endif
