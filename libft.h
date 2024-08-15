/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:31:33 by tbabou            #+#    #+#             */
/*   Updated: 2024/07/21 20:09:28 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <fcntl.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4200
# endif

# ifndef FD_SIZE
#  define FD_SIZE 10000
# endif

// Default functions of the libft
char	*ft_itoa(int n);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isspace(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_intlen(int nbr);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_putchar_fd(int c, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	*ft_bzero(void *b, size_t len);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	**ft_split(char const *s, char c);
char	*ft_strtrim(char const *s1, char const *set);

// Bonus functions of the libft
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));

// Functions of the printf
int		ft_printf(const char *format, ...);
int		ft_intlen(int nbr);
int		ft_uintlen(unsigned int nbr);
int		ft_hexalen(uintptr_t ptr);
char	*ft_uitoa(unsigned int n);
int		ft_puthexa(unsigned int num, int isUpper);
int		ft_putstr(char *str);
int		ft_putchar_printf(int c, int fd);
int		ft_putnbr(int nb);
int		ft_putunbr(unsigned int nb);
int		ft_putptr(unsigned long long ptr);

// Functions of the get_next_line
int		isnewline(char *str);
char	*ft_cleanup(char *str);
char	*get_next_line(int fd);

// Other functions
char	*ft_addchar(char *s1, char s2);
void	ft_freesplit(char **split);

// Colors

# define BLACK "\e[0;30m"
# define RED "\e[0;31m"
# define GREEN "\e[0;32m"
# define YELLOW "\e[0;33m"
# define BLUE "\e[0;34m"
# define MAGENTA "\e[0;35m"
# define CYAN "\e[0;36m"
# define WHITE "\e[0;37m"

# define BLACKBG "\e[0;100m"
# define REDBG "\e[0;101m"
# define GREENNBG "\e[0;102m"
# define YELLOWBG "\e[0;103m"
# define BLUEBG "\e[0;104m"
# define MAGENTABG "\e[0;105m"
# define CYANBG "\e[0;106m"
# define WHITEBG "\e[0;107m"

# define RESET "\e[0m"

#endif
