#include "libft.h"

int main()
{
	printf("ft_isalnum -> o resultado esperado é 1 e retorna == %d\n",ft_isalnum('h'));
	printf("ft_isalnum -> o resultado esperado é 0 e retorna == %d\n",ft_isalnum('}'));

	printf("ft_isalpha -> o resultado esperado é 1 e retorna == %d\n",ft_isalpha('h'));
	printf("ft_isalpha -> o resultado esperado é 0 e retorna == %d\n",ft_isalpha('1'));


	printf("ft_isascii -> o resultado esperado é 1 e retorna == %d\n",ft_isascii('h'));
	printf("ft_isascii -> o resultado esperado é 1 e retorna == %d\n",ft_isascii('\t'));


	printf("ft_isdigit -> o resultado esperado é 1 e retorna == %d\n",ft_isdigit('4'));
	printf("ft_isdigit -> o resultado esperado é 0 e retorna == %d\n",ft_isdigit('h'));

	printf("ft_isprint -> o resultado esperado é 1 e retorna == %d\n",ft_isprint('h'));
	printf("ft_isprint -> o resultado esperado é 0 e retorna == %d\n",ft_isprint('\n'));

	char *d = "ola mundo";
	printf("ft_strlen -> o resultado eperado é 9 = %d\n",ft_strlen(d));

	char *de = "ola mundo";
	char c = 'o';
	printf("ft_strchr -> ");
	if (ft_strchr(de,c))
	{
		printf("%c esta presente\n",c);
	}
	else{
		printf("%c não está presente\n",c);
	}

	printf("ft_tolower -> %c\n",ft_tolower('A'));
	printf("ft_toupper -> %c\n",ft_toupper('a'));

	int dest[6];
	int src[6] = {10,20,1,3,5,5};
	// size_t	i = 0;
	// size_t m = ;
	ft_memcpy(dest,src,sizeof(int) * 6);
	// while (i <= m)
	// {
	// 	write(1, &dest[i], 1);
	// 	i++;
	// }
	for (size_t r=0; r <= 5; r++)
	{
		printf("dest[%zu] = %d\n",r,dest[r]);
	}
	printf("\n");

	printf("ft_strncmp -> é esperado 1 e retorna = %d\n",ft_strncmp("ola mundo", "ola mundo",5));

	printf("\n");
	printf("ft_atoi -> return = %d\n",ft_atoi("  --4"));

	printf("\n");
	char ct[] = "denysdd";
	printf("ft_bzero -> return antes = %s\n",ct);
	ft_bzero(ct,5);
	printf("ft_bzero -> return depois = %s\n",ct);

	printf("\n");
	char rt[] = "denysdd";
	printf("ft_memset -> return antes = %s\n",rt);
	ft_memset(rt,'c',2);
	printf("ft_memset -> return depois = %s\n",rt);
}