#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <room.h>
//setting
room::room(int roomId,const char* roomName, const char* roomDescription){
  strncpy(name,roomName,sizeof(name)-1);
  name[sizeof(name)-1]='\0';
  strncpy(description,roomDescription.sizeof(description)-1);
  description[sizeoof(description
}
void room:: setDescription(const char* roomDescription){
  description = input;
}

void room:: setName(const char* roomName){
  name = input;
}
void room:: setId(int roomId){
  roomId = input;
}
//getting
void room::getId() const{
  return roomId;
}

void room::getName() const{
  return name;
}

void room::getDescription() const{
  return description[150]
}
void room::display() const{

}
