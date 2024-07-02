#include <unistd.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t j;
    size_t len;

    while(s[len])
        len++;
    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if (s[i] == reject[j])
                return(i);
            j++;
        }
        i++;
    }
    return(len);
}
int main()
{
    char *ss = "hello man";
    char *de = "mf";
    printf("%lu\n",ft_strcspn(ss,de));
    printf("%lu\n",strcspn(ss,de));
}