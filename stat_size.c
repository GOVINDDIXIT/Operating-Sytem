/*
 * determine a file's size with stat
 */

#include <sys/stat.h> 		/* for stat */
#include <stdio.h>		/* for printf */

int main(int ac, char *av[])
{
  if ( ac < 2 ) return 0;

  struct stat stbuf;

  stat( av[1], &stbuf);		/* 1 syscall */

  printf ("%lld\n", stbuf.st_size);

  return 0;
}
