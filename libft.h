/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 09:56:23 by danielga          #+#    #+#             */
/*   Updated: 2022/12/20 18:23:26 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**								ATOI
 * @brief	Converts the initial portion of the string pointed to by str 
 * to int representation.
 * 
 * @param str String.
 * 
 * @return Localized integer.
 **/
int		ft_atoi(const char *str);

/**								BZERO
 * @brief	Writes "n" zeroed bytes to the string "s".
 * 
 * @param s String.
 * @param n Number of bytes.
 * 
 * @return Nothing.
 **/
void	ft_bzero(void *s, size_t n);

/**								CALLOC
 * @brief Allocates memory for an array of "count". 
 * The allocated memory is filled with bytes of value zero.
 * 
 * @param count Number of elements.
 * @param size Size of each element.
 * 
 * @return Pointer to the allocated memory.
 **/
void	*ft_calloc(size_t count, size_t size);

/**								ISALNUM
 * @brief	Check that it is alphanumeric.
 * 
 * @param c Character to be checked.
 * 
 * @return True if the character is alphanumeric.
 * @return False if the character is not alphanumeric.
 **/
int		ft_isalnum(int c);

/**								ISALPHA
 * @brief	Check that it is alphabetical.
 * 
 * @param c Character to be checked.
 * 
 * @return True if the character is alphabetic.
 * @return False if the character is not alphabetic.
 **/
int		ft_isalpha(int c);

/**								ISASCII
 * @brief	Check that it is in ASCII.
 * 
 * @param c Character to be checked.
 * 
 * @return True if the character is encoded in ascii.
 * @return False if the character is not encoded in ascii.
 **/
int		ft_isascii(int c);

/**								ISDIGIT
 * @brief	Check if it is a digit.
 * 
 * @param c Character to be checked.
 * 
 * @return True if the character is digit.
 * @return False if the character is not digit.
 **/
int		ft_isdigit(int c);

/**								ISPRINT
 * @brief	Check that it is printable.
 * 
 * @param c Character to be checked.
 * 
 * @return True if the character is printable.
 * @return False if the character is not printable.
 **/
int		ft_isprint(int c);

/** 							ITOA
 * @brief Using malloc(3), generate a string representing the integer value
 * received as argument. Negative numbers have to be handled.
 * 
 * @param n  the integer to be converted.
 * 
 * @return The string representing the number.
 * @return NULL if the memory reservation fails.
**/
char	*ft_itoa(int n);

/**								MEMCHR
 * @brief Function scans the initial n bytes of the memory area pointed to by s 
 * for the first instance of c. Both c and the bytes of the memory area pointed
 * to by s are interpreted as unsigned char.
 * 
 * @param s The memory area pointed.
 * @param c The element to search for in the function.
 * @param n Area to be scanned.
 * 
 * @return A pointer to the matching byte or NULL if the character does 
 * not occur in the given memory area.
 **/
void	*ft_memchr(const void *s, int c, size_t n);

/**								MEMCMP
 * @brief Compares the first n bytes (each interpreted as unsigned char) of 
 * the memory areas s1 and s2.
 * 
 * @param s1 	First memory.
 * @param s2 	Second memory.
 * @param n 	Number of bytes to check.
 * 
 * @return If the first "n" bytes of s1 are different from s2, it will give a 
 * subtraction of both.
 * @return If n is zero, the return value is zero.
 **/
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**								MEMCPY
 * @brief Copies n bytes from memory area src to memory area dest.
 * 
 * @param dst 	Destination memory.
 * @param src 	Source memory.
 * @param n 	Number of bytes to copy.
 * 
 * @return A pointer to dest.
 * @return If not have dst and src, return zero.
 **/
void	*ft_memcpy(void *dst, const void *src, size_t n);

/**								MEMMOVE
 * @brief copy len bytes from memory area src to memory area dest. The memory 
 * areas may overlap: copying takes place as though the bytes in src are first
 * copied into a array that does not overlap src or dest, and the 
 * bytes are then copied from the array to dest.
 * 
 * @param dst 	Destination memory.
 * @param src 	Source memory.
 * @param n 	Number of bytes to copy.
 * 
 * @return A pointer to dest.
 * @return If not have dst and src, return zero.
 **/
void	*ft_memmove(void *dst, const void *src, size_t len);

/**								MEMSET
 * @brief fills the first len bytes of the memory area pointed to by "b" with 
 * the byte "c".
 * 
 * @param b 	Destination memory.
 * @param c 	Character copied.
 * @param len 	Number of bytes to copy.
 * 
 * @return A pointer to the memory area "b".
 **/
void	*ft_memset(void *b, int c, size_t len);

/**								PUTCHAR_FD
 * @brief	Sends the character to the specified file descriptor.
 * 
 * @param c The character to send.
 * @param fd The file descriptor to write to.
 * 
 * @return Nothing.
 **/
void	ft_putchar_fd(char c, int fd);

/**								PUTENDL_FD
 * @brief	Sends the string to the specified file descriptor, followed 
 * by a line break.
 * 
 * @param s The string to send.
 * @param fd The file descriptor to write to.
 * 
 * @return Nothing.
 **/
void	ft_putendl_fd(char *s, int fd);

/**								PUTNBR_FD
 * @brief	Sends the number to the specified file descriptor.
 * 
 * @param n The number to send.
 * @param fd The file descriptor to write to.
 * 
 * @return Nothing.
 **/
