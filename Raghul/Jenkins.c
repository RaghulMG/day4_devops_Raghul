#include <stdio.h>
#include <string.h>

int main()
{
  char str1[20] = "Jenkins started";
  char str2[20];
  printf("Copy the str2 to str1\n");
  strcpy(str2,str1);
  printf("show %s\n",str2);
  return 0;
}
