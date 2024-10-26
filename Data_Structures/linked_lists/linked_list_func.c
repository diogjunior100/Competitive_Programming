#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

void print_linked(struct Node *le){
    if (le != NULL){
        printf("%d", le->data);
        imprime(le->next);
    }
}

void insert(int x, celula *p){
    celula *new;
    new = (celula *)malloc(sizeof(celula));
    new->data = x;
    new->next = p->next;
    p->next = new
}

int main(){

    typedef struct Node celula;
    celula d;
    celula *p;

    insert(5, celula);


    return 0;
}