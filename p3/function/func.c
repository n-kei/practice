#include <stdio.h>

void write_char(int c, int num, FILE *fp) 
{
  int i, j;
  
  for(i = 0; i < num; i++) {
    for(j = 0; j < num; j++) {
      fputc('a', fp);
    }
    fputc('\n', fp);
  }
}
