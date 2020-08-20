GCC = gcc $(FLAGS)

FLAGS = -Wall -Wextra -Werror

INC_DIR = includes/

LST_DIR = list_funcs/
MEM_DIR = memory_funcs/
NUM_DIR = numbers_funcs/
PRINT_DIR = print_funcs/
PRINT_F_DIR = print_funcs/printf_src/
READ_DIR = read_funcs/
STR_DIR = string_funcs/
UTIL_DIR = utility_funcs/

NAME = libft.a
SRCS = $(LST_DIR)ft_lstadd.c\
		$(LST_DIR)ft_lstdel.c\
		$(LST_DIR)ft_lstdelone.c\
		$(LST_DIR)ft_lstiter.c\
		$(LST_DIR)ft_lstmap.c\
		$(LST_DIR)ft_lstnew.c\
		$(MEM_DIR)ft_bzero.c\
		$(MEM_DIR)ft_memalloc.c\
		$(MEM_DIR)ft_memccpy.c\
		$(MEM_DIR)ft_memchr.c\
		$(MEM_DIR)ft_memcmp.c\
		$(MEM_DIR)ft_memcpy.c\
		$(MEM_DIR)ft_memdel.c\
		$(MEM_DIR)ft_memmove.c\
		$(MEM_DIR)ft_memset.c\
		$(NUM_DIR)ft_abs.c\
		$(NUM_DIR)ft_atoi.c\
		$(NUM_DIR)ft_itoa.c\
		$(NUM_DIR)ft_itoa_base.c\
		$(NUM_DIR)ft_lltoa.c\
		$(NUM_DIR)ft_ulltoa_base.c\
		$(NUM_DIR)ft_utoa.c\
		$(NUM_DIR)ft_utoa_base.c\
		$(PRINT_DIR)ft_putchar.c\
		$(PRINT_DIR)ft_putchar_fd.c\
		$(PRINT_DIR)ft_putendl.c\
		$(PRINT_DIR)ft_putendl_fd.c\
		$(PRINT_DIR)ft_putnbr.c\
		$(PRINT_DIR)ft_putnbr_fd.c\
		$(PRINT_DIR)ft_putstr.c\
		$(PRINT_DIR)ft_putstr_fd.c\
		$(PRINT_DIR)ft_printf.c\
		$(PRINT_F_DIR)c_pr.c\
		$(PRINT_F_DIR)cast.c\
		$(PRINT_F_DIR)di_pr.c\
		$(PRINT_F_DIR)f_pr.c\
		$(PRINT_F_DIR)float_utils.c\
		$(PRINT_F_DIR)float_utils2.c\
		$(PRINT_F_DIR)float_utils3.c\
		$(PRINT_F_DIR)long_arithmetics.c\
		$(PRINT_F_DIR)long_arithmetics2.c\
		$(PRINT_F_DIR)parse.c\
		$(PRINT_F_DIR)parse_flags.c\
		$(PRINT_F_DIR)parse_length.c\
		$(PRINT_F_DIR)parse_precision.c\
		$(PRINT_F_DIR)parse_type.c\
		$(PRINT_F_DIR)parse_width.c\
		$(PRINT_F_DIR)percent_pr.c\
		$(PRINT_F_DIR)pointer_pr.c\
		$(PRINT_F_DIR)pr.c\
		$(PRINT_F_DIR)s_pr.c\
		$(PRINT_F_DIR)uox_pr.c\
		$(PRINT_F_DIR)utils.c\
		$(READ_DIR)get_next_line.c\
		$(STR_DIR)ft_char_in_str.c\
		$(STR_DIR)ft_count_words.c\
		$(STR_DIR)ft_str_to_lower.c\
		$(STR_DIR)ft_strcat.c\
		$(STR_DIR)ft_strchr.c\
		$(STR_DIR)ft_strclr.c\
		$(STR_DIR)ft_strcmp.c\
		$(STR_DIR)ft_strcpy.c\
		$(STR_DIR)ft_strdel.c\
		$(STR_DIR)ft_strdup.c\
		$(STR_DIR)ft_strequ.c\
		$(STR_DIR)ft_striter.c\
		$(STR_DIR)ft_striteri.c\
		$(STR_DIR)ft_strjoin.c\
		$(STR_DIR)ft_strjoin_free.c\
		$(STR_DIR)ft_strlcat.c\
		$(STR_DIR)ft_strlen.c\
		$(STR_DIR)ft_strmap.c\
		$(STR_DIR)ft_strmapi.c\
		$(STR_DIR)ft_strncat.c\
		$(STR_DIR)ft_strncmp.c\
		$(STR_DIR)ft_strncpy.c\
		$(STR_DIR)ft_strnequ.c\
		$(STR_DIR)ft_strnew.c\
		$(STR_DIR)ft_strnstr.c\
		$(STR_DIR)ft_strrchr.c\
		$(STR_DIR)ft_strsplit.c\
		$(STR_DIR)ft_strstr.c\
		$(STR_DIR)ft_strsub.c\
		$(STR_DIR)ft_strtrim.c\
		$(UTIL_DIR)ft_isalnum.c\
		$(UTIL_DIR)ft_isalpha.c\
		$(UTIL_DIR)ft_isascii.c\
		$(UTIL_DIR)ft_isblank.c\
		$(UTIL_DIR)ft_iscntrl.c\
		$(UTIL_DIR)ft_isdigit.c\
		$(UTIL_DIR)ft_islower.c\
		$(UTIL_DIR)ft_isprint.c\
		$(UTIL_DIR)ft_isspace.c\
		$(UTIL_DIR)ft_isupper.c\
		$(UTIL_DIR)ft_tolower.c\
		$(UTIL_DIR)ft_toupper.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
		$(GCC) -c $< -o $@ -I $(INC_DIR)

$(NAME): $(OBJ) $(INC_DIR)libft.h
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
