LIBC_FILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
	ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
	ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_intlen.c

ADDITIONAL_FILES = ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c ft_striteri.c \
	ft_isspace.c

BONUS_FILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

PRINTF_FILES = ft_printf.c print_hexa.c print_nbr.c print_ptr.c \
	print_str.c print_utils.c

GNL_FILES = get_next_line.c get_next_line_utils.c \

OTHER_FILES = ft_addchar.c ft_freesplit.c

LIBC = $(addprefix basic/, $(LIBC_FILES))
ADDITIONAL = $(addprefix additional/, $(ADDITIONAL_FILES))
PRINTF = $(addprefix printf/, $(PRINTF_FILES))
BONUS = $(addprefix additional/, $(ADDITIONAL_FILES))
GNL = $(addprefix gnl/, $(GNL_FILES))
OTHER = $(addprefix other/, $(OTHER_FILES))

SRCS = ${LIBC} ${ADDITIONAL} ${BONUS} ${PRINTF} ${GNL} ${OTHER}

OBJS = ${SRCS:.c=.o}

LIB = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I ./ -g3

.c.o:
	@printf "\033[K Compiling $<... \r"
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
	@printf "\033[K🚀 Compiled $< successfully!\r"

${LIB}:	${OBJS}
	@printf "\nCreating library...\r"
	@ar -rsc ${LIB} ${OBJS}
	@printf "\033[K✅ Libft created successfully!\n"

all: 	${LIB}

clean:
	@printf "Cleaning...\r"
	@rm -f ${OBJS}
	@printf "\033[K✅ Cleaned successfully!\n"

fclean:
	@printf "Full cleaning...\r"
	@rm -f ${LIB}
	@rm -f ${OBJS}
	@printf "\033[K✅ Libft fully cleaned successfully!\n"

re:	fclean all

.PHONY: all clean fclean re bonus