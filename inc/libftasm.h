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

#endif
