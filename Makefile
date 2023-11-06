### COMPILATION ###
CC = gcc
CFLAGS = -Wall -Wextra -Werror

### INCLUDES ###
PROJECT = libft.a
PROJECT_DIR = ./

### SOURCE FILES ###
SRC_FILE = ft_isascii.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c \
			ft_toupper.c ft_tolower.c ft_bzero.c ft_memset.c ft_memmove.c \
			ft_memcpy.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_strlen.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
			ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_split.c ft_strndup.c ft_itoa.c \
			ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c 

BONUS_FILE = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			 ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			 ft_lstmap.c
### HEADER FILE ###
HEADER_DIR = ./
HEADER_FILE = libft.h
## OBJECT FILE ###
OBJ_FILE = $(SRC_FILE:.c=.o)
BONUS_OBJ = $(BONUS_FILE:.c=.o)

### RULES ###
all : $(PROJECT)

$(PROJECT) : $(OBJ_FILE)
	ar rc $(PROJECT) $(OBJ_FILE)

%.o : %.c $(HEADER_FILE)
	$(CC) $(CFLAGS) -I $(HEADER_DIR) -c $< -o $@

bonus : $(OBJ_FIL) $(BONUS_OBJ)
	ar rc $(PROJECT) $(OBJ_FILE) $(BONUS_OBJ)

fclean : clean
	rm -f $(PROJECT)

#Suppresion des fichiers objet
clean :
	rm -f *.o

re : fclean all

so : 
	$(CC) -nostartfiles -fPIC $(CFLAGS) -c $(SRC_FILE) $(BONUS_FILE) -I $(HEADER_DIR)
	gcc -nostartfiles -shared -o libft.so $(OBJ_FILE) $(BONUS_OBJ)
