// create node code here
#include <iostream>
#include <cstring>
#include "node.h"
#include "Student.h"

using namespace std;

Node::Node(Student* student){
studentpointer = student;
  nextpointer = NULL;
}

Node::~Node(){
  delete studentpointer;
  nextpointer = NULL;
}

Student* Node::getStudent(){  
  return studentpointer;

}

Node* Node::getNext(){
  // return next node
  return nextpointer;
  
}

void Node::setNext(Node* nextnode){

  nextpointer = nextnode;
  
}

