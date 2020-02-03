#include <stdio.h>
#include <string.h>
int main()
{
  char a[10];
  int length;

  printf("Enter a string to calculate its length\n");
  gets(a);

  length = strlen(a);

  printf("Length of the string = %d\n", length);

  return 0;
}
