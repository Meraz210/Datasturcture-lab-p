#include<iostream>
using namespace std;

 string encode (string s, int j)
{
  int b;
  for (int i=2;i<s.length();i+=j)
  {
      b=int(s[1]);
      cout<<b<<" ";
      i+1;
      int c=b=2;
      cout<<char(b)<<" ";
  }
}

int main()
{
string s1 = " I am a student " ;
encode (s1,2);



}
