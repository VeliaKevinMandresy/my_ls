#include <sys/types.h>
#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h> 
#include "../fonctions.h"

/*
** Fonctions ls -A -> affiche les fichiers cacher a l'exeption du "." et ".."
*/
int opt_A()
{
  char            path[PATH_MAX + 1];
  DIR             *dir;
  struct dirent   *entry;
  
  getcwd(path, PATH_MAX);
  if ((dir = opendir(path)) == NULL)
    return (EXIT_FAILURE);
  while ((entry = readdir(dir)) != NULL)
    {
      if(my_strcmp(".", entry->d_name) 
	 && my_strcmp("..", entry->d_name))
	{
	  my_putstr(entry->d_name);
	  my_putstr("   ");
	}
      // faire un stat ou lstat ici. Attention aux chemins relatifs
    }
  my_putstr("\n");
  if (closedir(dir) == -1)
    return (EXIT_FAILURE);
  return (EXIT_SUCCESS);
}
