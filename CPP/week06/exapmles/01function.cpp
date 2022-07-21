#include <iostream>
#include <float.h>
using namespace std;

// 定义结构体
struct Matrix
{
  int rows;     // 行
  int cols;     // 列
  float *pData; // 数据，由行列决定
};

// 求矩阵的最大值
float matrix_max(struct Matrix mat)
{
  float max = FLT_MIN;
  for (int r = 0; r < mat.rows; r++)
    for (int c = 0; c < mat.cols; c++)
    {
      float val = mat.pData[r * mat.cols + c];
      max = (max > val ? max : val);
    }
  return max;
}

int main()
{

  Matrix matA = {3, 4};
  matA.pData = new float[matA.rows * matA.cols]{1.f, 2.f, 3.f};

  Matrix matB = {4, 8};
  matB.pData = new float[matB.rows * matB.cols]{10.f, 20.f, 30.f};

  Matrix matC = {4, 2};
  matC.pData = new float[matC.rows * matC.cols]{100.f, 200.f, 300.f};

  float maxa = matrix_max(matA);
  float maxb = matrix_max(matB);
  float maxc = matrix_max(matC);

  cout << "max(matA) = " << maxa << endl;
  cout << "max(matB) = " << maxb << endl;
  cout << "max(matC) = " << maxc << endl;

  delete[] matA.pData;
  delete[] matB.pData;
  delete[] matC.pData;

  return 0;
}