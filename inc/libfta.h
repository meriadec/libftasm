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

#ifndef LIBFT_ASM
# define LIBFT_ASM

void				ft_bzero	(void * s, size_t n);
void *				ft_memset	(void * b, int c, size_t len);
void *				ft_memcpy	(void * s1, const void * s2, size_t n);
size_t				ft_strlen	(char * str);

int					ft_isalpha	(int c);
int					ft_isdigit	(int c);
int					ft_isalnum	(int c);
int					ft_isascii	(int c);
int					ft_print	(int c);

int					ft_toupper	(int c);
int					ft_tolower	(int c);

int					ft_puts		(char * const str);
char *				ft_strcat	(char * s1, const char * s2);
char *				ft_strdup	(const char *s1);

int					ft_cat		(int fd);

/**
** Bonus functions
*/

int					ft_indexof	(char c, char * str);
int					ft_strequ	(char const *s1, char const *s2);
char *				ft_strchr	(const char *s, int c);

#endif
