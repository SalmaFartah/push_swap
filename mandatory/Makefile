CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

SRC = 	push_swap.c\
		check_errors.c\
		str_to_list.c\
		instructions.c\
		instructionss.c\
		libft_need/ft_bzero.c\
		libft_need/ft_isdigit.c\
		libft_need/ft_lstnew.c\
		libft_need/ft_strjoin.c\
		libft_need/ft_calloc.c\
		libft_need/ft_lstadd_back.c\
		libft_need/ft_split.c\
		libft_need/ft_strlen.c\
		libft_need/ft_lstlast.c\
		libft_need/ft_lstadd_front.c\
		libft_need/ft_lstsize.c\
		sort/sort.c\
		sort/check_sort.c\
		sort/sort_bigstack/target_atob.c\
		sort/sort_bigstack/target_btoa.c\
		sort/sort_bigstack/move.c\
		sort/sort_bigstack/best_mv.c\
		free_stack.c\
		args_to_str.c

OBJ = $(SRC:.c=.o)

%.o : %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

bonus:
	make -C ../part_bonus

clean :
	make -C ../part_bonus clean
	rm -rf $(OBJ) 

fclean : clean
	make -C ../part_bonus fclean
	rm -rf $(NAME)

re : fclean all

ac : all clean

bc :
	make -C ../part_bonus ac