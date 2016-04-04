#include <sys/types.h>
#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h> 

void my_putchar (char c)
{
  write(1, &c, 1);
}

void my_putstr(char *s1)
{
  int i;
  
  i = 0;
  while (s1[i] != '\0')
    {
      my_putchar(s1[i]);
      i++;
    }
}

void		my_ls_directory(void)
{
  char            path[PATH_MAX + 1];
  DIR		*d; 
  struct dirent	*read;

  d = opendir(path);
  if (d != NULL)
    {
      while ((read = readdir(d)))
	{
	  if (read->d_name[0] != '.')
	    {
	      my_putstr(read->d_name);
	      my_putstr("\t");
	    }
	  /* my_putchar('\n');*/
	}
      closedir(d);
    }
  if (d == NULL)
      my_putstr(path);
}

int main(void)
{
  my_ls_directory();
  return 0;
}
