//This is the TodoList.cpp file
#include "TodoList.h"
// Constructor declaration
TodoList::TodoList() {
  Initialize(25);
}

// Destructor
TodoList::~TodoList() {
  FreeList();  
}

// Public member functions
// frees the memory for all TodoItems
//frees the memory for the dynamic TodoItem* array
void TodoList::FreeList() {
  if (m_items_array !=0) {
  delete[] m_items_array;
    m_items_array = 0; 
  } 
}

void TodoList::Initialize(unsigned int in__current_number_of_slots_in_list) {
  m_current_number_of_slots_in_list = in__current_number_of_slots_in_list;
  m_items_array = new string[m_current_number_of_slots_in_list];
}

void TodoList::AddItem(TodoItem* in_item_to_add) {
    /* if there is no space left in the array, then increases the capacity of the item)*/
  // either way, add the item to the array. 
  
  if (m_current_size_of_list == m_current_number_of_slots_in_list) {
    
    m_items_array[m_current_size_of_list++] = new TodoItem;
  } else {
    

  } 
}

void TodoList::DeleteItem(in_location_to_delete) {
    delete m_items_array[in_location_to_delete];
    // Something in here
    m_current_size_of_list--;
  // clear out most of this
  // delete keyword, delete theobject pointed to by the array, shift elements to fill in that index
  // and then decrease the size variable by 1.
  /*
  if (in_location_to_delete < m_current_size_of_list ) {
    m_items_array[m_current_size_of_list] = "";
    --m_current_size_of_list;
    for (unsigned int i = in_location_to_delete; i < m_current_size_of_list; i++) {
      m_items_array[i] = m_items_array[i+1];
    }
  }
}
*/

TodoItem* TodoList::GetItem(in_location_to_retrive_item_from) {
  return TodoItem*    
}

int TodoList::GetSize() {
     
}

int TodoList::GetCapacity() {
    
}

void TodoList::SortArrayByPriority() {
    
}