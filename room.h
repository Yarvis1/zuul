#include <iostream>
#include <cstring>
#include <vector>
#include <map>
class room{
 private:
  int roomId;
  char name[150];
  char description[150];
 public:
  //constructor
  //room(int num, char N, char D);
  //setters
  void setDescription(char);
  void setName(char);
  void setId(int);
  //getters
  char getDescription();
  char getName();
  char getId();
};

