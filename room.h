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
  void setDescription();
  void setName();
  void setId();

  char getDescription() const;
  char getName() const;
  char getId() const;
  
  }
}
