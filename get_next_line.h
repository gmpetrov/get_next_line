/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/05 19:44:56 by gpetrov           #+#    #+#             */
/*   Updated: 2013/12/06 20:21:17 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 100
# include <unistd.h>
# include <sys/types.h>
# include <unistd.h>
# include <libft.h>
# include <fcntl.h>

int		get_next_line(int const fd, char ** line);

#endif