void	ft_putnbr_fd(int n, int fd);

/**								PUTSTR_FD
 * @brief	Sends the string to the specified file descriptor.
 * 
 * @param s The string to send.
 * @param fd The file descriptor to write to.
 * 
 * @return Nothing.
 **/
void	ft_putstr_fd(char *s, int fd);

/**								SPLIT
 * @brief reserves an array of strings resulting from separating the string 's'
 * into substrings using the character 'c' as delimiter.
 * 
 * @param s	The string to separate.
 * @param c	The delimiting character.
 * 
 * @return	The array of new strings resulting from the separation.
 * @return	If the memory backup fails, it is null.
 **/
char	**ft_split(char const *s, char c);

/**								STRCHR
 * @brief Locates the character c in the string s.
 * 
 * @param s 	String.
 * @param c 	The character to locate.
 * 
 * @return A pointer to the first occurrence of the character c in the string s.
 **/
char	*ft_strchr(const char *s, int c);

/**								STRDUP
 * @brief 	Allocates sufficient memory for a copy of the string s1
 * 
 * @param s1	String to be copied.
 * 
 * @return		A pointer to string.
 * **/
char	*ft_strdup(const char *s1);

/** 							STRITERI
 * @brief To each character of the string 's', apply the function 'f' 
 * giving as parameters the index of each character within 's' and the 
 * address of the character itself, which can be changed if necessary.
 * 
 * @param s	The string to iterate.
 * @param f	The function to be applied to each character.
 * 
 * @return Nothing.
**/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**								STRJOIN
 * @brief 	Saves and returns a new string, formed by the concatenation 
 * of 's1' and 's2'.
 * 
 * @param s1	First string.
 * @param s2	The string to add followed by s1
 * 
 * @return		A new string with s1 and s2.
 * @return		If the memory backup fails, it is null.
**/
char	*ft_strjoin(char const *s1, char const *s2);

/**								STRLCAT
 * @brief Concatenates strings with the same parameters up to size.	
 * 
 * @param dst	Destination string.
 * @param src	Source string.
 * @param size	Size covered.
 * 
 * @return	The total length of the string they tried to create.
**/
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/**								STRLCPY
 * @brief Copy strings with the same parameters up to dst size.	
 * 
 * @param dst		Destination string.
 * @param src		Source string.
 * @param dstsize	Size covered.
 * 
 * @return			The length of src.
**/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**								STRLEN
 * @brief	Returns the dimension of a string.
 * 
 * @param s The string.
 * 
 * @return the number of characters that precede the terminating NULL character.
 **/
size_t	ft_strlen(const char *s);

/** 							STRMAPI
 * @brief To each character of the string 's', apply the function 'f' 
 * giving as parameters the index of each character within 's' and the 
 * character itself. generates a new string with the result of the 
 * successive use of 'f'.
 * 
 * @param s	The string to iterate.
 * @param f	The function to be applied to each character.
 * 
 * @return The string created after the correct use of 'f' on each character.
 * @return NULL if the memory reservation fails.
**/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**								STRNCMP
 * @brief Compares the strings up to "n" and returns the comparison of both 
 * strings.		
 * 
 * @param s1	First string.
 * @param s2	Second string.
 * @param n		maximum distance checked.
 * 
 * @return	If the first "n" bytes of s1 are different from s2, it will give a 
 * subtraction of both.
 * @return If n is zero, the return value is zero.
**/
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**								STRNSTR
 * @brief Search for the first occurrence of the string neddle in the string 
 * haystack up to len.
 * 
 * @param haystack	string from which to create the substring.
 * @param needle	the index of the character "s" from which the substring starts.
 * @param len		maximum substring length.
 * 
 * @return	If the needle is empty it returns haystack.
 * @return	If haystack is empty or not found needle, returns NULL.
 * @return	A pointer to the first character of the first occurrence.
**/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**								STRRCHR
 * @brief Locates the character c in the string s starting from the end.
 * 
 * @param s 	String.
 * @param c 	The character to locate.
 * 
 * @return A pointer to the last occurrence of the character c in the string s.
 **/
char	*ft_strrchr(const char *s, int c);

/**								STRTRIM
 * @brief 	Deletes all characters in the string 'set' from the beginning 
 * and from the end of 's1', until a character not belonging to 'set' is found.
 * 
 * @param s1	The string to be cut.
 * @param set	The characters to be removed from the string.
 * 
 * @return		The string with a malloc reservation
 * @return		If the memory backup fails, it is null.
**/
char	*ft_strtrim(char const *s1, char const *set);

/**								SUBSTR
 * @brief		Reserves and returns a substring of the string. starts with 
 * "start" and of size len.
 * 
 * @param s		string from which to create the substring.
 * @param start	the index of the character "s" from which the substring starts.
 * @param len	maximum substring length.
 * 
 * @return		The substring or null if the memory reservation fails.
**/
char	*ft_substr(char const *s, unsigned int start, size_t len);

//
/**								TOLOWER
 * @brief	Transforms uppercase characters to lowercase.
 * 
 * @param c Character to be transform.
 * 
 * @return the character passed to lower case.
 **/
int		ft_tolower(int c);

/**								TOUPPER
 * @brief	Transforms uppercase characters to uppercase.
 * 
 * @param c Character to be transform.
 * 
 * @return the character passed to upper case.
 **/
int		ft_toupper(int c);

#endif
