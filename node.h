// this is .h file for node

#include <iostream>

using namespace std;

class Node {

 public:

  int value;
  
  Node* nodepointer;
  Student* getStudent();
  Node* getNext();

  void setNext(Node*);
  Node(Student*);
  ~Node();
  
  
}
