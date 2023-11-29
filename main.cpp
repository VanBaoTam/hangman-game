#include <iostream>
using namespace std;
void display_man(int misses){
	if( misses ==0){
	cout<<" +---+\n";
	cout<<" |   |\n";
	cout<<"     |\n";
	cout<<"     |\n";
	cout<<"     |\n";
	cout<<"     |\n";
	cout<<"======== \n";
	}
	else if(misses ==1)
	{
	cout<<" +---+\n";
	cout<<" |   |\n";
	cout<<" O   |\n";
	cout<<"     |\n";
	cout<<"     |\n";
	cout<<"     |\n";
	cout<<"======== \n";	
	}
	else if(misses ==2)
	{
	cout<<" +---+\n";
	cout<<" |   |\n";
	cout<<" O   |\n";
	cout<<" |   |\n";
	cout<<"     |\n";
	cout<<"     |\n";
	cout<<"======== \n";	
	}
	else if(misses ==3)
	{
	cout<<" +---+\n";
	cout<<" |   |\n";
	cout<<" O   |\n";
	cout<<" |   |\n";
	cout<<"/    |\n";
	cout<<"     |\n";
	cout<<"======== \n";	
	}
	else if(misses ==4)
	{
	cout<<" +---+\n";
	cout<<" |   |\n";
	cout<<" O   |\n";
	cout<<"/|\\  |\n";
	cout<<"     |\n";
	cout<<"     |\n";
	cout<<"======== \n";	
	}
	else if(misses ==5)
	{
	cout<<" +---+\n";
	cout<<" |   |\n";
	cout<<" O   |\n";
	cout<<"/|\\  |\n";
	cout<<"/    |\n";
	cout<<"     |\n";
	cout<<"======== \n";	
	}
else if(misses ==6)
	{
	cout<<" +---+\n";
	cout<<" |   |\n";
	cout<<" O   |\n";
	cout<<"/|\\  |\n";
	cout<<"/ \\  |\n";
	cout<<"     |\n";
	cout<<"======== \n";	
	}
}


int main()
{
	string codeword ="codingleverly";
	string answer="----------";
	int misses = 5;
		display_man(misses);
      return 0;
}
