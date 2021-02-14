#include <stdio.h>

int	main (void)
{
	char destino[] = "1234567890123";
	char fonte[] = "banana maior";

	printf("A STRING fonte original é: %s \n", fonte);
	printf("A STRING destino original é: %s \n", destino);
	
	printf("o tamanho retornado é: %d \n", ft_strlcpy(destino, fonte, 10));

	printf("A STRING fonte modificada é: %s \n", fonte);
	printf("A STRING destino modificada é: %s \n", destino);
	return (0);
}