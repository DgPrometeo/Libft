# <b>Libft</b>
 
> _My first project at 42 Málaga_

<br>

## *This project consists of coding basic C functions, which are then compiled into a library for use in other projects throughout the Cursus.*

<br>
<br>

### Functions from `<ctype.h>` library

* [`ft_isascii`](libft/ft_isascii.c)			- test for ASCII character.
* [`ft_isalnum`](libft/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isalpha`](libft/ft_isalpha.c)			- alphabetic character test.
* [`ft_isdigit`](libft/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isprint`](libft/ft_isprint.c)			- printing character test.
* [`ft_tolower`](libft/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](libft/ft_toupper.c)			- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](libft/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](libft/ft_calloc.c)	- memory allocation.

### Functions from `<string.h>` library

* [`ft_bzero`](libft/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](libft/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](libft/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](libft/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](libft/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](libft/ft_memcpy.c)  	- copy memory area.
* [`ft_strlen`](libft/ft_strlen.c)		- find length of string.
* [`ft_strchr`](libft/ft_strchr.c)		- locate character in string (first occurrence).
* [`ft_strrchr`](libft/ft_strrchr.c)	- locate character in string (last occurence).
* [`ft_strnstr`](libft/ft_strnstr.c)	- locate a substring in a string (size-bounded).
* [`ft_strncmp`](libft/ft_strncmp.c)	- compare strings (size-bounded).
* [`ft_strdup`](libft/ft_strdup.c)		- save a copy of a string (with malloc).
* [`ft_strlcpy`](libft/ft_strlcpy.c)	- size-bounded string copying.


### Non-standard functions

* [`ft_putchar_fd`](libft/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](libft/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](libft/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](libft/ft_putnbr_fd.c)		- output integer to given file.
* [`ft_itoa`](libft/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](libft/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](libft/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](libft/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](libft/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](libft/ft_strmapi.c)			- create new string from modifying string with specified function.


### Linked list functions <b>*(BONUS)*</b>

* [`ft_lstnew`](libft/ft_lstnew_bonus.c)				- create new list.
* [`ft_lstsize`](libft/ft_lstsize_bonus.c)			- count elements of a list.
* [`ft_lstlast`](libft/ft_lstlast_bonus.c)			- find last element of list.
* [`ft_lstadd_back`](libft/ft_lstadd_back_bonus.c)	- add new element at end of list.
* [`ft_lstadd_front`](libft/ft_lstadd_front_bonus.c)	- add new element at beginning of list.
* [`ft_lstdelone`](libft/ft_lstdelone_bonus.c)		- delete element from list.
* [`ft_lstclear`](libft/ft_lstclear_bonus.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](libft/ft_lstiter_bonus.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](libft/ft_lstmap_bonus.c)				- apply function to content of all list's elements into new list.
