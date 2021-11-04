/*
** EPITECH PROJECT, 2021
** Star
** File description:
** star
*/

#ifndef STAR_H_
#define STAR_H_

#include <stdio.h>

typedef struct star_t {
    int line;
    int first_spaces;
    size_t height;
    int max_length;
    int nb;
}star_s;

star_s *free_tab(star_s *star);

star_s *malloc_star(star_s *star);

int draw_top_branch(star_s *star);

void draw_line(star_s *star, int space);

int top_left_branch(star_s *star, int mid_space);

void bottom_left_branch(star_s *star, int space);

void draw_bottom_branch(star_s *star, int mid_space);

#endif /* !STAR_H_ */
