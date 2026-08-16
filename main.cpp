#include <iostream>

// output full path to file in one line
void search(const char* s) {
  
}

int main(int argc, char *argv[]) {
  if (argc == 1) {
    std::cout << "Help text\n";
    return 0;
  }

  for (int i = 1; i < argc; i++) {
    search(argv[i]);
  }
  return 0;
}
