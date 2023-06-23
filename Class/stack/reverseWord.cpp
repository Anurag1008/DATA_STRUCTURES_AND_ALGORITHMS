#include <iostream>
#include <string>
#include <algorithm> // for std::swap
using namespace std;

void reverse_string(string s)
{
    string temp = "";
    for (int i = 0; i <= s.size(); i++) // Changed condition from i < s.size() to i <= s.size()
    {
        if (s[i] != ' ' && i < s.size()) // Changed condition from s[i] != ' ' && s[i] != '\0' to s[i] != ' ' && i < s.size()
        {
            temp.push_back(s[i]);
        }
        else
        {
            int start = 0;
            int end = temp.size() - 1;
            while (start < end)
            {
                swap(temp[start++], temp[end--]);
            }
            cout << temp << " ";
            temp = "";
        }
    }
}
int main()
{
    string str = "my name is muskhan";
    reverse_string(str);
    return 0;
}

/*
void reverse_string(string s)
{
   string temp ="";
   for (int i = 0; i < s.size();)
   {
      if (s[i] != ' ' || s[i] != '\0')
      {
         temp.push_back(s[i]);
         i++;
      }
      else
      {
         int start = 0;
         int end = temp.size() - 1;
         while (start <= end)
         {
            swap(temp[start++], temp[end--]);
         }
         cout << temp<<" ";
         i++;
         temp = "";
       
      }
   }
}
int main()
{
   string str = "my name is mushkan";
   reverse_string(str);
}

*/