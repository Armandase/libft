#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_lenint(int n);
char    *ft_negative(int n, char *ret, int nlen);
char    *ft_itoa(int n);
void    *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memset(void *s, int c, size_t n);
int ft_totalen(char const *s, char c);
int ft_wordlen(const char *str, char c, int i);
char    **ft_split(char const *s, char c);
char    *ft_strchr(const char *s, int c);
char    *strdup(const char *s);
int ft_strdoublelen(char const *s1, char const *s2);
char    *ft_strjoin(char const *s1, char const *s2);
size_t  ft_strlcat(char *dest, char *src, size_t    size);
size_t  ft_strlcpy(char *dst, const char *src, size_t   size);
int ft_strlen(char *str);
int strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char  *s1, const char *s2, size_t len);
int ft_check(char *s1, char *s2, int i);
int ft_inset (char const *set, char c);
int ft_begin(char const *s1, char const *set);
int ft_end (char const *s1, char const *set);
char *ft_strtrim(char const *s1, char const *set);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);
void *ft_calloc(size_t nmemb, size_t size);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

typedef struct	s_list
{
	void		*content;
	struct		s_list *next;
}				t_list;

#endif
