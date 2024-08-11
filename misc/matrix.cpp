#include <iostream>
#include <vector>

using namespace std;
using matrix = vector<vector<int>>;

void printMatrix(const matrix &mat)
{
  for (const auto &row : mat)
  {
    for (int value : row)
    {
      cout << value << " ";
    }
    cout << endl;
  }
}

int main()
{
  matrix mat(3, vector<int>(3, 0));
  mat[0][0] = 1;
  mat[0][1] = 2;
  mat[0][2] = 3;
  mat[1][0] = 4;
  mat[1][1] = 5;
  mat[1][2] = 6;
  mat[2][0] = 7;
  mat[2][1] = 8;
  mat[2][2] = 9;
  cout << "matrix:" << endl;
  printMatrix(mat);

  return 0;
}