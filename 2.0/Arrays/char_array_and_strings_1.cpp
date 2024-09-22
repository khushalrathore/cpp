#include <algorithm>
#include <iostream>
#include <string>
void printAlphabets(const std::string &s) {
  std::cout << "\nAlpha\t:\t";
  for (char c : s) {
    if (isalpha(c)) {
      std::cout << c;
    }
  }
}

void printDigits(const std::string &s) {
  std::cout << "\nDigits\t:\t";
  for (char c : s) {
    if (isdigit(c)) {
      std::cout << c;
    }
  }
  std::cout << "\n";
}

int uppercaseLetters(const std::string &s) {
  int uc_count{};
  for (char c : s) {
    if (isupper(c)) uc_count++;
  }
  return uc_count;
}

int lowercaseLetters(const std::string &s) {
  int lc_count{};
  for (char c : s) {
    if (islower(c)) lc_count++;
  }
  return lc_count;
}

int blankspaces(const std::string &s) {
  int space_count{};
  for (char c : s) {
    if (isblank(c)) space_count++;
  }
  return space_count;
}

int charspaces(const std::string &s) {
  int non_space_count{};
  for (char c : s) {
    if (!isblank(c)) non_space_count++;
  }
  return non_space_count;
}

int main() {
  std::string username =
      "A Quick Brown Fox Jumped Over The Lazy Dog In 3 Seconds.";

  printAlphabets(username);
  printDigits(username);

  std::cout << "size\t:\t" << username.length() << "\n";
  std::cout << "UC\t:\t" << uppercaseLetters(username) << "\n";
  std::cout << "lc\t:\t" << lowercaseLetters(username) << "\n";
  std::cout << "_\t:\t" << blankspaces(username) << "\n";
  std::cout << "chars\t:\t" << charspaces(username) << "\n";

  std::for_each(username.begin(), username.end(),
                [](char &c) { c = std::toupper(c); });

  std::cout << username << "\n";

  return 0;
}
