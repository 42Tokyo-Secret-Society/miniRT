/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shading.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashishae <ashishae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 13:42:01 by ashishae          #+#    #+#             */
/*   Updated: 2020/01/17 18:36:08 by ashishae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHADING_H
# define SHADING_H

# include "minirt.h"
# include "color2.h"

typedef struct	s_inter
{
	t_v3		hit_point;
	t_v3		hit_normal;
	t_list		*objects;
	t_object	*closest_object;
	t_ray		sent;
}				t_inter;

t_v3			get_normal(t_v3 point, t_object *object);
t_color2		light_contribution(t_light light, t_inter inter, t_scene scene);
t_color2		shade(t_scene *scene, t_ray sent, t_object *closest_object,
																double t_min);
int				get_color(t_scene *scene, t_ray sent);
t_inter			new_inter(t_v3 hit_point, t_v3 hit_normal,
									t_object *closest_object, t_ray sent);
t_color2		mix_colors(t_light light, double coeff, t_inter inter);
double			spec_coeff(t_light light, t_inter inter);
t_color2		specular(t_light light, t_inter inter);

#endif
