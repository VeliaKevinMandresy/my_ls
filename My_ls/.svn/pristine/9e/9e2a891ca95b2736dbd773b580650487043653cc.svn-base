#include "../fonctions.h"
#include <unistd.h>
#include <stdlib.h>

int     my_strcmp(char *s1, char *s2)
{
  int   i;
  int   r;
  
  r = 0;
  i = 0;
  while (s1[i] && s2[i] && s1[i] == s2[i])
    i++;
  r = (s1[i] - s2[i]);
  if (r > 0)
    return (1);
  if (r == 0)
    return (0);
  else
    return (-1);
}
