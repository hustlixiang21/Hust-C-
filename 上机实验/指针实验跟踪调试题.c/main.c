#include "stdio.h"
char *strcpy(char *,char *);
int main(void)
{
    char a[0],b[60]="there is a boat on the lake.";
    printf("%s\n",strcpy(a,b));
    //puts(a);
    return 0;
}
char *strcpy(char *s,char *t)
{
    char *temp=s;
    while((*s++=*t++));
    return temp;
}