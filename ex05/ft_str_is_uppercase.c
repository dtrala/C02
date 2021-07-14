/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 21:16:08 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/14 21:31:23 by dlascaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		i;
	bool	alph;
	char	fals;

	i = 0;
	alph = true;
	while (true)
	{
		fals = str[i];
		if (fals == '\0')
		{
			break ;
		}
		if (!(fals >= 'A' && fals <= 'Z'))
		{
			alph = false;
			break ;
		}
		i++;
	}
	return (alph);
}
