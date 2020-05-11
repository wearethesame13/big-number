#pragma once
#include <fstream>
#include <sstream>
#include"QFloat.h"

#include "QInt.h"
bool WorkWithFileQInt(string filename);
bool WorkWithFileQfloat(string filename);
string convertLineQFloat(string line);
string convertLineQInt(string line);
string operateLineQInt(string line);
