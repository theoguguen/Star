/*
** EPITECH PROJECT, 2021
** Star
** File description:
** star
*/

#include "my.h"
#include "star.h"

static star_s *init_struc(int nb)
{
    star_s *star = malloc(sizeof(star_s));

    star->first_spaces = nb * 3 - 1;
    star->height = nb * 4 + 1;
    star->line = nb * 2 + 1;
    star->max_length = nb * 6 - 1;
    star->nb = nb;

    return star;
}

star_s *draw_star(star_s *star)
{
    int mid_space = draw_top_branch(star);
    int space = 0;

    space = top_left_branch(star, mid_space);
    bottom_left_branch(star, space);
    draw_bottom_branch(star, mid_space);
    return star;
}


void star(int nb)
{
    star_s *star = init_struc(nb);

    star = draw_star(star);
    free(star);
}