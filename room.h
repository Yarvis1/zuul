#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <room.cpp>
#include <main.cpp>
class room{
 private:
  int roomId;
  char name[25];
  char description[150];
 public:
  room(int roomId==0, const char roomName= "". const char*roomDescription="");
  //setters
  void setDescription();
  void setName();
  void setId();
  //getters
  char getDescription() const;
  char getName() const;
  char getId() const;

  void display() const;
  }
}
