/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhle <changhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 20:24:30 by changhle          #+#    #+#             */
/*   Updated: 2021/11/23 20:14:57 by changhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
size_t  ft_strlen(const char *s);
int ft_isalnum(int c);
int ft_atoi(const char *str);
void    *ft_calloc(size_t count, size_t size);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void    *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s1);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strrchr(const char *s, int c);
char    *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_isalnum(int c);
char    *ft_strjoin(char const *s1, char const *s2);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int	ft_strncmp(const char* str1, const char* str2, size_t n);

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *n);
int	ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
