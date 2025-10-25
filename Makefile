include config.mk
include targets.mk
include bonus.mk

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@echo "Building $(NAME)."
	@$(COMPILE) $(OBJS) $(LIBFT) $(LIBFT_FLAGS) -o $(NAME)

clean:
	@printf "$(YELLOW)Cleaning objects.$(RESET)\n"
	@$(REMOVE) $(OBJS)
	@make clean -s -C $(LIBFT_DIR)

fclean: clean
	@printf "$(YELLOW)Cleaning binaries.$(RESET)\n"
	@$(REMOVE) $(NAME)
	@make fclean -s -C $(LIBFT_DIR)

re: fclean all