/*
** EPITECH PROJECT, 2024
** my_radar
** File description:
** Macro for a linked list
*/

#ifndef LIST_H_
    #define LIST_H_

    #define START 1
    #define END 0

typedef struct llist {
    void *data;
    struct llist *next;
} llist_t;

char *free_list(llist_t *list);
void cat_list(llist_t **dest, char *node, int where);
llist_t *create_node(void *entity);

#endif /* LIST_H_ */
