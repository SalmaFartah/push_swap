CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = checker

SRC = 	checker_bonus.c\
		free_stack_bonus.c\
		args_to_str_bonus.c\
		str_to_list_bonus.c\
		instructions_bonus.c\
		instructionss_bonus.c\
		check_errors_bonus.c\
		libft_need_bonus/ft_bzero_bonus.c\
		libft_need_bonus/ft_calloc_bonus.c\
		libft_need_bonus/ft_isdigit_bonus.c\
		libft_need_bonus/ft_lstadd_back_bonus.c\
		libft_need_bonus/ft_lstadd_front_bonus.c\
		libft_need_bonus/ft_lstlast_bonus.c\
		libft_need_bonus/ft_lstnew_bonus.c\
		libft_need_bonus/ft_lstsize_bonus.c\
		libft_need_bonus/ft_split_bonus.c\
		libft_need_bonus/ft_strcmp_bonus.c\
		libft_need_bonus/ft_strjoin_bonus.c\
		libft_need_bonus/ft_strlen_bonus.c\
		sorted_bonus.c\
		get_next_line_bonus/get_next_line_bonus.c\
		get_next_line_bonus/get_next_line_utils_bonus.c


OBJ = $(SRC:.c=.o)

%.o : %.c checker_bonus.h	./get_next_line_bonus/get_next_line_bonus.h
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

ac : all clean
