#include "ft_printf.h"

int main()
{
    printf("%d\n", printf("%d %d", 10000, 100));
    printf("%d\n", ft_printf("%d %d", 10000, 100));
}