// 自然数与下标
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void print_all(const T &S)
{
  for (const auto &x : S)
    cout << x << ' ';
  cout << endl;
}

int main()
{
  vector<int> Nums(10, 0);
  vector<int> Scores{10, 11, 22, 33, 44, 55, 66, 77, 88, 99, 100, 67, 43, 19, 90, 87, 44, 9};
  // 方法一，多路判断
  for (size_t i = 0; i < Scores.size(); ++i)
  {
    if (Scores[i] < 10)
      ++Nums[0];
    else if (Scores[i] < 20)
      ++Nums[1];
    else if (Scores[i] < 30)
      ++Nums[2];
    else if (Scores[i] < 40)
      ++Nums[3];
    else if (Scores[i] < 50)
      ++Nums[4];
    else if (Scores[i] < 60)
      ++Nums[5];
    else if (Scores[i] < 70)
      ++Nums[6];
    else if (Scores[i] < 80)
      ++Nums[7];
    else if (Scores[i] < 90)
      ++Nums[8];
    else
      ++Nums[9];
  }
  print_all(Nums);
  // 方法二，利用除法后的下标
  vector<int> Nums1(11, 0);
  for (size_t i = 0; i < Scores.size(); ++i)
    ++Nums1[Scores[i] / 10];
  Nums1[9] += Nums1[10];
  Nums1.pop_back();
  print_all(Nums1);

  // 练习
  vector<int> range(101, 0);
  for (const auto &x : Scores)
    ++range[x];
  print_all(range);
  cout << "----------" << endl;
  vector<int> Points1 = {0, 46, 56, 61, 75, 86, 101};
  if (Points1.size() < 2) // 分数段
    return -1;
  vector<int> Nums2(Points1.size() - 1, 0); // 收集结果的容器，长度是Points长度 - 1
  for (size_t i = 0; i < 46; ++i)
    Nums2[0] += range[i];
  for (size_t i = 46; i < 56; ++i)
    Nums2[1] += range[i];
  for (size_t i = 56; i < 61; ++i)
    Nums2[2] += range[i];
  for (size_t i = 61; i < 75; ++i)
    Nums2[3] += range[i];
  for (size_t i = 75; i < 86; ++i)
    Nums2[4] += range[i];
  for (size_t i = 86; i < 101; ++i)
    Nums2[5] += range[i];
  print_all(Nums2);

  vector<int> Nums3(Points1.size() - 1, 0);
  // 循环发现
  for (size_t k = 0; k < Nums3.size(); ++k)
    for (size_t i = Points1[k]; i < Points1[k + 1]; ++i)
    {
      Nums3[k] += range[i];
    }
  print_all(Nums3);

  // 部分和
  vector<int> S(range.size() + 1);
  for (size_t i = 0; i < S.size(); ++i)
    S[i + 1] = S[i] + range[i];
  cout << S[86] - S[75] << endl;
}