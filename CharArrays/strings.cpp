#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string str;
    // cout << "Enter a string :: ";
    // cin >> str;
    // cout << str << " ";
    // cout << endl;

    string str1;
    cout << "Enter Sentence :: ";
    getline(cin, str1);
    cout << str1 << endl;

    cout << "Checks whether String is Empty or Not :: " << str1.empty() << endl;

    cout << "Length of String :: " << str1.length() << endl;

    str1.push_back('S');
    cout << "Pushes into It :: " << str1 << endl;

    str1.pop_back();
    cout << "Popping Back :: " << str1 << endl;

    cout << "Finds where the string is present :: " << str1.find("good") << endl;

    cout << "Substring of string :: " << str1.substr(8, 6) << endl;

    string str = "Deepak";
    string str2 = "Sai";
    cout << "Comparing These Two String :: " << str2.compare(str);
    return 0;
}