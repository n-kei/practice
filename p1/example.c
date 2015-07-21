#include <stdio.h>

void function1(void)
{
  printf("Hello from function No.1\n");
}

void function2(void) 
{
  printf("Hello from function No.2\n");
}

int main(void) 
{
  function1();
  function2();
  return(0);
}
