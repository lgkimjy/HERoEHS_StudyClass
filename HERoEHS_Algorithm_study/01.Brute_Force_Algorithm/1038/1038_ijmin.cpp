#include <iostream>
#include <queue>
using namespace std;
int main()
{
  int N,numcount=1;
  long long num=0;
  cin >> N;
  queue<long long> que;
  for(int i=1;i<10;i++)
    que.push(i);
    
  while(numcount<=N)
  {
    if(que.empty())
    {
      num = -1;
      break;
    }
    num=que.front();
    que.pop();
    int m=num%10;
    for(int i=0;i<m;i++)
      que.push(num*10+i);
    numcount++;
  }
  cout << num << endl;
}