/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:54:36 by aboudoun          #+#    #+#             */
/*   Updated: 2022/04/08 23:46:41 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap_bonus.h"

void	exit_error(t_stack *a, t_stack *b)
{
	write (2, "error\n", 6);
	if (a->array)
		free(a->array);
	if (b->array)
		free(b->array);
	exit (1);
}
