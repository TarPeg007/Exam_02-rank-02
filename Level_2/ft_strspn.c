#include <unistd.h>
#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s,int c)
{
    while(*s)
    {
        if (*s == c)
            return((char *)s);
        ++s;
    }
    return(0);
}
size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    while(s[i])
    {
        if (ft_strchr(accept,s[i]) == 0)
            break;
        ++i;
    }
    return(i);
}

int main ()
{ 
    char *a = "cergergergidvamegr";
   int len = strspn("iam",a);
   int lenth = ft_strspn("iam",a);
   printf("Length of initial segment matching : %d\n", len );
   printf("Length of initial segment matching : %d\n", lenth );
   return(0); 
}