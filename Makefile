NAME	= libft.a
INC		= ./
SRC		= ft_putnbr_fd.c ft_tolower.c ft_toupper.c ft_strnstr.c ft_strrchr.c ft_strchr.c \
ft_strlen.c ft_strncmp.c ft_strmapi.c ft_strlcat.c ft_strlcpy.c ft_strtrim.c \
ft_strjoin.c ft_substr.c ft_bzero.c ft_memset.c ft_memccpy.c ft_memmove.c ft_memcpy.c \
ft_memcmp.c ft_memchr.c ft_calloc.c ft_strdup.c ft_itoa.c ft_isascii.c ft_isprint.c \
ft_isalnum.c ft_isdigit.c ft_isalpha.c ft_putendl_fd.c ft_putchar_fd.c ft_putstr_fd.c \
ft_split.c ft_atoi.c

BONUS	= ft_lstadd_back.c ft_lstdelone.c ft_lstmap.c ft_lstclear.c ft_lstiter.c \
ft_lstlast.c ft_lstsize.c ft_lstnew.c ft_lstadd_front.c

OBJ		= ${SRC:.c=.o}
BONUSO	= ${BONUS:.c=.o}
FLAGS	= -Wextra -Wall -Werror

.c.o:
			gcc $(FLAGS) -I ${INC} -c $< -o $(<:.c=.o)

all: $(NAME)


$(NAME):	${OBJ}
			ar rcs ${NAME} ${OBJ}
clean:
			rm -f ${OBJ} ${BONUSO}

fclean:		clean
			rm -f ${NAME}

bonus:		${OBJ} ${BONUSO}
			ar rcs ${NAME} ${OBJ} ${BONUSO}

tidy:		all clean

re:	 fclean all

.PHONY: clean all fclean re
