// Valdemar Kudzma
// 2022-10-31

```
#include <stdio.h>
#include <stdlib.h>

typedef struct Item {
        float value;
        struct Item *next;
    }Item_type;

    int find(float value, Item_type *head); // done

    void insert(Item_type **head, float value, int pos); // done

    void removeByIndex(Item_type **head, int pos); // done

    int size(Item_type **head); // done

    float findMax(Item_type **head); // done

    float findMin(Item_type **head); // done

    void printList(Item_type *head); // done

    int isEmpty(Item_type *head); // done

    void dodajNaPoczatku(Item_type **head, float value); // done

    void dodajNaKoniec(Item_type **head, float value); // done

    void makeNull(Item_type **head); //done

    int main(void) {

      Item_type *head;
      head = (Item_type *)malloc(sizeof(Item_type));
      head = NULL;

      printList(head);
      dodajNaPoczatku(&head, -3);
      printList(head);
      dodajNaPoczatku(&head,-2);
      printList(head);
      isEmpty(head);
      dodajNaPoczatku(&head,-5);
      printList(head);
      size(&head);
      dodajNaKoniec(&head,-9);
      printList(head);
      find (-5, head);
      find (-6, head);
      find (-3, head);
      printList(head);
      insert(&head, -8, 2);
      printList(head);
      insert(&head, -4, 10);
      printList(head);
      removeByIndex(&head, 0);
      printList(head);
      removeByIndex(&head, 3);
      printList(head);
      removeByIndex(&head, 10);
      printList(head);
      findMax(&head);
      findMin(&head);
      size(&head);
      isEmpty(head);
      makeNull(&head);
      isEmpty(head);
      printList(head);
      
    return 0;
      
    }
    int find(float value, Item_type *head){
      Item_type* current = head;
      int licznik = 0;
      while (current != NULL){
        if (current->value == value){
          printf("Wartosc %f znachodzi sie na pozycji: %d\n", value, licznik);
          return licznik;
        }
        current = current->next;
        licznik++;
      }
      printf("Wartosci %f niema na liscie\n", value);
      return -1;
    }

    void insert(Item_type **head, float value, int pos){
      int sizeofHead = size(head);
      if (pos == 0){
        dodajNaPoczatku(head, value);
      }
      else if(pos == sizeofHead){
        dodajNaKoniec(head, value);
      }
      else if(pos > sizeofHead){
        printf("Pozycja %d jest poza lista, podaj poprawna pozycje\n", pos);
      }  
      else{
        Item_type* current = *head;
        Item_type* temp;
        
        int i = 0;
        while (current->next != NULL && i < pos - 1){
          current = current->next;
          i++;
        }
        temp = current->next;
        current->next = (Item_type*)malloc(sizeof(Item_type));
        current->next->value = value;
        current->next->next = temp;
      }
    }

    void removeByIndex(Item_type **head, int pos){
      if (pos == 0) {
        Item_type* temp = NULL;

        if (*head != NULL){
          temp = (*head)->next;
          free(*head);
          *head = temp;
        }
      }
      else if(pos > size(head)){
        printf("Pozycja dla usuniecia %d jest poza rozmiarem listy\n", pos);        
      }
      else{
        Item_type* current = *head;
        Item_type* tmp;
        
        int i = 0;
          while (current->next != NULL && i < pos - 1){
            current = current->next;
            i++;
          }
        tmp = current->next;
        current->next = tmp->next;
        free(tmp);
      }
    }

    int size(Item_type **head){
      int licznik = 0;
      if (head == NULL)
        printf("Ilosc elementow w liscie: %d\n\n", licznik);
      else{
        Item_type *current = *head;
          do {
            licznik++;
            current = current->next;
          } while (current != NULL);
        printf("Ilosc elementow w liscie: %d\n\n", licznik);
      }
      return licznik;
    }

    float findMax(Item_type **head){
      Item_type* current;
      current = *head;
      float max = current->value;

      while (current != NULL){
        if (current->value > max){
        max = current->value;
        }
      
      current = current->next;
      }
      printf("Wartosc maksymalna w liscie: %f\n", max);
      return max;
    }

    float findMin(Item_type **head){
      Item_type* current;
      current = *head;
      float min = current->value;
      
        while (current != NULL){
          if (current->value < min){
            min = current->value;
          }
      
      current = current->next;
      }
      printf("Wartosc minimalna w liscie: %f\n", min);
      return min;
    }

    void printList(Item_type *head){
      printf("\nPoczatek funkcji printList\n");
      if (head==NULL)
      {
        printf("Lista jest pusta\n");
      }
      else
      {
        Item_type *current = head;
          do {
            printf("Wartosc: %f\n", current->value);
            current = current -> next;
          } while (current != NULL); 
      }
      printf("Koniec funkcji printList\n\n");
    }
    
    int isEmpty(Item_type *head){
      if (head == NULL){
        printf("Lista jest pusta\n\n");
        return 1;
      }
      else
      {
        printf("Lista nie jest pusta\n\n");
        return 0;
      }
    }

    void dodajNaPoczatku(Item_type **head, float value){
      Item_type *current;
      current = (Item_type*)malloc(sizeof(Item_type));
      current->value = value;
      current->next = *head;
      *head = current;
      }

    void dodajNaKoniec(Item_type **head, float value){
      if (*head == NULL)
      {
        *head = (Item_type*)malloc(sizeof(Item_type));
        (*head)->value = value;
        (*head)->next = NULL;
      } 
      else
      {
        Item_type *current = *head;
        while (current->next != NULL){
          current = current -> next;
        }
        current->next = (Item_type*)malloc(sizeof(Item_type));
        current->next->value = value;
        current->next->next = NULL;
      }
    }

    void makeNull(Item_type **head){
      Item_type* temp = NULL;
      while (*head!=NULL){
        temp = (*head) -> next;
        free(*head);
        *head = temp;
      }
    }


```
