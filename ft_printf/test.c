#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	int ft;
	int pf;

	/* ===== %d ===== */
	ft = ft_printf("%d\n", 42);
	pf = printf("%d\n", 42);
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	ft = ft_printf("%d\n", 0);
	pf = printf("%d\n", 0);
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	/* ===== %i ===== */
	ft = ft_printf("%i\n", -42);
	pf = printf("%i\n", -42);
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	/* ===== mix d & i ===== */
	ft = ft_printf("%d %i %d\n", 1, -2, 3);
	pf = printf("%d %i %d\n", 1, -2, 3);
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	/* ===== %u ===== */
	ft = ft_printf("%u\n", 42);
	pf = printf("%u\n", 42);
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	ft = ft_printf("%u\n", -1);
	pf = printf("%u\n", -1);
	printf("ret ft: %d | ret pf: %d\n\n", ft, pf);

	return (0);
}
