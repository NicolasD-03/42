#include "ft_stock_str.h"
#include "../ex04/ft_strs_to_tab.c"
#include "ft_show_tab.c"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_str *par);

int	main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
}