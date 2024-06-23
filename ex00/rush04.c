/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 16:32:28 by julrusse          #+#    #+#             */
/*   Updated: 2024/06/22 19:20:22 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char	c);

void	ft_selectchar(int	x_pos, int y_pos, int largeur, int hauteur)
/*{
	if((x_pos == 1 || x_pos == largeur) && (y_pos == 1 || y_pos == hauteur))
	{
		ft_putchar('A');
	}
	else if((x_pos == 1	|| x_pos == largeur) && (y_pos > 1 && y_pos < hauteur))
	{
		ft_putchar('B');
	}
	else if((x_pos > 1 &&  x_pos < largeur) && (y_pos == 1 || y_pos == hauteur))
	{	
		ft_putchar('B');
	}
	else 
	{
		ft_putchar(' ');
	}
}
*/
{
	if (y_pos == 1)
	{
		if (x_pos == 1)
			ft_putchar('A');
		else if (x_pos == largeur)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (y_pos == hauteur)
	{
		if (x_pos == 1)
			ft_putchar('C');
		else if (x_pos == largeur)
			ft_putchar ('A');
		else
			ft_putchar('B');
	}
	else
	{
		if (x_pos == 1 || x_pos == largeur)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int largeur, int hauteur)
{
	int x_pos;
	int	y_pos;

	y_pos = 1;
	while (y_pos <= hauteur)
	{
		x_pos = 1;
		while (x_pos <= largeur)
		{
			ft_selectchar(x_pos, y_pos, largeur, hauteur);
			x_pos++;
		}
		ft_putchar('\n');
		y_pos++;
	}
}
