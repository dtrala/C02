/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:22:13 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/14 19:34:40 by dlascaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		if (!((fals >= 'A' && fals <= 'Z') || (fals >= 'a' && fals <= 'z')))
		{
			alph = false;
			break ;
		}
		i++;
	}
	return (alph);
}
