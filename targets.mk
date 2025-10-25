# Directories
SRC_DIR = ./src
LIB_DIR = ./lib
OP_DIR 	= $(SRC_DIR)/operations
STK_DIR = $(SRC_DIR)/stacks

SRCS = $(addsuffix .c, \
	$(addprefix $(SRC_DIR)/, $(NAME)) \
	$(addprefix $(OP_DIR)/, operations push rotate rrotate swap) \
	$(addprefix $(STK_DIR)/,  stack_init stack_len stack_dups) \
)

OBJS = $(SRCS:%.c=%.o)

# LIBFT linking and compilation flags
LIBFT_DIR = $(LIB_DIR)/libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_FLAGS = -L$(LIBFT_DIR)/include

$(LIBFT_DIR)/.git:
	git submodule update --init $(LIBFT_DIR)

$(LIBFT): $(LIBFT_DIR)/.git
	@printf "$(GREEN)Building LIBFT.$(RESET)\n"
	@make -s -C $(LIBFT_DIR)
