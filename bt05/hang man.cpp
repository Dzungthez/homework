#include<bits/stdc++.h>
using namespace std;

string chooseScretword();
char getPlayerGuess();
string update (string secretWord,string guessWord,char guess);
void renderGame (string guessWord, int wrong_guess);
string firstGuessWord(string secretWord);
bool contains(string secretword, char guess);

string chooseScretword(string s)
{
    int k=1;
    int n = s.size();
    for (int i=0;i<n;i++)
    {
        if(s[i]==' ') k++;
    }
    string t[k];
    int z=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=' ') t[z] = t[z] + s[i];
        else z++;
    }
    int index = rand() % k;
    return t[index];
}

char getPlayerGuess()
{
    cout<< endl << "may gioi may doan de";
    char guess;
    cin >> guess;
    return guess;
}

string firstGuessWord(string secretWord)
{
    string guessWord ="";
    for (int i=0;i<secretWord.length();i++)
    {
        guessWord = '-' + guessWord;
    }
    return guessWord;
}

void renderGame (string guessWord,int
                  wrong_guess)
{
    cout << endl << guessWord << " so lan ban da doan sai " << wrong_guess;
}

string update (string secretWord,string guessWord,char guess)
{
    for (int i=0;i<secretWord.length();i++)
    {
        if (secretWord[i]==guess) guessWord[i]= guess;
    }
    return guessWord;
}

bool contains(string secretWord, char guess)
{
    for (int i=0;i< secretWord.length();i++)
    {
        if (secretWord[i]==guess) return true;
    }
    return false;
}

int main()
{
    int chances = 7;
    string s;
    getline (cin,s);
    string secretWord = chooseScretword(s);
    int wrong_guess = 0;
    string guessWord = firstGuessWord(secretWord);
    do
    {
        renderGame(guessWord, wrong_guess);
        char guess = getPlayerGuess();
        if (contains(secretWord,guess))
            guessWord = update(secretWord,guessWord,guess);
        else wrong_guess ++;
    }while(wrong_guess < chances && guessWord != secretWord);

    if (wrong_guess < chances) cout << "you win";
    else cout << "Loser";

    return 0;
}
