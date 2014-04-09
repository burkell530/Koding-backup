/*
* Lauri Burke
* Lab 4, TodoItem.h
* March 28, 2014
*/

#ifndef TODOITEM_H_
#define TODOITEM_H_

#include <string>
#include <sstream>
#include <algorithm>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using::ostream;
using::stringstream;

class TodoItem;
ostream& operator << (ostream &out, const TodoItem &amount);
// class definition:
class TodoItem {
public:
// Destructor
~TodoItem();

  // constructor:
  TodoItem (string description, int priority = 1, bool completed = false); 
  
  // Public member functions:
  string ToFile(string description, int priority, bool completed);
  
  // Mutators:
  void SetDescription(string description);
  void SetPriority(int priority);
  void SetCompleted(bool completed);
  
  // Accessors:
  string GetDescription() const;
  int GetPriority() const;
  bool GetCompleted() const;
  
  // Friend functions:
  friend ostream& operator << (ostream &out, const TodoItem &amount);
  
private:
  // Private member functions:
  string Scrub(string in_string_w_symbols);
  
  // Private member varables:
  string description_;
  int priority_;
  bool completed_;
};

#endif /* TODOITEM_H_ */