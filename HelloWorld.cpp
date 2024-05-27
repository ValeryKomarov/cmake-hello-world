// This is an open source non-commercial project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <Speaker.h>

using namespace std;
using namespace Hello;

int main(int argc, char *argv[]) {
  Speaker* speaker = new Speaker();

  speaker->sayHello();  

  int i = 0;
  i = i++;
}
