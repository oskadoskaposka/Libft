# https://www.embarcados.com.br/introducao-ao-makefile/
 
# Name of the project
NAME=libft.a
 
# .c files
C_SOURCE=ft_isalnum.c \
         ft_isalpha.c \
         ft_isascii.c \
         ft_isdigit.c \
         ft_isprint.c \
         ft_strlcat.c \
         ft_strlcpy.c \
         ft_strlen.c \
         ft_strncmp.c \
         ft_tolower.c \
         ft_toupper.c
 
# .h files
H_SOURCE=libft.h
 
# Output files
OUT=$(C_SOURCE:.c=.o)
 
# Compiler
CC=gcc
 
# Flags for compiler
CC_FLAGS=-Wall         \
         -Wextra      \
         -Werror

# Compilation and linking

all: $(NAME)

$(NAME):$(OUT)
	@ar rcs  $(NAME) $(OUT)
	@echo "Creating $(NAME)"

$(OUT): $(C_SOURCE) $(H_SOURCE)
	@$(CC) $(CC_FLAGS) -c $(C_SOURCE)
	@echo "Creating $(OUT)"

clean:
	@rm -f $(OUT)
	@echo "Removing $(OUT)"

fclean: clean
	@rm -f $(NAME)
	@echo "Removing $(NAME)"

re: fclean all

#To use this command in terminal write:
# make git m="your message"
git:
	git add .
	git commit -m "$m"
	git push
