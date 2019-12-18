/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangle.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashishae <ashishae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 12:43:27 by ashishae          #+#    #+#             */
/*   Updated: 2019/12/17 13:50:59 by ashishae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIANGLE_H
# define TRIANGLE_H
# include "v3.h"
# include "ray.h"

typedef struct s_triangle
{
	t_v3 a;
	t_v3 b;
	t_v3 c;

}				t_triangle;

t_triangle		*new_triangle(t_v3 a, t_v3 b, t_v3 c);
t_v3	get_triangle_normal(t_triangle triangle);
int intersect_triangle(t_ray ray, t_triangle triangle, double *t);

#endif