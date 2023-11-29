#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
struct Word
{
      string word;
      int n;
};
void game_title()
{
      cout << "---------------------- Hangman-Game ---------------------- \n";
      cout << "Instruction: Save your friend from being hanged by guessing the letters in the codeword, You have only 6 times wrong guessing before they are hanged.\n Try your best.\n";
}
void display_man(int misses)
{
      if (misses == 0)
      {
            cout << " +---+\n";
            cout << " |   |\n";
            cout << "     |\n";
            cout << "     |\n";
            cout << "     |\n";
            cout << "     |\n";
            cout << "======== \n";
      }
      else if (misses == 1)
      {
            cout << " +---+\n";
            cout << " |   |\n";
            cout << " O   |\n";
            cout << "     |\n";
            cout << "     |\n";
            cout << "     |\n";
            cout << "======== \n";
      }
      else if (misses == 2)
      {
            cout << " +---+\n";
            cout << " |   |\n";
            cout << " O   |\n";
            cout << " |   |\n";
            cout << "     |\n";
            cout << "     |\n";
            cout << "======== \n";
      }
      else if (misses == 3)
      {
            cout << " +---+\n";
            cout << " |   |\n";
            cout << " O   |\n";
            cout << " |   |\n";
            cout << "/    |\n";
            cout << "     |\n";
            cout << "======== \n";
      }
      else if (misses == 4)
      {
            cout << " +---+\n";
            cout << " |   |\n";
            cout << " O   |\n";
            cout << "/|\\  |\n";
            cout << "     |\n";
            cout << "     |\n";
            cout << "======== \n";
      }
      else if (misses == 5)
      {
            cout << " +---+\n";
            cout << " |   |\n";
            cout << " O   |\n";
            cout << "/|\\  |\n";
            cout << "/    |\n";
            cout << "     |\n";
            cout << "======== \n";
      }
      else if (misses == 6)
      {
            cout << " +---+\n";
            cout << " |   |\n";
            cout << " O   |\n";
            cout << "/|\\  |\n";
            cout << "/ \\  |\n";
            cout << "     |\n";
            cout << "======== \n";
      }
}
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
void end_game(string answer, string codeword)
{
      if (answer == codeword)
      {
            cout << "Hooray! You saved the person from being hanged and earned a medal of honor!\n";
            cout << "Congratulations !" << endl;
      }
      else
      {
            cout << "Oh shit! Your friend is hanged!\n";
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
void game_hint(string &answer, const string &codeword)
{
      size_t index = codeword.find_first_of("abcdefghijklmnopqrstuvwxyz");
      if (index != string::npos)
      {
            answer[index] = codeword[index];
            cout << "\nHint: The first letter of the codeword is '" << codeword[index] << "'\n";
      }
      else
      {
            cout << "\nNo hint available for this codeword.\n";
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
      int misses = 0;
      string codeword = randomWord.word;
      int length = randomWord.n;
      string answer = "";
      for (int i = 0; i < length; ++i)
      {
            answer += "_";
      }
      vector<char> incorrect;
      bool guess = false;
      char letter;
      game_title();
      while (answer != codeword && misses < 7)
      {
            display_man(misses);
            display_status(incorrect, answer);

            cout << "\n\nPlease enter your guess: ";
            cin >> letter;

            for (int i = 0; i < codeword.length(); i++)
            {
                  if (letter == codeword[i])
                  {
                        answer[i] = letter;
                        guess = true;
                  }
            }
            if (!guess && misses == 1)
            {
                  game_hint(answer, codeword);
            }
            if (guess)
            {
                  cout << "\nCorrect!\n";
            }
            else
            {
                  cout << "\nIncorrect! Another portion of the person has been drawn.\n";
                  incorrect.push_back(letter);
                  misses++;
            }
            guess = false;
      }

      end_game(answer, codeword);
      return 0;
}
