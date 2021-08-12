#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
  int loop, edges;
  vector<unsigned long long int> A, B;
  cin >> loop;
  for (int i = 0; i < loop; i++)
  {

    cin >> edges;
    unsigned long long int buffer;
    for (int j = 0; j < edges; j++)
    {
      cin >> buffer;
      A.push_back(buffer);
      cin >> buffer;
      B.push_back(buffer);
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int result = 0, current = 0;
    for (int j = 0; j < edges; j++)
      if (A[j] <= B[current])
        result++;
      else
        current++;

    A.clear();
    B.clear();
    cout << result << endl;
  }
}