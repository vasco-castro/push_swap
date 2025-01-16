NAME = push_swap

BONUS = checker

CC = cc
CFLAGS = -Wall -Werror -Wextra -O3

RM = rm -f

# Directories
INC		= ./inc/
SRC_DIR	= ./
OP_DIR 	= ./operations/
OBJ_DIR	= ./objs/

SRCS = $(SRC_DIR)push_swap.c $(SRC_DIR)stack_init.c $(SRC_DIR)stack_len.c $(SRC_DIR)stack_dups.c $(OPERATIONS)
OPERATIONS = $(OP_DIR)push.c $(OP_DIR)rotate.c $(OP_DIR)rrotate.c $(OP_DIR)swap.c
# BONUS_SRCS = checker.c

# OBJS = $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))
# SRC_OBJS = $(SRCS:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)
# OP_OBJS = $(OPERATIONS:$(OP_DIR)%.c=$(OBJ_DIR)$(OP_DIR)%.o)
# OBJS = $(SRC_OBJS) $(OP_OBJS) #$(SRCS:%.c=$(OBJ_DIR)%.o) #$(OP_OBJS)
# BONUS_OBJS = $(BONUS_SRCS:.c=.o)

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Building $(NAME)."
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# LIBFTDIR = libft
# LIBFT = $(LIBFTDIR)/libft.a
# $(LIBFT):
# 	@make -C $(LIBFTDIR) --no-print-directory

# FT_PRINTFDIR = printf
# FT_PRINTF = $(FT_PRINTFDIR)/libftprintf.a
# $(FT_PRINTF):
# 	@make -C $(FT_PRINTFDIR) --no-print-directory

# bonus:
# 	@echo "Building $(BONUS)."
# 	@$(CC) $(CFLAGS) $(BONUS_OBJS) -o $(BONUS)

clean:
	@echo "Cleaning all objects."
	@$(RM) $(OBJS)
# @make -C $(FT_PRINTFDIR) clean --no-print-directory
# @make -C $(LIBFTDIR) clean --no-print-directory

fclean: clean
	@echo "Cleaning all $(NAME) files."
	@$(RM) $(NAME)
# @make -C $(FT_PRINTFDIR) fclean --no-print-directory
# @make -C $(LIBFTDIR) fclean --no-print-directory

re: fclean all