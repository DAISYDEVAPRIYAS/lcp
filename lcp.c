#include <stdio.h>

int main(void) {
    char a[20],b[20],c[20],d[20];
    int i;
    gets(a);
    gets(b);
    gets(c);
    gets(d);
    for(i=0;i<=20;i++)
    {
        if((a[i]==b[i])&&(b[i]==c[i])&&(c[i]==d[i])&&(d[i]==a[i]))
        {
            printf("%c",a[i]);
        }
        else
        {
            break;
        }
    }
