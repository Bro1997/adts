
//Implementing a Stack ADT With a List ADT

#ifndef STACK_H
#define STACK_H


#include "List.h"

class Stack
{
private:
    vector<int>data;
   
   List data;

public:

// No default c'tor needs to be declared 
// the List "knows" how to initialize itself

// No default d'tor needs to be declared 
// the List "knows" how to destroy itself

   int size();

   void Stack::push(int num);

   void pop();

   int top();

   void clear();

};

#endif
