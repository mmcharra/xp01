/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   write_file.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:56:10 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/30 17:07:17 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	main()
{
	int fd;

	fd = open("42", O_WRONLY | O_CREAT| O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (1);
	}
	ft_putnbr(fd);
	ft_putchar(fd);
	if (close(f) == -1)
	{
		ft_putstr("close() error");
		return (1);
	}
	return (0);
}