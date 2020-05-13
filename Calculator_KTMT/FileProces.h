#pragma once
#include <fstream>
#include <sstream>
#include"QFloat.h"

#include "QInt.h"
bool WorkWithFile(string inputPath, string outputPath, string type);
bool WorkWithFileQfloat(string filename, string fileout);
bool WorkWithFileQInt(string filename, string fileout);
string convertLineQFloat(string line);
string convertLineQInt(string line);
string operateLineQInt(string line);
