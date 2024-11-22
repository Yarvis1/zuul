#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include "room.h"
//setting
//room::room(int num,char N,char D){
//roomId = num;
//name=N;
//description=D;
//}
void room:: setDescription(char input){
  description = input;
}

void room:: setName(char input){
  name = input;
}
void room:: setId(int input){
  roomId = input;
}
//getting
char room::getId(){
  return roomId;
}

char room::getName(){
  return name;
}

int room::getDescription(){
  return description;
}
