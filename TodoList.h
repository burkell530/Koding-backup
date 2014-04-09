/*
* Lauri Burke
* Lab 4, TodoList.h
* March 28, 2014
*/

#ifndef TODOLIST_H_
#define TODOLIST_H_
#include "TodoItem.h"
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

class TodoList {
 public:
  // Constructor declaration
  TodoList();
  // Destructor
  ~TodoList();
  // Public member functions
  void FreeList();
  void Initialize(unsigned int in__current_number_of_slots_in_list);
  void AddItem(TodoItem* in_item_to_add);
  void DeleteItem(in_location_to_delete);
  TodoItem* GetItem(in_location_to_retrive_item_from);
  unsigned int GetSize(in_current_size_of_list);
  unsigned int GetCapacity(in_current_number_of_slots_in_list);
  void SortArrayByPriority();
  
  
 private:
  void IncreaseCapacity();// private member function 1
  void ShiftElements(unsigned int empty_space_to_fill);
  TodoItem**; // this pointer points to an array of pointers to dynamic objects 
  unsigned int m_current_number_of_slots_in_list;
  unsigned int m_current_size_of_list;
};

#endif /* TODOLIST_H_ */