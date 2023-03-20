#include <iostream>
using namespace std;
int main()
{
    char ch[10] = "Deepak";
    char *cptr = ch;
    cout << "Here in characters ( cout ) implementation is different than arrays :: " << ch << endl;
    cout << "Address of ch :: " << &ch << endl;
    cout << cptr << endl;
    cout << "Prints from the second character in cptr :: " << cptr + 2 << endl;
    cout << "Addresss of the Cptr pointer :: " << &cptr << endl;
    cout << "It is Doing -->> *(cptr + 0) :: " << *cptr << endl;
    cout << "Prints 2nd Value in ch  :: " << *(cptr + 2) << endl;
    cout << "Prints 4th Value in ch  :: " << *(cptr + 4) << endl;
}

// Here in characters ( cout ) implementation is different than arrays :: Deepak
// Address of ch :: 0x61ff06
// Deepak
// Prints from the second character in cptr :: epak
// Addresss of the Cptr pointer :: 0x61ff00
// It is Doing -->> *(cptr + 0) :: D
// Prints 2nd Value in ch  :: e
// Prints 4th Value in ch  :: a