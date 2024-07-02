#include <unistd.h>

int ft_atoi(char *str)
{
    int res = 0;
    int sign = 1;
    while(*str == 32 || (*str >=9 && *str <= 13))
        str++;
    if (*str == '-')
        sign = -1;
    if (*str == '+' || *str == '-')
        str++;
    while(*str >= '0' && *str <= '9')
    {
        res = res * 10 + *str - '0';
        str++;
    }
    return(sign * res);
}
void ft_putnbr(int nb)
{
    char digit[] = "0123456789";
    if (nb >= 10)
        ft_putnbr(nb / 10);
    write(1,&digit[nb % 10],1);
}
int main(int argc,char *argv[])
{
    int i = 1;
    if (argc == 2)
    {
        int nbr = ft_atoi(argv[1]);
        while(i <= 9 && nbr <= 238609183)
        {
            ft_putnbr(i);
            write(1," x ",3);
            ft_putnbr(nbr);
            write(1," = ",3);
            ft_putnbr(i * nbr);
            write(1,"\n",1);
            i+=1;
        }
        return(0);
    }
    write(1,"\n",1);
}