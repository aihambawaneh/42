#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	int ft;
	int pf;
	int x;

	x = 42;

	/* ========== %c ========== */
	ft = ft_printf("Char: %c\n", 'A');
	pf = printf("Char: %c\n", 'A');
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	/* ========== %s ========== */
	ft = ft_printf("Str: %s\n", "Hello");
	pf = printf("Str: %s\n", "Hello");
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	ft = ft_printf("Str NULL: %s\n", NULL);
	pf = printf("Str NULL: %s\n", NULL);
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	/* ========== %d / %i ========== */
	ft = ft_printf("%d\n", 42);
	pf = printf("%d\n", 42);
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	ft = ft_printf("%i\n", -42);
	pf = printf("%i\n", -42);
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	ft = ft_printf("%d %i %d\n", 1, -2, 3);
	pf = printf("%d %i %d\n", 1, -2, 3);
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	/* ========== %u ========== */
	ft = ft_printf("%u\n", 42);
	pf = printf("%u\n", 42);
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	ft = ft_printf("%u\n", -1);
	pf = printf("%u\n", -1);
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	/* ========== %x / %X ========== */
	ft = ft_printf("%x\n", 255);
	pf = printf("%x\n", 255);
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	ft = ft_printf("%X\n", 255);
	pf = printf("%X\n", 255);
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	ft = ft_printf("%x %X\n", 42, 42);
	pf = printf("%x %X\n", 42, 42);
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	/* ========== %p ========== */
	ft = ft_printf("ptr: %p\n", &x);
	pf = printf("ptr: %p\n", &x);
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	ft = ft_printf("ptr null: %p\n", NULL);
	pf = printf("ptr null: %p\n", NULL);
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	/* ========== %% ========== */
	ft = ft_printf("Percent: %%\n");
	pf = printf("Percent: %%\n");
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	return (0);
}
