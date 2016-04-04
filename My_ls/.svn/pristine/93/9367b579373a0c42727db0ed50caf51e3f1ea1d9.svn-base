#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h> 
#include "../fonctions.h"

int opt_d(int argc, char **argv)
{		
  DIR             *dir;
  
  if (argc > 2)
    {
      my_putstr(argv[2]);
      my_putstr("\n");
      return(0);
    }
  if ((dir = opendir(argv[2])) == NULL)
    {
      my_putstr(".\n");
      return(0);
    } 
  else if ((dir = opendir(argv[2])) != NULL)
    my_putstr("Attentions\n");
  closedir(dir); 
  return(0);
}
