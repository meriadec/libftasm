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
#include "libfta.h"

void logit 				(char * str);

void test_ft_bzero 		(void);
void test_ft_strcat		(void);
void test_ft_isalpha	(void);
void test_ft_isdigit	(void);
void test_ft_isalnum	(void);
void test_ft_isascii	(void);
void test_ft_isprint	(void);
void test_ft_toupper	(void);
void test_ft_tolower	(void);
void test_ft_puts		(void);
void test_ft_strlen		(void);
void test_ft_memset		(void);
void test_ft_memcpy		(void);
void test_ft_strdup		(void);
void test_ft_indexof	(void);

int main (void)
{

	test_ft_bzero();
	test_ft_strcat();
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_puts();
	test_ft_strlen();
	test_ft_memset();
	test_ft_memcpy();
	test_ft_strdup();
	test_ft_indexof();

	printf("\n");
	return (0);
}

void test_ft_bzero (void)
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
}

void test_ft_strlen (void)
{
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
}

void test_ft_isalpha (void)
{
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
}

void test_ft_isdigit (void)
{
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
}

void test_ft_isalnum (void)
{
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
}

void test_ft_isascii (void)
{
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
}

void test_ft_isprint (void)
{
	/**
	** -------------------------------------------------------------------------
	** ft_isprint
	** -------------------------------------------------------------------------
	**/

	logit("ft_isprint");

	printf("%c %d\n", 32, ft_isprint(32));
	printf("%c %d\n", 33, ft_isprint(33));
	printf("%c %d\n", 128, ft_isprint(128));
}

void test_ft_toupper (void)
{
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
}

void test_ft_tolower (void)
{
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
}

void test_ft_puts (void)
{
	/**
	** -------------------------------------------------------------------------
	** ft_puts
	** -------------------------------------------------------------------------
	**/

	logit("ft_puts");

	ft_puts("foo bar baz");
}

void test_ft_strcat (void)
{
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

}

void test_ft_memset (void)
{
	/**
	** -------------------------------------------------------------------------
	** ft_memset
	** -------------------------------------------------------------------------
	**/

	logit("ft_memset");

	char	mems[4];

	ft_bzero(mems, 4);
	printf("str[0] = %d\n", mems[0]);
	printf("str[1] = %d\n", mems[1]);
	printf("str[2] = %d\n", mems[2]);
	printf("str[3] = %d\n", mems[3]);
	printf("--- memseting with 'a' ---\n");
	ft_memset(mems, 'a', 4);
	printf("str[0] = %c (%d)\n", mems[0], mems[0]);
	printf("str[1] = %c (%d)\n", mems[1], mems[1]);
	printf("str[2] = %c (%d)\n", mems[2], mems[2]);
	printf("str[3] = %c (%d)\n", mems[3], mems[3]);
}

void test_ft_memcpy (void)
{
	/**
	** -------------------------------------------------------------------------
	** ft_memcpy
	** -------------------------------------------------------------------------
	**/

	logit("ft_memcpy");

	char	memc1[10]	= "123456789";
	char	memc2[5]	= "abcd";

	printf("str1 = %s\n", memc1);
	printf("str2 = %s\n", memc2);
	printf("\n");
	printf("str1 : %3d %3d %3d %3d %3d\n", memc1[0], memc1[1], memc1[2], memc1[3], memc1[4]);
	printf("str2 : %3d %3d %3d %3d %3d\n", memc2[0], memc2[1], memc2[2], memc2[3], memc2[4]);
	printf("\n");
	printf("--- memcpy str 2 into str 1, on 3 characters ---\n");
	printf("\n");
	ft_memcpy(memc1, memc2, 3);
	printf("str1 = %s\n", memc1);
	printf("str2 = %s\n", memc2);
	printf("\n");
	printf("str1 : %3d %3d %3d %3d %3d\n", memc1[0], memc1[1], memc1[2], memc1[3], memc1[4]);
	printf("str2 : %3d %3d %3d %3d %3d\n", memc2[0], memc2[1], memc2[2], memc2[3], memc2[4]);
	printf("\n");

	printf("\n");
	printf("test with int\n");

	int a = 5;
	int b = 4;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("--- memcpy a into b ---\n");
	ft_memcpy(&b, &a, sizeof(int));
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}

void test_ft_strdup (void)
{
	/**
	** -------------------------------------------------------------------------
	** ft_strdup
	** -------------------------------------------------------------------------
	**/

	logit("ft_strdup");

	char * tata = strdup("yolo");
	char * toto = ft_strdup(tata);
	printf(" original string : [%p] [%s]\n", tata, tata);
	printf("duplicate string : [%p] [%s]\n", toto, toto);

}

void test_ft_indexof (void)
{
	/**
	** -------------------------------------------------------------------------
	** ft_indexof
	** -------------------------------------------------------------------------
	**/

	logit("ft_indexof");

	printf("index of [%c] into [%s] = %2d\n", 'c', "adcde", ft_indexof('c', "abcde"));
	printf("index of [%c] into [%s] = %2d\n", 'c', "ooooo", ft_indexof('c', "ooooo"));
	printf("index of [%c] into [%s] = %2d\n", 'o', "ooooo", ft_indexof('o', "ooooo"));

}

void logit (char * str)
{
	printf("\n\033[33m > %s\033[0m\n\n", str);
};
