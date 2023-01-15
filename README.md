# <b>Libft</b>
 
> _My first project at 42 Málaga_

<br>

## *This project consists of coding basic C functions, which are then compiled into a library for use in other projects throughout the Cursus.*

<br>
<br>

### Elements for <b>compiling</b> functions

* [`libft.h`](libft/libft.h)			- Header with all functions.
* [`Makefile`](libft/Makefile)			- Element to compile and create the library


### Functions from `<ctype.h>` library

* [`ft_isalnum`](libft/ft_isalnum.c)			- Alphanumeric character check.
* [`ft_isalpha`](libft/ft_isalpha.c)			- Alphabetic character check.
* [`ft_isascii`](libft/ft_isascii.c)			- Check that it is in ASCII character.
* [`ft_isdigit`](libft/ft_isdigit.c)			- Decimal-digit character check.
* [`ft_isprint`](libft/ft_isprint.c)			- Printing character check.
* [`ft_tolower`](libft/ft_tolower.c)			- Upper case to lower case letter conversion.
* [`ft_toupper`](libft/ft_toupper.c)			- Lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](libft/ft_atoi.c)		- Convert ASCII string to integer.
* [`ft_calloc`](libft/ft_calloc.c)	- Allocates memory with bytes of value zero.

### Functions from `<string.h>` library

* [`ft_bzero`](libft/ft_bzero.c)		- Write zeroes to a string.
* [`ft_memchr`](libft/ft_memchr.c)		- Locate byte specific in byte string.
* [`ft_memcmp`](libft/ft_memcmp.c)		- Compare bytes in two strings.
* [`ft_memcpy`](libft/ft_memcpy.c)  	- Copy bytes in memory area to other memory area.
* [`ft_memmove`](libft/ft_memmove.c)	- Copy byte string.
* [`ft_memset`](libft/ft_memset.c)		- Write a byte in specific elements into a string.
* [`ft_strchr`](libft/ft_strchr.c)		- Locate character specific in string (first occurrence).
* [`ft_strdup`](libft/ft_strdup.c)		- Allocate sufficient memory for a copy of a string (with malloc).
* [`ft_strncmp`](libft/ft_strncmp.c)	- Compare strings and return the comparison.
* [`ft_strnstr`](libft/ft_strnstr.c)	- Search for the first occurrence of a substring in a string.
* [`ft_strlcat`](libft/ft_strlcat.c)	- Concatenates strings with the same parameters.
* [`ft_strlcpy`](libft/ft_strlcpy.c)	- Copy strings with the same parameters.
* [`ft_strlen`](libft/ft_strlen.c)		- Find length of string.
* [`ft_strrchr`](libft/ft_strrchr.c)	- Locate character specific in string (last occurence).

### Non-standard functions

* [`ft_itoa`](libft/ft_itoa.c)					- Convert integer to ASCII string.
* [`ft_putchar_fd`](libft/ft_putchar_fd.c)		- Output a character to given file.
* [`ft_putendl_fd`](libft/ft_putendl_fd.c)		- Send string to given file with newline.
* [`ft_putnbr_fd`](libft/ft_putnbr_fd.c)		- Output integer to given file.
* [`ft_putstr_fd`](libft/ft_putstr_fd.c)		- Output string to given file.
* [`ft_split`](libft/ft_split.c)				- Reserve an array of strings, with specified character as delimiter.
* [`ft_striteri`](libft/ft_striteri.c)			- Apply a function of each character.
* [`ft_strjoin`](libft/ft_strjoin.c)			- Concatenate two strings into a new string (with malloc).
* [`ft_strmapi`](libft/ft_strmapi.c)			- Create new string from modifying string with specified function.
* [`ft_strtrim`](libft/ft_strtrim.c)			- Deletes all character in a string beginning and end of string with the specified characters.
* [`ft_substr`](libft/ft_substr.c)  			- Reserve and returns a substring from string.

### Linked list functions <b>*(BONUS)*</b>

* [`ft_lstnew`](libft/ft_lstnew_bonus.c)			- Create new list.
* [`ft_lstsize`](libft/ft_lstsize_bonus.c)			- Count elements of a list.
* [`ft_lstlast`](libft/ft_lstlast_bonus.c)			- Find the last element of list.
* [`ft_lstadd_back`](libft/ft_lstadd_back_bonus.c)	- Add new element at end of list.
* [`ft_lstadd_front`](libft/ft_lstadd_front_bonus.c)	- Add new element at beginning of list.
* [`ft_lstdelone`](libft/ft_lstdelone_bonus.c)		- Delete element from list and free memory.
* [`ft_lstclear`](libft/ft_lstclear_bonus.c)			- Delete sequence of elements of list from a starting point, and free memory.
* [`ft_lstiter`](libft/ft_lstiter_bonus.c)			- Apply function to content of all list's elements.
* [`ft_lstmap`](libft/ft_lstmap_bonus.c)				- Apply function to content of all list's elements into a new list.
