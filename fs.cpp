#include <iostream>
#include <filesystem>

void help() {
  std::cout << "Help text\n";
}

void search(const char* key) {
  for (auto& i : std::filesystem::recursive_directory_iterator(".")) {
    if (!i.is_regular_file()) {
      continue;
    }
    if (i.path().filename().string().find(key) != std::string::npos) {
      std::cout << std::filesystem::absolute(i.path()).lexically_normal().string() << '\n';
    }
  }
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    help();
  } else {
    search(argv[1]);
  }
  return 0;
}
