/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilipp <gphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:26:45 by gphilipp          #+#    #+#             */
/*   Updated: 2022/01/15 08:36:43 by gphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rendu.h"
#include <unistd.h>

int	main(void)
{
	is_alphabet("abc");
	write(1, "Hello World\n", 12);
	return (0);
}
