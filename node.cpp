// create node code here
#include <iostream>
#include <cstring>
#include "node.h"
#include "Student.h"

using namespace std;

Student* Node::setStudent(){

  cout << "Enter the student's name: ";
  cin >> name;
  cout << "" << endl;
  cin >> id;
  cin >> gpa;
  
}

Student* Node::getStudent(){  

  return studentpointer;

}

Node* Node::getNext(){
  // return next node
  return nodepointer;
  
}

void Node::setNext(Node* nextnode){

  nodepointer = nextnode;
  
}

