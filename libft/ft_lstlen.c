/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolf <hwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 21:37:10 by hwolf             #+#    #+#             */
/*   Updated: 2019/09/07 21:53:27 by hwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstlen(const t_list *list)
{
	int		len;

	len = 0;
	if (!list)
		return (0);
	while ((list = list->next))
		len++;
	return (len + 1);
}
