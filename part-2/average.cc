// Konner Rigby
// rigbykonner@csu.fullerton.edu
// @slimkonrad7
// Partners: @AntonioCSUF
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  double sum{0.0};
  double avg{0.0};
  int count{0};
  bool first = true;
  for (const std::string& arg : arguments) {
    if (first == true) {
      first = false;
    } else {
      sum += std::stod(arg);
      count++;
    }
  }
  avg = sum / count;
  std::cout << "average = " << avg << "\n";
  return 0;
}
