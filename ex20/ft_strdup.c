/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pethanna <pethanna@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:28:10 by pethanna          #+#    #+#             */
/*   Updated: 2024/12/18 13:29:17 by pethanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *s)
{
	size_t	length;
	char	*dup;
	size_t	i;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	dup = (char *)malloc((length + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < length)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
