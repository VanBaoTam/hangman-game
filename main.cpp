#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Word
{
      string word;
      int n;
};

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
      srand(time(NULL));

      int randomIndex = rand() % size;
      return wordArray[randomIndex];
}

int main()
{

      const int arraySize = 10;
      Word myWordArray[arraySize];
      initializeWordArray(myWordArray, arraySize);
      Word randomWord = getRandomWord(myWordArray, arraySize);
      std::cout << "\nRandom Word: " << randomWord.word << "\nLength: " << randomWord.n;

      return 0;
}
