#include <unistd.h>
char *ft_strrev(char *str)
{
    int i = -1;
    int len = 0;
    char temporary;
    while(str[len])
        len++;
    while(++i < len / 2)
    {
        temporary = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temporary;
    }
    return(str);
}
#include <stdio.h>
int main()
{
    char saad[] = "hello mate";
    char *s = ft_strrev(saad);
    printf("%s",s);
}