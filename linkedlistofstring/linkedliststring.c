#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node
{
  char* data;
  struct Node *next;
};


void insert(struct Node** head_ref, char* new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
 
    struct Node *last = *head_ref;  
 

    new_node->data  = new_data;
 
    new_node->next = NULL;
 
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }
 
    while (last->next != NULL)
        last = last->next;
 
    last->next = new_node;
    return;
}
void printList(struct Node *node)
{
  while (node != NULL)
  {
     printf(" %s ", node->data);
     node = node->next;
  }
}
void change(struct Node *head_ref){

    while(head_ref != NULL){

        if(head_ref->data == "BM221"){
            head_ref->data = "Algoritmalar";
        }
        if(head_ref->data == "BM311"){
            head_ref->data = "Bilgisayar Mimarisi";
        }
        if(head_ref->data == "BM496"){
            head_ref->data = "Bilgisayar Projesi 2";
        }
        if(head_ref->data == "BM495"){
            head_ref->data = "Bilgisayar Projesi 1";
        }
        head_ref = head_ref->next;
    }

     
}
int main() {
    clock_t tic = clock();

  printf("\n\n");

  struct Node* head = NULL;

  insert(&head, "BM221");
  insert(&head, "BM311");
  insert(&head, "BM496");
  insert(&head, "BM495");
 
  printf("\n Created Linked list is: ");
  printList(head);
 
  printf("\n Changed Linked list is: ");
  change(head);
  printList(head);
  printf("\n\n");

  clock_t toc = clock();
    printf("Took: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
    printf("\n\n");
 
 return 0;

}


