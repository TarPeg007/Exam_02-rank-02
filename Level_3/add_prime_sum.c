#include <unistd.h>

int	ft_atoi(char *str)
{
    int res = 0;
    int sign = 1;
    while(*str  == 32 || (*str >= 9 && *str <= 13))
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
void	ft_putnbr(int nb)
{
    char digit[] = "0123456789";
    if (nb >= 10)
		ft_putnbr(nb / 10);
	write(1, &digit[nb% 10], 1);
}
int  is_prime(int num)
{
    int i = 2;
    if(num <= 1)
        return(0);
    while(i * i <= num)
    {
        if (num % i == 0)
            return(0);
        i++;
    }
    return(1);
}
int main(int argc, char *argv[])
{
    int nbr;
    int sum;
    if (argc == 2)
    {
        sum = 0;
        nbr = ft_atoi(argv[1]);
        while(nbr > 0)
        {
            if (is_prime(nbr))
                sum+=nbr;
            nbr--;
        }
        ft_putnbr(sum);
    }
    if(argc != 2)
        ft_putnbr(0);
    write(1,"\n",1);
}