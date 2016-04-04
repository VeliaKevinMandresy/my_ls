#include <sys/types.h>
#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h> 
#include "../fonctions.h"

/*
** Fonctions ls -> affiche les fichiers non cacher
*/
int my_ls()
{
  char            path[PATH_MAX + 1];
  DIR             *dir;
  struct dirent   *entry;
  
  getcwd(path, PATH_MAX);
  if ((dir = opendir(path)) == NULL)
    return (EXIT_FAILURE);
  while ((entry = readdir(dir)) != NULL)
    {
      if(entry->d_name[0] != '.')
	{
	  my_putstr(entry->d_name);
	  my_putstr("   ");
	}
    }
  my_putstr("\n");
  if (closedir(dir) == -1)
    return (EXIT_FAILURE);
  return (EXIT_SUCCESS);
}
