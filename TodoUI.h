/*
* Lauri Burke
* Lab 4, TodoUI.h
* March 28, 2014
*/

#ifndef TODOUI_H_
#define TODOUI_H_

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class TodoUI {
 public:
  TodoUI(); 
  ~TodoUI();
  void Menu();
  
 private:
  CinReader m_reader;
    
};

#endif /* TODOITEM_H_ */