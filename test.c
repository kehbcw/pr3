//kerry houlihan
//test.c

#include<stdlib.h>
#include<stdio.h>
#include "list.h"

int main(int argc, char **argv){

Node * head = NULL;
Node * tail = NULL;
int choice;
int value;

do{

  choice = menu();
  
  switch(choice){
   case 1:
     printf("Enter a value for the node\n");
     scanf("%d", &value);
     head = List_insert(head, value);
     break;
   case 2:
     printf("Enter a value for the tail node\n");
     scanf("%d", &value);
     tail = List_insert_last(head, value);
     break;
   case 3:
     printf("Enter the value of the node you want to delete\n");
     scanf("%d", &value);
     tail = List_delete(head, value);
     break;
   case 4:
     printf("Deleting the linked list\n");
     head = List_destroy(head);
     break;
   case 5:
     printf("Displaying the linked list\n");
     List_print(head);
     break;
   case 6:
     printf("Exiting\n");
     break;
}
}while(choice !=6);

free(head);
return 0;
}

int menu(){

int choice;

printf("1. Insert head\n");
printf("2. Insert tail\n");
printf("3. Delete a node\n");
printf("4. Delete all\n");
printf("5. Display\n");
printf("6. Exit\n");
printf("Please enter the integer value associated with the menu option\n");

scanf("%d", &choice);

while(choice < 1 || choice > 6){
  printf("Invalid choice. Please enter again.");
  scanf("%d", &choice);
}

return choice;
}




