#include <iostream>
#include <vector>
using namespace std;
void display_status(vector<char> incorrect, string answer)
{
      cout << "\nIncorrect guesses: \n";
      for (int i = 0; i < incorrect.size(); i++)
      {
            cout << incorrect[i] << "  ";
      }
      cout << "\nCode word:\n";
      for (int i = 0; i < answer.length(); i++)
      {
            cout << answer[i] << "  ";
      }
}
int main()
{
      return 0;
}