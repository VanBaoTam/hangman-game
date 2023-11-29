#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Word
{
      string word;
      int n;
};
void game_title(){
cout << "---------------------- Hangman-Game ---------------------- \n";
cout << "Instruction: Save your friend from being hanged by guessing the letters in the codeword, You have only 6 times wrong guessing before they are hanged.\n Try your best.\n";

}
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

void initializeWordArray(Word wordArray[], int size)
{
      string defaultWords[] = {"information", "technology", "administrative", "business", "coding", "office", "learning", "opensource", "management", "abbreviation"};

      for (int i = 0; i < size; ++i)
      {
            wordArray[i].word = defaultWords[i];
            wordArray[i].n = wordArray[i].word.length();
      }
}

Word getRandomWord(const Word wordArray[], int size)
{

      int randomIndex = rand() % size;
      return wordArray[randomIndex];
}

int main()
{
      srand(time(NULL));
      const int arraySize = 10;
      Word myWordArray[arraySize];
      initializeWordArray(myWordArray, arraySize);
      Word randomWord = getRandomWord(myWordArray, arraySize);
      return 0;
}
