/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:31:33 by tbabou            #+#    #+#             */
/*   Updated: 2024/03/08 16:16:58 by tbabou           ###   ########.fr       */
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

typedef struct s_free
{
	void			*ptr;
	struct s_free	*next;
}					t_free;

typedef struct s_m_free
{
	struct s_free	*list;
}					t_m_free;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# ifndef FD_SIZE
#  define FD_SIZE 10000
# endif

/*Beginning of the part about get_next_line ;*/
char	*ft_dft_strdup(const char *s1);
char	*ft_dft_strjoin(char *s1, char *s2);
char	*ft_cleanup(char *str);
char	*get_next_line(int fd);
/*Ending of the part about get_next_line ;*/
/*Beginning of the part about ft_malloc;*/
void	*ft_malloc(size_t size, t_m_free *m_free);
int		ft_add_malloc(void *ptr, t_m_free *m_free);
void	ft_free(void *ptr, t_m_free *m_free);
void	ft_free_all(t_m_free *m_free);
/*Ending of the part about ft_malloc;*/
/*Beginning of the part about ft_printf;*/
int		ft_printf(const char *format, ...);
int		ft_intlen(int nbr);
int		ft_uintlen(unsigned int nbr);
int		ft_hexalen(uintptr_t ptr);
char	*ft_uitoa(unsigned int n);
int		ft_puthexa(unsigned int num, int isUpper);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_putunbr(unsigned int nb);
int		ft_putptr(unsigned long long ptr);
/*Ending of the part about ft_printf;*/
/*Regular version of some functions;*/
void	*ft_dft_calloc(size_t nmemb, size_t size);
char	*ft_dft_itoa(int n);
char	*ft_dft_substr(char const *s, unsigned int start, size_t len);
/*Regular version of some functions;*/
char	*ft_itoa(int n, t_m_free *m_free);
char	*ft_strdup(const char *s1, t_m_free *m_free);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2, t_m_free *m_free);
char	*ft_substr(char const *s, unsigned int start, size_t len,
			t_m_free *m_free);
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
int		ft_isnewline(char *str);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_putchar_fd(int c, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	*ft_bzero(void *b, size_t len);
void	*ft_calloc(size_t nmemb, size_t size, t_m_free *m_free);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char),
			t_m_free *m_free);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	**ft_split(char const *s, char c);
char	*ft_strtrim(char const *s1, char const *set, t_m_free *m_free);

#endif
