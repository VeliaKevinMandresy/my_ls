#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <time.h> 
#include <errno.h>
#include "../fonctions.h"

/*
** Fonctions ls -l -> affiche les details concernant tous les fichiers
*/
int opt_l()
{
  char            path[PATH_MAX + 1];
  DIR             *dir;
  struct dirent   *entry;
  struct stat     eStat;

  getcwd(path, PATH_MAX);
  if ((dir = opendir(path)) == NULL)
    return (EXIT_FAILURE);
  while ((entry = readdir(dir)) != NULL)
    {
    if(entry->d_name[0] != '.')
      {
        lstat(entry->d_name, &eStat);
        /* recuperer les droit de chaque fichier */
        my_putchar(S_ISDIR(eStat.st_mode)?'d':0);
        my_putchar(S_ISFIFO(eStat.st_mode)?'p':0);
        my_putchar(S_ISLNK(eStat.st_mode)?'l':'-');
        my_putchar((S_IRUSR & eStat.st_mode) ? 'r' : '-');
        my_putchar((S_IWUSR & eStat.st_mode) ? 'w' : '-');
        my_putchar((S_IXUSR & eStat.st_mode) ? 'x' : '-');
        my_putchar((S_IRGRP & eStat.st_mode) ? 'r' : '-');
        my_putchar((S_IWGRP & eStat.st_mode) ? 'w' : '-');
        my_putchar((S_IXGRP & eStat.st_mode) ? 'x' : '-');
        my_putchar((S_IROTH & eStat.st_mode) ? 'r' : '-');
        my_putchar((eStat.st_mode & S_IWOTH) ? 'w' : '-');
        my_putchar((S_IXOTH & eStat.st_mode) ? 'x' : '-');
        my_putstr("\t");
        my_put_nbr(eStat.st_nlink);
        my_putstr("      ");
        /* recupere la taille en octet d'un fichier */
        my_put_nbr(eStat.st_size);
        my_putstr("\t");
        my_putstr(entry->d_name);
        my_putstr("\t");
        /* recupere la DATE de modification du fichier */
        my_putstr(ctime(&eStat.st_ctime));
      }
    }   
  if (closedir(dir) == -1)
    return (EXIT_FAILURE);
  return (EXIT_SUCCESS);
}
