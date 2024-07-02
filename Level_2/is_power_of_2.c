#include <unistd.h>
int	    is_power_of_2(unsigned int n)
{
    if (n == 0)
        return(0);
    return(n & (n - 1)) == 0;
}
#include <stdio.h>
int main()
{
    unsigned int a = 1;
    int saad = is_power_of_2(a);
    printf("%d",saad);
}