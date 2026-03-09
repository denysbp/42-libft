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
	printf("ft_strlen -> o resultado eperado é 9 = %zu\n",ft_strlen(d));

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

	printf("ft_strncmp -> é esperado 0 e retorna = %d\n",ft_strncmp("ola mundo", "ola mundo",5));

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

	printf("\n");
	char dest_str[] = "Tutorialspoint";
	const char src_str[]  = "Denys";
	printf("Before memmove dest = %s, src = %s\n", dest_str, src_str);
	ft_memmove(dest_str, src_str, sizeof(src_str));
	printf("After memmove dest = %s, src = %s\n", dest_str, src_str);

	printf("\n");
	char desti_str[6];
	const char srrc_str[]  = "Denys";
	printf("Before ft_strlcpy dest = %s, src = %s\n", desti_str, srrc_str);
	size_t r = ft_strlcpy(desti_str, srrc_str, 6);
	printf("After ft_strlcpy dest = %s, src = %s e o size foi %zu\n", desti_str, srrc_str,r);

	printf("\n");
	char destii_str[] = "denys ";
	const char srrrc_str[]  = "mundo";
	printf("Before ft_strlcat dest = %s, src = %s\n", destii_str, srrrc_str);
	size_t rr = ft_strlcat(destii_str, srrrc_str,0);
	printf("After ft_strlcat dest = %s, src = %s e o size foi %zu\n", destii_str, srrrc_str,rr);

	printf("\n");
	char s1[] = "Banana";
	char s2[] = "ana";
	printf("ft_strnstr -> %s\n",ft_strnstr(s1,s2,5));

	printf("\n");
	char str[] = "This is a sample string";
	char * pch;
	pch=ft_strrchr(str,'n');
	printf ("ft_strrchr -> Last occurence of 's' found at %ld \n",pch-str+1);

	printf("\n");
	char myStr[] = "Hello World!";
	char *myPtr = (char*)ft_memchr(myStr, 'e', 12);
	if (myPtr != NULL) {
	printf("%s", myPtr);
	}

	printf("\n");
	char myStr1[] = "BBCD";
	char myStr2[] = "BBCE";
	int cmp = ft_memcmp(myStr1, myStr2, 5);

	printf("\n");
	if (cmp > 0) {
		printf("%s is greater than %s\n", myStr1, myStr2);
	} else if (cmp < 0) {
		printf("%s is greater than %s\n", myStr2, myStr1);
	} else {
		printf("%s is equal to %s\n", myStr1, myStr2);
	}

	printf("\n");
	// Allocate memory for a number of items
	int numItems = 0;
	int *myArray = ft_calloc(numItems, sizeof(int));

	// Write into the memory
	for(int i = 0; i < numItems; i++) {
		myArray[i] = i + 1;
	}

	// Display the contents of the memory
	for(int i = 0; i < numItems; i++) {
		printf("%d ", myArray[i]);
	}

	// Free the memory
	free(myArray);
	myArray = NULL;

	printf("\n");
	char *original = "banana";
	char *copy;

	copy = ft_strdup(original);

	printf("Original: %s\n", original);
	printf("Copia: %s\n", copy);

	free(copy);
	return (0);
}