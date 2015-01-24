/* ========================================================================== */
/*                                                                            */
/*    ██╗  ██╗██████╗                                                         */
/*    ██║  ██║╚════██╗                                                        */
/*    ███████║ █████╔╝              created by: mpillet                       */
/*    ╚════██║██╔═══╝                       at: 2015-01-22 00:00:01           */
/*         ██║███████╗                                                        */
/*         ╚═╝╚══════╝                                                        */
/*    ███████╗ █████╗ ██╗   ██╗ █████╗ ████████╗████████╗ █████╗ ███████╗     */
/*    ╚══███╔╝██╔══██╗██║   ██║██╔══██╗╚══██╔══╝╚══██╔══╝██╔══██╗██╔════╝     */
/*      ███╔╝ ███████║██║   ██║███████║   ██║      ██║   ███████║███████╗     */
/*     ███╔╝  ██╔══██║╚██╗ ██╔╝██╔══██║   ██║      ██║   ██╔══██║╚════██║     */
/*    ███████╗██║  ██║ ╚████╔╝ ██║  ██║   ██║      ██║   ██║  ██║███████║     */
/*    ╚══════╝╚═╝  ╚═╝  ╚═══╝  ╚═╝  ╚═╝   ╚═╝      ╚═╝   ╚═╝  ╚═╝╚══════╝     */
/*                                                                            */
/* ========================================================================== */

#include <stdio.h>
#include <string.h>
#include "libftasm.h"

void logit (char * str);

