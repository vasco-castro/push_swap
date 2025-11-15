
BONUS = checker

BONUS_SRCS = $(addsuffix .c, \
	$(addprefix $(SRC_DIR)/, $(BONUS)) \
)

BONUS_OBJS = $(BONUS_SRCS:%.c=%.o)

bonus: $(LIBFT) $(BONUS_OBJS)
	@echo "Building $(BONUS)."
	@$(COMPILE) $(BONUS_OBJS) $(LIBFT) $(LIBFT_FLAGS) -o $(BONUS)