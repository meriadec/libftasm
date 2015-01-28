# ============================================================================ #
#                                                                              #
#    ██╗  ██╗██████╗                                                           #
#    ██║  ██║╚════██╗                                                          #
#    ███████║ █████╔╝              created by: mpillet                         #
#    ╚════██║██╔═══╝                       at: 2014-12-12 12:O5:02             #
#         ██║███████╗                                                          #
#         ╚═╝╚══════╝                                                          #
#    ███████╗ █████╗ ██╗   ██╗ █████╗ ████████╗████████╗ █████╗ ███████╗       #
#    ╚══███╔╝██╔══██╗██║   ██║██╔══██╗╚══██╔══╝╚══██╔══╝██╔══██╗██╔════╝       #
#      ███╔╝ ███████║██║   ██║███████║   ██║      ██║   ███████║███████╗       #
#     ███╔╝  ██╔══██║╚██╗ ██╔╝██╔══██║   ██║      ██║   ██╔══██║╚════██║       #
#    ███████╗██║  ██║ ╚████╔╝ ██║  ██║   ██║      ██║   ██║  ██║███████║       #
#    ╚══════╝╚═╝  ╚═╝  ╚═══╝  ╚═╝  ╚═╝   ╚═╝      ╚═╝   ╚═╝  ╚═╝╚══════╝       #
#                                                                              #
# ============================================================================ #

NAME			= libfts.a
TEST			= test
TEST_CAT		= cat
QPEREZ			= qperez

CC				= gcc
CC_ASM			= nasm
FLAG			= -Wall -Werror -Wextra -pedantic
INCS			= -I ./inc
LIBS			=

SRC				= $(DIR_SRC)/ft_bzero.s \
				  $(DIR_SRC)/ft_strlen.s \
				  $(DIR_SRC)/ft_isalpha.s \
				  $(DIR_SRC)/ft_isdigit.s \
				  $(DIR_SRC)/ft_isalnum.s \
				  $(DIR_SRC)/ft_isascii.s \
				  $(DIR_SRC)/ft_isprint.s \
				  $(DIR_SRC)/ft_toupper.s \
				  $(DIR_SRC)/ft_tolower.s \
				  $(DIR_SRC)/ft_puts.s \
				  $(DIR_SRC)/ft_strcat.s \
				  $(DIR_SRC)/ft_memset.s \
				  $(DIR_SRC)/ft_memcpy.s \
				  $(DIR_SRC)/ft_strdup.s \
				  $(DIR_SRC)/ft_cat.s \
				  $(DIR_SRC)/ft_indexof.s \
				  $(DIR_SRC)/ft_strequ.s \
				  $(DIR_SRC)/ft_strchr.s \
				  $(DIR_SRC)/ft_strclr.s \

DIR_SRC			= src
DIR_INC			= inc
DIR_OBJ_ASM		= .obj

DIR_LIST		= src

OBJ_ASM			= $(addprefix $(DIR_OBJ_ASM)/, $(SRC:.s=.o))
OBJ				= $(addprefix $(DIR_OBJ)/, $(SRC:.c=.o))

all : $(NAME)

$(NAME) : $(DIR_OBJ_ASM) $(OBJ_ASM)
	@ar rc $(NAME) $(OBJ_ASM)
	@ranlib $(NAME)
	@printf "\e[32m------------------------------------------------------\e[0m\n"
	@printf '\e[34m%-51s\e[0m\e[32m[✔]\e[0m\n' "created libfts.a"
	@printf "\e[32m------------------------------------------------------\e[0m\n"

$(addprefix $(DIR_OBJ_ASM)/, %.o) : %.s $(DIR_INC)
	@printf "compiling \e[33m%-41s\e[0m" "$@"
	@$(CC_ASM) -f macho64 -o $@ $<
	@printf "\e[32m[✔]\e[0m\n"

clean :
	@if [ -e '$(DIR_OBJ_ASM)' ]; then \
		/bin/rm	-rf $(DIR_OBJ); \
		/bin/rm	-rf $(DIR_OBJ_ASM); \
		printf "\e[32m[✔]\e[0m project %s cleaned.\n" $(NAME); \
		fi

fclean : clean
	@if [ -e '$(NAME)' ]; then \
		/bin/rm -f $(NAME); \
		/bin/rm -f $(TEST); \
		/bin/rm -f $(TEST_CAT); \
		/bin/rm -f $(QPEREZ); \
		printf "\e[32m[✔]\e[0m project %s fcleaned.\n" $(NAME); \
		fi

re : fclean all

$(DIR_OBJ_ASM) :
	@/bin/mkdir $(DIR_OBJ_ASM); \
		for DIR in $(DIR_LIST); \
		do \
		/bin/mkdir $(DIR_OBJ_ASM)/$$DIR; \
		done

$(DIR_OBJ) :
	@/bin/mkdir $(DIR_OBJ); \

$(TEST): $(NAME) main.c
	@$(CC) $(INCS) -L . -lfts main.c -o $@
	@printf "\e[32m------------------------------------------------------\e[0m\n"
	@printf '\e[34m%-51s\e[0m\e[32m[✔]\e[0m\n' "created test"
	@printf "\e[32m------------------------------------------------------\e[0m\n"

$(TEST_CAT): $(NAME) main_cat.c
	@$(CC) $(INCS) -L . -lfts main_cat.c -o $@
	@printf "\e[32m------------------------------------------------------\e[0m\n"
	@printf '\e[34m%-51s\e[0m\e[32m[✔]\e[0m\n' "created cat"
	@printf "\e[32m------------------------------------------------------\e[0m\n"

$(QPEREZ): $(NAME) main_qperez.c
	@$(CC) $(INCS) -L . -lfts main_qperez.c -o $@
	@printf "\e[32m------------------------------------------------------\e[0m\n"
	@printf '\e[34m%-51s\e[0m\e[32m[✔]\e[0m\n' "created qperez"
	@printf "\e[32m------------------------------------------------------\e[0m\n"

.PHONY:	clean fclean re
