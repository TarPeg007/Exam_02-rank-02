#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int ft_abs(int x)
{
    if (x >= 0)
        return(x);
    return(-x);
}

int     *ft_rrange(int start, int end)
{
    int i= 0;
    int n = ft_abs(end - start) + 1;
    int *rrange = (int *)malloc(sizeof(int )* n);
    if (!rrange)
        return(NULL);
    while(i < n)
    {
        if (end > start)
            rrange[i++] = end--;
        else
            rrange[i++] = end++;
    }
    return(rrange);
}
#include <stdio.h>
// int main()
// {
//     int a;
//     int b;
//     int i = 0;
//     int n = ft_abs(b - a);
//     int *sw = ft_rrange(a,b);
//     while(i <= n)
//     {
//         printf("%d ",sw[i]);
//         i++;
//     }
// }
//#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	
	int start = atoi(av[1]);
	int end = atoi(av[2]);
	int size = ft_abs(end - start) + 1;
	int *res = ft_rrange(start, end);
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", res[i]);
	}
	return (0);
}