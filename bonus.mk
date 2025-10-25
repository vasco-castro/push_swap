
BONUS = checker

BONUS_SRCS = $(addsuffix .c, \
	$(addprefix $(SRC_DIR)/, $(BONUS)) \
)

# bonus:
# 	@echo "Building $(BONUS)."
# 	@$(COMPILE) $(BONUS_OBJS) -o $(BONUS)