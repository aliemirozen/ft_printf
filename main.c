/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliemirozen <alozen@student.42istanbul.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:26:30 by aliemirozen       #+#    #+#             */
/*   Updated: 2023/02/12 15:26:36 by aliemirozen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char c = 'c';
	ft_printf("char = %c\n",c);
	char *str = "This is tester code :)";
	ft_printf("str = %s\n",str);
	ft_printf("pointer = %p\n", str);
	ft_printf("int = %d\n", 3);
	unsigned int num = 1231233212;
	ft_printf("unsigned int = %u\n",num);
	ft_printf("percent = %%\n");
	ft_printf("hex = %x\n", 1233231);
	ft_printf("hex = %X\n", 1233231);
}

/*int toplaKnks(int miktar, ...)
{
    va_list ar;
    int i = 0;
    int toplam = 0;
    va_start(ar, miktar);
    while(i < miktar)
    {
        toplam += va_arg(ar, int);
        i++;
    }
    va_end(ar);
    return(toplam);
}

int main()
{
    ft_printf("%d\n", toplaKnks(4, 1, 3, 6, 8, 90, 567));
}*/

/*int carpim(int miktar, ...)
{
    va_list ar;
    int carpim = 1;
    int i = 0;
    va_start(ar, miktar);
    while(i < miktar)
    {
        carpim *= va_arg(ar, int);
        i++;
    }
    va_end(ar);
    return(carpim);
}

int main()
{
    ft_printf("Çarpım = %d", carpim(3, 1, 3, 5));
}*/
