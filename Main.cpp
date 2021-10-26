#include "Node.h"
#include <iostream>
#include <iomanip>
#include <cstring>


using namespace std;

void add(Node* &head, char first[80], char last[80], int idVal, int gpaVal){
  Node* current = head;
  if(current == NULL){
    Student* temp = new Student(first, last, idVal, gpaVal);
    head = new Node(temp);
  } else{
    while(current->getNext() != NULL){
      current = current->getNext();
    }
    current->setNext(new Node(new Student(first, last, idVal, gpaVal)));
  }
}

void print(Node* next, Node* head){
  if (next == head){
    cout << "list:";
  }if(next != NULL){
    cout << next->getStudent()->getFirst() << " ";
    print(next->getNext(), head);
  }
}

int main(){
  Node* head = NULL;
  add(head, "Kyle", "Zhou", 4, 4.0);
  print(head, head);
  cout << endl;
  add(head, "Varun", "adds", 3, 4.0);
  print(head, head);
  cout << endl;
  add(head, "Third", "Zhou", 4, 4.0);
  print(head, head);
  cout << endl;
  add(head, "Fourth", "adds", 3, 4.0);
  print(head, head);
  cout << endl;
}
