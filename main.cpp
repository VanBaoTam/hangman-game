#include <iostream>
using namespace std;
void end_game(string answer, string codeword)
{
	if(answer ==codeword)
	{
		cout<<"Hooray! You saved the person from being hanged and earned a medal of honor!\n";
		cout<<"Congratulations !"<<endl;
	}
	else
	{
		cout<<"Oh shit! Your friend is hanged!\n";
	}
}
int main()
{
      end_game("test","test");
	  end_game("test","notest");
      return 0;
}
