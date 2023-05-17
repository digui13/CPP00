#################################################################################################
# 										VARIABLES												#
#################################################################################################

#	MAKEFLAGS += --silent

#NAME
NAME						=	account

# Compiler
Compile						=	g++ -Wall -Wextra -Werror -fsanitize=address -std=c++98
#Compile						=	clang++ -Wall -Wextra -Werror -fsanitize=address -std=c++98

# Flags for Compiler
O_FLAG 						=	-o
C_FLAG 						=	-c

# Command for Library
AR							=	ar rc

INC							=	-I includes

# Folder Management
RM							=	rm -rf
CREATE_FOLDER 				=	mkdir -p

# Norminette
NORM 						=	norminette

#################################################################################################
# 										FOLDERS													#
#################################################################################################

SRC_FOLDER					=	srcs
OBJ_FOLDER					=	objs
INC_FOLDER					=	incs
LIB_FOLDER					=	libs


#################################################################################################
# 										FILES													#
#################################################################################################

OBJS						=	$(SOURCE:.cpp=.o)

LIB_FILE					=	libft.a

SOURCE						=	Account.cpp \
								tests.cpp


#################################################################################################
# 										RULES													#
#################################################################################################

# all
all: $(NAME)

# Build Project
$(NAME): $(OBJS)
					$(Compile) $(OBJS) -o $(NAME)

# Clean Project
clean:
					$(RM) $(OBJ_FILES) $(OBJS)
					$(RM) $(NAME)

fclean:				clean
					$(RM) $(NAME)

# Clean and Build Project
re:					fclean $(NAME)

# Phony (it makes clear that isn't a file but a command of the Makefile)
.PHONY:				all clean fclean re