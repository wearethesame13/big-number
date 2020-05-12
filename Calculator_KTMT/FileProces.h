#pragma once
#include <fstream>
#include <sstream>
#include"QFloat.h"

#include "QInt.h"
bool WorkWithFileQfloat(string filename, string fileout = "output.txt");
bool WorkWithFileQInt(string filename, string fileout = "output.txt");
string convertLineQFloat(string line);
string convertLineQInt(string line);
string operateLineQInt(string line);
