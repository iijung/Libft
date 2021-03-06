/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjungk <minjungk@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 21:53:05 by minjungk          #+#    #+#             */
/*   Updated: 2022/07/10 03:44:46 by minjungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	p = 0;
	while (*s)
	{
		if (*s == (char)c)
			p = s;
		++s;
	}
	if (*s == (char)c)
		p = s;
	return ((char *)p);
}
