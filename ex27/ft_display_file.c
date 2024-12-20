/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pethanna <pethanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 12:52:15 by pethanna          #+#    #+#             */
/*   Updated: 2024/12/20 12:52:15 by pethanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 4096

void	ft_display_file(char *filename)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	ret = read(fd, buf, BUF_SIZE);
	while (ret > 0)
	{
		write(1, &buf, ret);
		ret = read(fd, buf, BUF_SIZE);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_display_file(argv[1]);
	return (0);
}
