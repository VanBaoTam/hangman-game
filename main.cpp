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
      game_title();
      std::cout << "\nRandom Word: " << randomWord.word << "\nLength: " << randomWord.n;
      cout << "DANG KIEM TRA";
      return 0;
}
