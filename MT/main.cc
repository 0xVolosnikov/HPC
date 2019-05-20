#include <fstream>
#include <iostream>
#include "parallel_mt.hh"
#include "dc.h"
#include <stdlib.h>
#include <string>

int main() {
 using namespace autoreg;
 autoreg::parallel_mt_seq <521> gen(0);
 std::ofstream out;
 char filename[2];
 std::string path;

 for (int i = 0; i < 8; i++)
 {
   path = "out";
   sprintf(filename,"%d",i);
   path += filename;
   out.open(path, std::fstream::out);
   out << gen();
   out.close();
 }
}


