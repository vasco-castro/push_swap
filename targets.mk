# Directories
INC		= ./inc/
SRC_DIR	= ./
OP_DIR 	= ./operations/
OBJ_DIR	= ./objs/

SRCS = $(addsuffix .c,
	$(addprefix $(SRC_DIR), push_swap stack_init stack_len stack_dups)
	$(addprefix $(OP_DIR), push rotate rrotate swap)
)

# BONUS_SRCS = checker.c

# OBJS = $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))
# SRC_OBJS = $(SRCS:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)
# OP_OBJS = $(OPERATIONS:$(OP_DIR)%.c=$(OBJ_DIR)$(OP_DIR)%.o)
# OBJS = $(SRC_OBJS) $(OP_OBJS) #$(SRCS:%.c=$(OBJ_DIR)%.o) #$(OP_OBJS)
# BONUS_OBJS = $(BONUS_SRCS:.c=.o)

OBJS = $(SRCS:%.c=%.o)