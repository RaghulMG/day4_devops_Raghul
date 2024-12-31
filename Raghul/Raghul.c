#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] ="Raghul";
    char str2[10];
    strcpy(str2,str1);
    printf("Show string name: %s\n",str2);
    return 0;
}
