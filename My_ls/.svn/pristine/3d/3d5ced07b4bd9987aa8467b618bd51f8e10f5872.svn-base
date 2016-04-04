#include <sys/types.h>
#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h> 
#include "../fonctions.h"

int errors(int argc, char **argv)
{
  int n = 0;
  int option;

  t_choiceOpt opt[7] =
  {
    {'a', opt_a},
    {'A', opt_A},
    {'l', opt_l},
    {'d', opt_d},
    {0, 0},
  };
 
  while ((option = getopt(argc, argv, "aAlLd")) != -1)
  {
    if (option == 0)
      my_putstr("usage: ls [-ALlad] [file ...]\n");
   
    while (opt[n].val != 0)
    {
      if (opt[n].val == option)
        opt[n].f(argc, argv);
      n++;
    }
  }
  return 0;
}
 
int aff(int argc, char **argv)
{
    if (argv[1] == NULL)
        my_ls();
    else
        errors(argc, argv);
    return 0;
 
}