int main (void)
{

	/**
	** -------------------------------------------------------------------------
	** ft_bzero
	** -------------------------------------------------------------------------
	**/

	logit("ft_bzero");

	char str[4] = "jui";

	printf("str[0] = %d\n", str[0]);
	printf("str[1] = %d\n", str[1]);
	printf("str[2] = %d\n", str[2]);

	ft_bzero(str, 3);
	printf("ft_bzero effectue\n");

	printf("str[0] = %d\n", str[0]);
	printf("str[1] = %d\n", str[1]);
	printf("str[2] = %d\n", str[2]);

	printf("test with null\n");
	ft_bzero(NULL, 5);
	printf("aucun segfault\n");

	/**
	** -------------------------------------------------------------------------
	** ft_strlen
	** -------------------------------------------------------------------------
	**/

	logit("ft_strlen");

	char str2[6] = "abcde";

	printf("str = %s\n", str2);
	printf("len = %d\n", ft_strlen(str2));

	char str3[2] = "a";

	printf("str = %s\n", str3);
	printf("len = %d\n", ft_strlen(str3));

	/**
	** -------------------------------------------------------------------------
	** ft_isalpha
	** -------------------------------------------------------------------------
	**/

	logit("ft_isalpha");

	printf("%c %d\n", 'a', ft_isalpha('a'));
	printf("%c %d\n", 'A', ft_isalpha('A'));

	printf("%c %d\n", 'z', ft_isalpha('z'));
	printf("%c %d\n", 'Z', ft_isalpha('Z'));

	printf("%c %d\n", '@', ft_isalpha('@'));
	printf("%c %d\n", '4', ft_isalpha('4'));
	printf("%c %d\n", '_', ft_isalpha('_'));
	printf("%c %d\n", '!', ft_isalpha('!'));
	printf("%c %d\n", '[', ft_isalpha('['));
	printf("%c %d\n", '{', ft_isalpha('{'));

	/**
	** -------------------------------------------------------------------------
	** ft_isdigit
	** -------------------------------------------------------------------------
	**/

	logit("ft_isdigit");

	printf("%c %d\n", '1', ft_isdigit('1'));
	printf("%c %d\n", '5', ft_isdigit('5'));
	printf("%c %d\n", '0', ft_isdigit('0'));
	printf("%c %d\n", '/', ft_isdigit('/'));
	printf("%c %d\n", ':', ft_isdigit(':'));

	/**
	** -------------------------------------------------------------------------
	** ft_isalnum
	** -------------------------------------------------------------------------
	**/

	logit("ft_isalnum");

	printf("%c %d\n", 'a', ft_isalnum('a'));
	printf("%c %d\n", 'A', ft_isalnum('A'));

	printf("%c %d\n", 'z', ft_isalnum('z'));
	printf("%c %d\n", 'Z', ft_isalnum('Z'));

	printf("%c %d\n", '@', ft_isalnum('@'));
	printf("%c %d\n", '4', ft_isalnum('4'));
	printf("%c %d\n", '_', ft_isalnum('_'));
	printf("%c %d\n", '!', ft_isalnum('!'));
	printf("%c %d\n", '[', ft_isalnum('['));
	printf("%c %d\n", '{', ft_isalnum('{'));

	printf("%c %d\n", '1', ft_isalnum('1'));
	printf("%c %d\n", '5', ft_isalnum('5'));
	printf("%c %d\n", '0', ft_isalnum('0'));
	printf("%c %d\n", '/', ft_isalnum('/'));
	printf("%c %d\n", ':', ft_isalnum(':'));

	/**
	** -------------------------------------------------------------------------
	** ft_isascii
	** -------------------------------------------------------------------------
	**/

	logit("ft_isascii");

	printf("%c %d\n", 'a', ft_isascii('a'));
	printf("%c %d\n", 209, ft_isascii(209));
	printf("%c %d\n", 0, ft_isascii(0));
	printf("%c %d\n", 127, ft_isascii(127));
	printf("%c %d\n", 128, ft_isascii(128));

	/**
	** -------------------------------------------------------------------------
	** ft_isprint
	** -------------------------------------------------------------------------
	**/

	logit("ft_isprint");

	printf("%c %d\n", 32, ft_isprint(32));
	printf("%c %d\n", 33, ft_isprint(33));
	printf("%c %d\n", 128, ft_isprint(128));

	/**
	** -------------------------------------------------------------------------
	** ft_toupper
	** -------------------------------------------------------------------------
	**/

	logit("ft_toupper");

	printf("%c --> %c\n", 'a', ft_toupper('a'));
	printf("%c --> %c\n", 'z', ft_toupper('z'));
	printf("%c --> %c\n", '`', ft_toupper('`'));
	printf("%c --> %c\n", '{', ft_toupper('{'));
	printf("%c --> %c\n", 'A', ft_toupper('A'));
	printf("%c --> %c\n", '2', ft_toupper('2'));
	printf("%c --> %c\n", '-', ft_toupper('-'));

	/**
	** -------------------------------------------------------------------------
	** ft_tolower
	** -------------------------------------------------------------------------
	**/

	logit("ft_tolower");

	printf("%c --> %c\n", 'a', ft_tolower('a'));
	printf("%c --> %c\n", 'z', ft_tolower('z'));
	printf("%c --> %c\n", '`', ft_tolower('`'));
	printf("%c --> %c\n", '{', ft_tolower('{'));
	printf("%c --> %c\n", 'A', ft_tolower('A'));
	printf("%c --> %c\n", '2', ft_tolower('2'));
	printf("%c --> %c\n", '-', ft_tolower('-'));

	/**
	** -------------------------------------------------------------------------
	** ft_puts
	** -------------------------------------------------------------------------
	**/

	logit("ft_puts");

	ft_puts("foo bar baz");

	/**
	** -------------------------------------------------------------------------
	** ft_strcat
	** -------------------------------------------------------------------------
	**/

	logit("ft_strcat");

	char		toast[7] = "abc";
	char		chips[4] = "def";

	toast[3] = '\0';
	toast[6] = '\0';

	printf("string 1 = %s\n", toast);
	printf("string 2 = %s\n", chips);
	printf("  result = %s\n", ft_strcat(toast, chips));

	char * toto = NULL;
	char * tata = NULL;

	printf("string 1 = %s\n", toto);
	printf("string 2 = %s\n", tata);
	printf("  result = %s\n", ft_strcat(toto, tata));

	printf("\n");
	return (0);
}

void logit (char * str)
{
	printf("\n\033[33m > %s\n", str);
	printf("   ");

	int i = 0;
	while (i < strlen(str)) {
		printf("-");
		i++;
	}
	printf("\033[0m\n\n");
};
