NAME = push_swap

BONUS = checker

CC = cc
CFLAGS = -Wall -Werror -Wextra -O3

RM = rm -f

SRCS = push_swap.c
BONUS_SRCS = checker.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Building $(NAME)."
	@$(CC) $(NAME) $(OBJS)

LIBFTDIR = libft
LIBFT = $(LIBFTDIR)/libft.a
$(LIBFT):
	@make -C $(LIBFTDIR) --no-print-directory

FT_PRINTFDIR = printf
FT_PRINTF = $(FT_PRINTFDIR)/libftprintf.a
$(FT_PRINTF):
	@make -C $(FT_PRINTFDIR) --no-print-directory

bonus:
	@echo "Building $(BONUS)."
	@$(CC) $(BONUS) $(BONUS_OBJS)

clean:
	@echo "Cleaning all objects."
	@$(RM) $(OBJS)
	@make -C $(FT_PRINTFDIR) clean --no-print-directory
	@make -C $(LIBFTDIR) clean --no-print-directory

fclean: clean
	@echo "Cleaning all $(NAME) files."
	@$(RM) $(NAME)
	@make -C $(FT_PRINTFDIR) fclean --no-print-directory
	@make -C $(LIBFTDIR) fclean --no-print-directory

re: fclean all