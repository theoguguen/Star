/*
** EPITECH PROJECT, 2021
** Star
** File description:
** draw
*/

#include "my.h"
#include "star.h"

int draw_top_branch(star_s *star)
{
    int column = 0;
    int counter = 0;

    while (counter < star->nb) {
        while (column < star->first_spaces) {
            putchar(' ');
            column++;
        }
        putchar('*');
        if (counter != 0) {
            for (int i = 0; i < (counter * 2 - 1); i++)
                putchar(' ');
            putchar('*');
            }
        putchar('\n');
        column = 0;
        counter++;
        star->first_spaces--;
    }
    draw_line(star, 0);
    draw_line(star, counter * 2 - 3);
    putchar('\n');
    return (counter * 2 - 3);
}

void draw_line(star_s *star, int space)
{
    for (int j = 0; j < space; j++)
        putchar(' ');
    for (int i = 0; i < star->line; i++){
        putchar('*');
    }

}

int top_left_branch(star_s *star, int mid_space)
{
    int column = 0;
    int counter = 1;
    int space = (star->line - 2) * 2 + (mid_space + 1);

    while (counter < star->nb) {
        while (column < counter) {
            putchar(' ');
            column++;
        }
        putchar('*');
        for (int i = 0; i < space - 1; i++)
            putchar(' ');
        putchar('*');
        putchar('\n');
        space -= 2;
        column = 0;
        counter++;
    }
    return space;
}

void bottom_left_branch(star_s *star, int space)
{
    int temp = star->nb;
    int column = 0;
    int counter = 0;

    while (counter < star->nb) {
        while (column < temp) {
            putchar(' ');
            column++;
        }
        putchar('*');
        for (int i = 0; i < space - 1; i++)
            putchar(' ');
        putchar('*');
        putchar('\n');
        column = 0;
        counter++;
        space += 2;
        temp--;
    }
}

void draw_bottom_branch(star_s *star, int mid_space)
{
    int counter = 0;
    int column = 1;

    draw_line(star, 0);
    draw_line(star, mid_space);
    putchar('\n');
    while (counter < star->nb) {
        while (column < star->line) {
            putchar(' ');
            column++;
        }
        putchar('*');
        if (counter < star->nb - 1) {
            for (int i = 0; i < mid_space; i++)
                putchar(' ');
            putchar('*');
        }
        putchar('\n');
        column = 1;
        counter++;
        mid_space -= 2;
        star->line++;
    }
}