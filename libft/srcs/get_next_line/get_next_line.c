/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 08:39:13 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/06 13:36:52 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include "../../includes/get_next_line.h"

static t_gnl	return_new_line(t_fd *target, char *nptr, char **res)
{
	char	*tmp;

	if (nptr)
	{
		*res = ft_strndup(target->content, nptr - (target->content) + 1);
		tmp = ft_strndup(nptr + 1, ft_strlen(nptr + 1));
		if (!*res || !tmp)
			return (GNLERR);
		free(target->content);
		target->content = tmp;
		return (GNLSUC);
	}
	else
	{
		if (target->content && *(target->content) == '\0')
			*res = NULL;
		else
		{
			*res = ft_strndup(target->content, ft_strlen(target->content));
			tmp = ft_strndup("", 0);
			free(target->content);
			target->content = tmp;
		}
		return (GNLEOF);
	}
}

static t_gnl	readfd(t_fd *target, char *buf, char **res)
{
	char		*nptr;
	char		*tmp;
	ssize_t		cc;

	while (1)
	{
		nptr = ft_strchr(target->content, '\n');
		if (nptr)
			break ;
		cc = read(target->value, buf, BUFFER_SIZE);
		if (cc == -1)
			return (GNLERR);
		if (cc == 0)
			break ;
		buf[cc] = '\0';
		tmp = ft_strjoin(target->content, buf);
		if (!tmp)
			return (GNLERR);
		free(target->content);
		target->content = tmp;
	}
	return (return_new_line(target, nptr, res));
}

char	*get_next_line(int fd)
{
	static t_fd		*fdlst;
	t_fd			*target;
	char			*buf;
	char			*res;
	int				status;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	target = setfd(&fdlst, fd);
	if (!target)
		return (NULL);
	buf = (char *)malloc((size_t)BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	res = NULL;
	status = readfd(target, buf, &res);
	free(buf);
	if (status == GNLEOF || status == GNLERR)
		clearfd(&fdlst, target);
	if (status == GNLERR)
		return (NULL);
	return (res);
}
