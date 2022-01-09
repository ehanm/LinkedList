// create node code here
#include <iostream>
#include <cstring>
#include "node.h"
#include "Student.h"

using namespace std;

void Node::setStudent(){
  
  cout << "Enter the student's name: ";
  cin >> studentpointer->name;
  cout << "" << endl;
  cout << "Enter the student's id: ";
  cin >> studentpointer->id;
  cout << "" << endl;
  cout << "Enter the student's gpa: " << endl;
  cin >> studentpointer->gpa;
  
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

