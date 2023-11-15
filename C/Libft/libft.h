#ifndef LIBFT
#define LIBFT

int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_isalnum(char	c);
int		ft_isalpha(char c);
int		ft_isascii(char c);
int		ft_isdigit(char c);
int		ft_isprint(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strdup(char *source);
char	*ft_strjoin(char const *s1, char const *s2);
char	ft_tolower(char c);
char	ft_toupper(char c);

#endif