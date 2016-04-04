#include <sys/types.h>
#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include "../fonctions.h" 

/*
** Fonctions ls -a -> affiche les fichiers cacher (.fichier)
*/
int opt_a(int argc, char **argv)
{
  char            path[PATH_MAX + 1];
  DIR             *dir;
  struct dirent   *entry;
  
  getcwd(path, PATH_MAX);
  if ((dir = opendir(path)) == NULL)
    return (EXIT_FAILURE);
  while ((entry = readdir(dir)) != NULL)
    {
      my_putstr(entry->d_name);
      my_putstr("   ");
    }
  my_putstr("\n");
  if (closedir(dir) == -1)
    return (EXIT_FAILURE);
  return (EXIT_SUCCESS);
}
