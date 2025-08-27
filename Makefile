include config.mk
include targets.mk

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Building $(NAME)."
	@$(COMPILE) $(OBJS) -o $(NAME)

# LIBFTDIR = libft
# LIBFT = $(LIBFTDIR)/libft.a
# $(LIBFT):
# 	@make -C $(LIBFTDIR) --no-print-directory

# FT_PRINTFDIR = printf
# FT_PRINTF = $(FT_PRINTFDIR)/libftprintf.a
# $(FT_PRINTF):
# 	@make -C $(FT_PRINTFDIR) --no-print-directory

clean:
	@echo "Cleaning all objects."
	@$(REMOVE) $(OBJS)
# @make -C $(FT_PRINTFDIR) clean --no-print-directory
# @make -C $(LIBFTDIR) clean --no-print-directory

fclean: clean
	@echo "Cleaning all $(NAME) files."
	@$(REMOVE) $(NAME)
# @make -C $(FT_PRINTFDIR) fclean --no-print-directory
# @make -C $(LIBFTDIR) fclean --no-print-directory

re: fclean all