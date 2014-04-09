#include "TodoItem.h"

/* Constructor:
* Has three parameters in the following order and sets those 
* parameters to their corresponding private member variables 
* String for the description 
* Integer for the priority, defaults to 1 
* Boolean for completion status, defaults to false 
*/
// declaration of constructor, initializing 
TodoItem::TodoItem(string description, int priority, bool completed) {
  description_ = description;
  priority_ = priorty;
  completed_ = completed;
}
// Destructor is empty
TodoItem::~TodoItem(){
    
}

string TodoItem::ToFile(string description, int priority, bool completed) {
  stringstream ss;
  string converted_string;
  string scrubbed_string;
  ss << description << '@' << priority << '@' << completed;
  converted_string = ss.str();
  scrubbed_string = Scrub(converted_string);
  return scrubbed_string;  
}

// Mutators:
void TodoItem::SetDescription(string description) {
  description_ = description;
}
void TodoItem::SetPriority(int priority) {
  priority_ = priority;
}
void TodoItem::SetCompleted(bool completed) {
  completed_ = completed;
}

// Accessors:
string TodoItem::GetDescription() const {
  return description_;
}
int TodoItem::GetPriority() const {
  return priority_;
}
bool TodoItem::GetCompleted() const {
  return completed_;
}

// Friend function allows for chaining
ostream& operator << (ostream &out, const TodoItem &amount);//not 'amount' parameter

/*Private member functions:
* ? use .find and .replace from exercise_13.cpp
* takes a string parameter from member function ToFile
* replaces all @ symbols with # symbols in the description
*/
string TodoItem::Scrub(string in_string_w_symbols) {
  replace(in_string_w_symbols.begin(), in_string_w_symbols.end(), '@', '#');
  return in_string_w_symbols;
}
 
