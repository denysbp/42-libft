CCFLAGS := -Wextra -Wall -Werror
NAME := libft.a
SRCS := srcs/
SRC = \
	$(SRCS)ft_isalpha.c\
	$(SRCS)ft_isdigit.c\
	$(SRCS)ft_memcpy.c\
	$(SRCS)ft_strlen.c\
	$(SRCS)ft_toupper.c\
	$(SRCS)ft_isalnum.c\
	$(SRCS)ft_isascii.c\
	$(SRCS)ft_isprint.c\
	$(SRCS)ft_strchr.c\
	$(SRCS)ft_tolower.c\
	$(SRCS)ft_strncmp.c\
	$(SRCS)ft_atoi.c\
	$(SRCS)ft_bzero.c\
	$(SRCS)ft_memset.c\


INCLUDES := includes/
OBJ = $(SRC:.c=.o)
all: $(NAME)

.c.o:
	cc $(CCFLAGS) -c -I$(INCLUDES) $< -o $(<:.c=.o)

libft.a: $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re