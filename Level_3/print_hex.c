#include <unistd.h>

int ft_atoi(char *str)
{
    int res = 0;
    int sign = 1;
    while(*str == 32 || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-')
        sign  = -1;
    if (*str == '+' || (*str == '-'))
        str++;
    while(*str >= '0' && *str <= '9')
    {
        res = res * 10 + *str - '0';
        str++;
    }
    return(sign * res);
}
void print_hex(int nb)
{
    char digit[] = "0123456789abcdef";
    if (nb >= 16)
        print_hex(nb / 16);
    write(1,&digit[nb % 16],1);
}
int main(int argc, char *argv[])
{
    int i = 0;
    if (argc == 2)
        print_hex(ft_atoi(argv[1]));
    write(1,"\n",1);
}