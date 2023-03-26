#include <iostream>
#include <string>
#include <fstream>
using namespace std;


string encrypt(string text)
{
    int key;
    cout << "Enter key: ";
    cin >> key;
    string result = "";

    for (int i = 0; i < text.length(); i++)
    {
        char c = text[i] + key;
        if (c > 'z')
            c = 'a' + (c - 'z' - 1);
        result += c;
    }
    return result;
}

int main()
{

    string message;
    cout << "Enter message to encrypt: ";
    getline(cin, message);
    

    string encrypted_message = encrypt(message);
    cout << "Encrypted message: " << encrypted_message << endl;

    return 0;
}