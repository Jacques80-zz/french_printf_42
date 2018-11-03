# include <stdio.h>
# include "includes/libft.h"

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}


static int	is_neg(char c)
{
	if (c == '-')
		return (-1);
	else if (c == '+')
		return (1);
	else
		return (1);
}


void	ft_bzero(void *s, size_t n)
{
	unsigned long i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}


int			ft_atoi(const char *str)
{
	long double		res;
	int				i;
	long int		sign;

	i = 0;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sign = is_neg(str[i]);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))\
	{
		res = res * 10 + (sign * (str[i++] - '0'));
		if (res >= 9223372036854775807)
			return (-1);
		else if (res < -9223372036854775807)
			return (0);
	}
	while (res > 2147483647)
		res = res - 4294967296;
	while (res < -2147483648)
		res = res + 4294967296;
	return ((int)res);
}

static int	ft_pow(unsigned int v, int base)
{
	if (v == 0)
		return (0);
	else
		return (1 + ft_pow(v / base, base));
}

char		*ft_itoa_base(unsigned int value, unsigned int base)
{
	char			*res;
	unsigned int	p;
	int				i;

	i = ft_pow(value, base);
	p = value;
	if (value == 0)
		i = 1;
	if (!(res = ft_strnew(i)) || base < 2 || base > 16)
		return (NULL);
	while (--i >= 0)
	{
		res[i] = (p % base < 10) ? p % base + 48 : p % base - 10 + 'a';
		p = p / base;
	}
	return (res);
}

char	*ft_strnew(size_t size)
{
	char *str;

	if (!(str = (char*)(malloc(sizeof(char) * (size + 1)))))
		return (0);
	ft_bzero(str, (size + 1));
	return (str);
}


int main(int argc, char const *argv[])
{
	char *str;
	if (argc == 2)
		str = ft_itoa_base((unsigned int)ft_atoi(argv[1]), 2);
	printf("%s\n", str);
	return 0;
}

