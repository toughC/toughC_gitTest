#include <iostream>

using namespace std;

int main()
{
    cout << "     /|" << endl;
    cout << "    / |" << endl;
    cout << "   /  |" << endl;
    cout << "  /___| " << endl;

    string characterName = "John";
    int characterAge;
    characterAge = 35;
    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;
    characterName = "Mike";
    cout << "He liked the name " << characterName << endl;
    cout << "But did not like being " << characterAge << endl;

    char grade = 'A';
    string phrase = "Giraffe Academy";
    int age = 50;
    double gpa = 2.3;
    bool isMale = false;
    cout << grade <<endl;

    cout << "Giraffe Academy\n";
    cout << "Hello" << endl;
    phrase = "Giraffe Academy";
    cout << phrase.length();
    cout << phrase[0];
    phrase[1] = 'B';
    cout << phrase << endl;
    cout << phrase.find("Academy", 9/* or 8 */) << endl;
    cout << phrase.substr(8, 3) << endl;
    string phrasesub = phrase.substr(8, 3);
    cout << phrasesub;

    //49:01

    return 0;
}
