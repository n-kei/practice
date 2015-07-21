#include <stdio.h>

int main(void) {
  FILE *fp;
  int i, j;

  fp = fopen("test.txt", "w");
  write_char('a', 10, fp);
  fclose(fp);

  return(0);
}
