#pragma once
#include <fstream>
#include <sstream>
#include"QFloat.h"

#include "QInt.h"
void WorkWithFile(string inputPath, string outputPath, string type);
void WorkWithFileQfloat(string filename, string fileout = "output.txt");
void WorkWithFileQInt(string filename, string fileout = "output.txt");
string convertLineQFloat(string line);
string convertLineQInt(string line);
string operateLineQInt(string line);
