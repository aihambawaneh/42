#include "ft_printf.h"

int print_str(va_list args)
{
    char    *str;
    int i;
    
    str = va_arg(args, char*);
    if (!str)
    {
        write(1, "(null)", 6);
        return(6);
    }
    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return(i);
}