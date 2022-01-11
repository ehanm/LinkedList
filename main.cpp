#include <iostream>
#include <cstring>
#include "node.h"
#include "Student.h"

using namespace std;

int main(){
  
  Student* firststudent = new Student();
  Student* checknextstudent = new Student();

  cout << "Student pointers can be created!" << endl;

  Node* first = new Node(firststudent);
  Node* checknextnode = new Node(checknextstudent);

  cout << "Nodes can be initialized!" << endl;

  first->setNext(checknextnode);
  cout << "Next nodes can be set!" << endl;
  first->getNext();
  cout << "Next node pointer can be obtained!" << endl;
  first->getStudent();
  cout << "Studentpointer can be obtained!" << endl;

  first->~Node();
  checknextnode->~Node();

  cout << "Nodes can be deleted!" << endl;
  
  return 0;
}

