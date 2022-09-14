#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_len(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*buffer;

	i = 0;
	len = ft_len(src);
	buffer = malloc((len + 1) * sizeof(char));
	if (!buffer)
	{
		return (0);
	}
	while (src[i])
	{
		buffer[i] = src[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*buffer;
	int			i;

	buffer = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!buffer)
		return (0);
	i = 0;
	while (i < ac)
	{
		buffer[i].size = ft_len(av[i]);
		buffer[i].str = av[i];
		buffer[i].copy = ft_strdup(av[i]);
		i++;
	}
	buffer[i].str = 0;
	return (buffer);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i++], 1);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(48 + nb);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}

int main(int argc, char **argv)
{
    ft_show_tab(ft_strs_to_tab(argc, argv));
}