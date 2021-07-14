/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 21:05:31 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/14 21:12:27 by dlascaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;
	bool	alph;
	char	fals;

	i = 0;
	alph = true;
	while (true)
	{
		fals = str(i);
		if (fals == '\0')
		{
			break ;
		}
		if (!(fals >= 'a' && flas <= 'z'))
		{
			alph = false;
			break ;
		}
		i++;
	}
	return (alph);
}
