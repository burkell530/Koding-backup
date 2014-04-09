#include "TodoUI.h"
// Constructor definition
TodoUI::TodoUI()
  : TodoList = new TodoList; { // variable name?
}
  
// Destructor definition
TodoUI::~TodoUI() {
  delete[] m_todo_list; // variable name?
}

void TodoUI::Menu() {
    
}