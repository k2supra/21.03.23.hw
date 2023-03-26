#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    

    ifstream input_file("file1_6.txt");

    string search_word;
    cout << "Enter a word: ";
    getline(cin, search_word);

    string line;
    int count = 0;

    while (getline(input_file, line))
    {
        size_t pos = line.find(search_word);
        while (pos != string::npos)
        {
            count++;
            pos = line.find(search_word, pos + search_word.length());
        }
    }

    input_file.close();

    cout << "Number of words '" << search_word << "' in file: " << count << endl;

    return 0;
}