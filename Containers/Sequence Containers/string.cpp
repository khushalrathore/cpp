#include <string>
#include <iostream>

using namespace std;

char toLowerCase(char A) { return (A >= 'A' && A <= 'Z') ? (A + 32) : A; }
char toUpperCase(char a) { return (a >= 'a' && a <= 'z') ? (a - 32) : a; }
string specialCharFilter(string s)
{
  string result;
  for (char c : s)
  {
    if (isalnum(c))
    {
      result += c;
    }
  }
  return result;
}

void reverseIt(string &arr)
{
  int start = 0;
  int end = arr.size() - 1;
  while (start < end)
  {
    swap(arr[start++], arr[end--]);
  }
  cout << "Reverse of string : " << arr << "\n";
}

bool checkPalindrome(string s)
{
  s = specialCharFilter(s);
  int st = 0;
  int e = s.size() - 1;

  while (st < e)
  {
    if (toLowerCase(s[st]) != toLowerCase(s[e]))
    {
      return false;
    }
    st++;
    e--;
  }

  return true;
}

void solve()
{
  string input;
  cout << "Enter a string: ";
  getline(cin, input);
  cout << "Your string is: " << input << "\n";
  cout << "Length of string: " << input.size() << "\n";
  reverseIt(input);
  checkPalindrome(input) ? cout << "It is a Palindrome\n" : cout << "It's not a Palindrome\n";
}

int main()
{
  solve();
  return 0;
}
