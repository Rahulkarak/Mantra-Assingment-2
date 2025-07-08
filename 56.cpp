#include <iostream>
#include <string>
using namespace std;

int main()
{

    string text = "welcome, w3resource";
    cout << "The string " << text << endl;

    cout << "The length of the string " << text.length() << endl;

    cout << "The char at index 1 of the string " << text.at(1) << endl;
    cout << "The char at index 1 of the string using array " << text[1] << endl;

    cout << "Is the string empty " << text.empty() << endl;

    string sub = text.substr(2, 4);
    cout << "Retrieve the sub-string from 3rd position for 4 characters " << sub << endl;

    text.replace(3, 4, "went");
    cout << "The sub-string replace by 'went' " << text << endl;

    text.append(" end");
    cout << "Append a string 'end' at last of the string " << text << endl;

    text += " end";
    cout << "Append a string 'end' at last of the string using operator " << text << endl;

    text.insert(3, " insert ");
    cout << "The string 'insert' inserting at 3rd position of the string:: " << text << endl;

    cout << "The new string is:: " << text << endl;

    string sentence;
    cout << "Input a sentence:: ";
    cin.ignore();
    getline(cin, sentence);
    cout << sentence << endl;

    return 0;
}
