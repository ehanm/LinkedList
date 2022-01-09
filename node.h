// this is .h file for node

#include <iostream>
#include "Student.h"


using namespace std;

class Node {

public:

  Node* nodepointer;
  Student* studentpointer;
  Student* getStudent();
  Node* getNext();
  void setStudent();
  
  void setNext(Node*);
  Node(Student*);
  ~Node();
  
};
