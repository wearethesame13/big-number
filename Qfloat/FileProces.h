#pragma once
#include <fstream>
#include <sstream>
#include"QFloat.h"

#include "QInt.h"
void WorkWithFileQInt(string filename);
void WorkWithFileQfloat(string filename);
string convertLineQFloat(string line);
string convertLineQInt(string line);
string operateLineQInt(string line);
