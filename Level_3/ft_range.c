#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int ft_abs(int x)
{
    if (x >=0)
        return(x);
    return(-x);
}
int     *ft_range(int start, int end)
{
    int i = 0;
    int n = ft_abs(end - start) + 1;
    int *range = (int *)malloc(sizeof(int ) * n);
    if (!range)
        return(NULL);
    while(i < n)
    {
        if (start < end)
            range[i++] = start++;
        else
            range[i++] = start--;
    }
    return(range);
}
int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	
	int start = atoi(av[1]);
	int end = atoi(av[2]);
	int size = ft_abs(end - start) + 1;
	int *res = ft_range(start, end);
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", res[i]);
	}
	return (0);
}