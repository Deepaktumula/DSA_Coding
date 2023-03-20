#include <iostream>
using namespace std;
int main()
{
     int arr[10] = {1, 2, 3, 4, 5, 6};
     int *ptr = arr;
     int *qtr = ptr;

     cout << "Base Address of the Array :: " << arr << endl;
     cout << "Base Address of the Array :: " << &arr << endl;
     cout << "Base Address of the 0th index of Array :: " << &arr[0] << endl
          << endl;

     cout << "value at Ptr :: " << ptr << endl;
     cout << "Size of Array stored in ptr :: " << sizeof(arr) << endl;
     cout << "Size of Ptr :: " << sizeof(*ptr) << endl;
     cout << "value stored at location of Ptr :: " << *ptr << endl;
     cout << "Adddress of Ptr :: " << &ptr << endl;
     cout << "value stored at location of Ptr + 1 :: " << *(ptr) + 1 << endl;
     cout << "value stored at location of Ptr + 2 :: " << *(ptr) + 2 << endl;
     cout << "Acccessing the 2nd element of Array through pointer :: " << *(ptr + 1) << endl;
     cout << "Acccessing the 4th element of Array through pointer :: " << *(ptr + 4) << endl;
     cout << "Value stored at ptr + 1 :: " << ptr + 1 << endl;
     cout << "Value stored at ptr + 2 :: " << ptr + 2 << endl;
     cout << "Value stored at ptr + 3 :: " << ptr + 3 << endl;
     cout << "Value stored at ptr + 4 :: " << ptr + 4 << endl
          << endl;

     cout << "value at qtr :: " << qtr << endl;
     cout << "Size of Array stored in qtr :: " << sizeof(arr) << endl;
     cout << "Size of qtr :: " << sizeof(*ptr) << endl;
     cout << "value stored at the location of qtr :: " << *qtr << endl;
     cout << "Address of qtr :: " << &qtr << endl;
     cout << "value stored at location of Ptr + 1 :: " << *(ptr) + 1 << endl;
     cout << "value stored at location of Ptr + 2 :: " << *(ptr) + 2 << endl;
     cout << "Acccessing the 2nd element of Array through pointer :: " << *(qtr + 1) << endl;
     cout << "Acccessing the 4th element of Array through pointer :: " << *(qtr + 4) << endl;
}

// Base Address of the Array :: 0x61fed8
// Base Address of the Array :: 0x61fed8
// Base Address of the 0th index of Array :: 0x61fed8

// value at Ptr :: 0x61fed8
// Size of Array stored in ptr :: 40
// Size of Ptr :: 4
// value stored at location of Ptr :: 1
// Adddress of Ptr :: 0x61fed4
// value stored at location of Ptr + 1 :: 2
// value stored at location of Ptr + 2 :: 3
// Acccessing the 2nd element of Array through pointer :: 2
// Acccessing the 4th element of Array through pointer :: 5
// Value stored at ptr + 1 :: 0x61fedc
// Value stored at ptr + 2 :: 0x61fee0
// Value stored at ptr + 3 :: 0x61fee4
// Value stored at ptr + 4 :: 0x61fee8

// value at qtr :: 0x61fed8
// Size of Array stored in qtr :: 40
// Size of qtr :: 4
// value stored at the location of qtr :: 1
// Address of qtr :: 0x61fed0
// value stored at location of Ptr + 1 :: 2
// value stored at location of Ptr + 2 :: 3
// Acccessing the 2nd element of Array through pointer :: 2
// Acccessing the 4th element of Array through pointer :: 5