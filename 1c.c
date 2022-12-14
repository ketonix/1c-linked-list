#include <stdio.h>
#include <stdlib.h>

/* define link in the list */
struct node {
    int id;
    struct node *next;
};

int main(int argc, char **argv)
{
    struct node *myList = NULL;

    myList = (struct node *) malloc(sizeof(struct node));
    myList->id = 0;
    myList->next = NULL;

    printf("a very short list\n");
    /* show lista */
    for( struct node *nodeP = myList; nodeP != NULL; nodeP = nodeP->next) {
        printf("node [%p], id: %d\n", nodeP,nodeP->id);
    }

    printf("adding 5 more nodes\n");
    /* Add 5 more nodes to the lista */
    for(int i=0; i < 5; i++){
        struct node *newNode = (struct node *) malloc(sizeof(struct node));
        newNode->id = myList->id + 1;
        /* add it first in list */
        newNode->next = myList;
        myList = newNode;
    }

    /* show myList again */
    for( struct node *nodeP = myList; nodeP != NULL; nodeP = nodeP->next) {
        printf("node [%p], id: %d\n", nodeP,nodeP->id);
    }
    return 0;
}