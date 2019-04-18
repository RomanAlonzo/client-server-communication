#include <stdio.h>
//<Define an enum called StatusEnus with the enumerations "INVALID", "VALID" and "CONSUMED">

enum StatusEnus{INVALID, VALID, CONSUMED};

//<Define a typedef structure with the enum above and an "int" variable called "data">

typedef struct {
  StatusEnus;
  int data;
  enum StatusEnus status;
}ShmData;
