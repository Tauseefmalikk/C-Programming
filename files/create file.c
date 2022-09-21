#include<stdio.h>
#include<string.h>
int main()
{
    int x; char s[100];
    FILE *p;
    p = fopen("file1.txt","w");
    x = 4884;
    strcpy(s, "hello world I am bot!!"); 
    fprintf(p,"this is the value of x: %d and this text is from the bot: %s",x,s);
    fclose;
    return 0;
}
