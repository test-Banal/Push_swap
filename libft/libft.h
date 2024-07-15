/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneumann <aneumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:52:10 by aneumann          #+#    #+#             */
/*   Updated: 2024/07/08 11:20:29 by aneumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}				t_list;

int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strncmp(char const *str1, const char *str2, size_t n);
int		ft_memcmp(void const *s1, void const *s2, size_t n);
long	ft_atoi(char const *ptr);
int		ft_strcmp(char *s1, char *s2);

//size_t	ft_read_file(int fd, char **buffer, char **stash, char **line);
size_t	ft_strlen(char const *c);
size_t	ft_strlcpy(char *dst, char const *src, size_t size);
size_t	ft_strlcat(char *dst, char const *src, size_t size);

char	*ft_get_next_line_gnl(int fd);
char	*ft_read_line_gnl(int fd, char *dst);
char	*ft_strjoin_gnl(char *s, char c);
int		ft_strlen_gnl(char *s);
char	*get_next_line(int fd);
//char	*ft_get_line(char **stash, char **line);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(char const *str, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strdup(char const *s);
char	*ft_strchr(char const *string, int c);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memchr(void const *buf, int value, size_t count);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
void	ft_display_exit(void);

int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(int *));
void	ft_lstclear(t_list **lst, void (*del)(int *));
void	ft_lstiter(t_list *lst, void (*f)(int *));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_add_back(t_list **stack, t_list *stack_new);

t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, int *(*f)(int *), void (*del)(int *));
#endif
