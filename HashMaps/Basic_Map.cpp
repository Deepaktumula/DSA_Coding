#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    //Creation
    unordered_map<string,int> m;
    //Insertion
    pair<string,int> p = make_pair("Scorpio",9);
    m.insert(p);
    pair<string,int> p2("Alto",4);
    m.insert(p2);
    m["Fortuner"] = 10;

    //Accessing
    cout << endl;
    cout <<"Value of Alto is :: "<< m.at("Alto") << endl;
    cout <<"Value of Scorpio is :: "<< m.at("Scorpio") << endl;
    cout <<"Value of Fortuner is :: "<< m["Fortuner"] << endl;

    //Searching
    cout <<"Scorpio is Present or Not :: "<< m.count("Scorpio") << endl;

    if(m.find("Fortuner") != m.end())
    {
        cout << "Fortuner Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    //Size of Map
    cout << "Size of Unordered Map is :: "<< m.size() << endl;
    cout <<"Hummer is Present or Not :: "<< m["hummer"] << endl;
    cout << "Size of Unordered Map is :: "<< m.size() << endl << endl;

    //Printing All the Items In MAP
    for(auto i : m)
    {
        cout << i.first << "->" << i.second << endl;
    }
    return 0;
}