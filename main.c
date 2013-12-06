/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/06 20:05:34 by gpetrov           #+#    #+#             */
/*   Updated: 2013/12/06 20:09:42 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main()
{
	int		fd;
	char	**line;

	fd = open("texte.txt", O_RDONLY);
	get_next_line(fd, line);
	close(fd);
	return (0);
}
