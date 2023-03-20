// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int rowcount;
// //     cin >> rowcount;
// //     // char ch = 254;
//     // cout << ch << endl;
//     // for(int row=0;row<rowcount;row++){
//     //     for(int space=0;space<rowcount-row-1;space++){
//     //         cout<<" ";
//     //     }
//     //     if(row == 0 || row==rowcount-1){
//     //     for(int col=0;col<row+1;col++){
//     //         cout << "* ";
//     //     }
//     //     }
//     //     else {
//     //         cout << "*";
//     //         for(int k=0;k<2*row-1;k++){
//     //             cout<<" ";
//     //         }
//     //         cout <<"* ";
//     //     }
//     //     cout<<endl;
//     // }
//     // int a=5;
//     // cout <<(++a)*(++a);

//     // for(int row =0; row < rowcount;row++)
//     // {
//     //     for(int col =0; col < row + 1; col++)
//     //     {
//     //     cout << row + 1;
//     //     if(col != row)
//     //     {
//     //         cout << "*";
//     //     }
//     //     }
//     //     cout << endl;
//     // }
//     // for(int row =0; row < rowcount;row++)
//     // {
//     //     for(int col =0; col < rowcount-row; col++)
//     //     {
//     //     cout << rowcount-row;
//     //     if(col != rowcount-row-1)
//     //     {
//     //         cout << "*";
//     //     }
//     //     }
//     //     cout << endl;
//     // }
// // }
// // int increasing_subarray(vector<int> arr, int n)
// // {
// //     // int max_length = 1;
// //     int curr_length = 1;
// //     int start = 0;
// //     int end = 0;

// //     for (int i = 0; i < arr.size(); i++)
// //     {
// //         if (arr[i+ 1] - arr[i] == 1)
// //         {
// //             curr_length++;
// //             // end = i;
// //         }
// //         else
// //         {
// //             // curr_length = 1;
// //             // start = i;
// //             // end = i;
// //             arr.pop_back();
// //         }

// //         // max_length = max(max_length, curr_length);
// //     }

// //     return curr_length;
// // }

// #include <iostream>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;
// void missingElement(vector<int> arr)
// {
//     int sum =0;
//     int N =6;
//     for(int i = 0; i < arr.size();i++)
//     {
//         sum = sum + arr[i];
//     }
//     int missingele = (N * (N + 1)/2) - sum;
//     cout << "Missing Element is ::" << missingele ;
// }
// int main()
// {
//   int n;
//   cin >> n;
//   vector<int> arr(n);
//   for(int i =0; i< arr.size();i++)
//   {
//     cin >> arr[i];
//   }
// vector<int> arr{1,2,3,4,6};
// int size = 5;
// int sum = 0;
// int total =6;
// for(int i =0; i < size;i++)
// {
//     sum = sum + arr[i];
// }
// int missing = (total * (total + 1)/2) - sum;
// cout << missing;
// missingElement(arr);
// return 0;
// }

// #include<iostream>
// using namespace std;
// void fib(int n)
// {
//   int a = 0,b = 1,c;
//   cout << a << " " << b <<" ";
//   for(int i = 2;i < n;i++)
//   {
//     c = a+b;
//     a = b;
//     b = c;
//     cout << c << " ";
//   }
// }
// int main()
// {
//   int n;
//   cin >> n;
//   fib(n);
//   return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<vector<int> > arr)
// {
//   for(int  i =0; i < arr.size();i++)
//   {
//     for(int j = 0; j < arr.size();j++)
//     {
//       cout << arr[i][j] << " ";
//     }
//     cout << endl;
//   }
// }
// int main()
// {
//   int n,m;
//   cin >> n >> m;
//   vector<vector<int> > arr(n,vector<int>(m,0));
//   for(int i = 0; i < arr.size();i++)
//   {
//     for(int j = 0; j < arr.size();j++)
//     {
//       cin >> arr[i][j];
//     }
//   }
//   display(arr);
//   return 0;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// void isArmstrong(int n)
// {
//     int len = (int)log10(n) + 1;
//     int temp = n;
//     int sum = 0;
//     while (n != 0)
//     {
//         int rem = n % 10;
//         sum = sum + round(pow(rem, len));
//         n /= 10;
//     }
//     if(temp == sum)
//     {
//         cout << "Armstrong Number";
//     }
//     else
//     {
//         cout << " Not an Armstrong Number";
//     }

// }

// int main()
// {
//     int n;
//     cin >> n;
//     isArmstrong(n);
//     return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s1 = "race";
//     string s2 = "care";

//     int n1 = s1.length();
//     int n2 = s2.length();
//     if(n1 != n2)
//     {
//         cout << "Not Anagrams" << " ";
//         return 0;
//     }

//     sort(s1.begin(),s1.end());
//     sort(s2.begin(),s2.end());

//     for (int i = 0; i < n1; i++)
//     {
//         if (s1[i] != s2[i])
//         {
//             cout << "Not Anagrams" << " ";
//             return 0;
//         }
//     }
//     cout << "Anagrams" << " ";
// }

// #include<iostream>
// #include<algorithm>
// #include<limits.h>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   int minA = INT_MAX, minB = INT_MAX, minC = INT_MAX;
//     for(int i = 1; i <= n;i++)
//     {
//         char chefType ;
//         int time;
//         cin >> chefType >> time;

//         if(chefType == 'A')
//         {
//           minA = min(minA,time);
//         }
//         else if( chefType == 'B')
//         {
//           minB = min(minB,time);
//         }
//         else if(chefType == 'C')
//         {
//           minC = min(minC,time);
//         }
//     }
//       int mini = minA + minB;
//       if(mini > minC)
//       {
//         cout << minC;
//       }
//       else
//       {
//         cout << mini;
//       }
//   return 0;
// }

// #include<iostream>
// #include<vector>
// #include<string.h>
// using namespace std;

// string commonPrefix(vector<string> arr,int n)
// {
//    string  ans = "";
//     for(int i = 0 ; i < arr[0].length();i++)
//     {
//       char curr_char = arr[0][i];

//       bool match = true;

//       for(int j = 1; j < n;j++)
//       {
//           if(arr[j].size() < i || curr_char != arr[j][i])
//           {
//               match = false;
//               break;
//           }
//       }

//       if(match == false)
//         break;
//       else
//       {
//         ans.push_back(curr_char);
//       }
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<string> arr(n);
//     for(int i = 0; i < n;i++)
//     {
//         cin >> arr[i];
//     }
//     string s = commonPrefix(arr,n);
//     cout << s;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   if(cin >> n)
//   {
//     cout <<"Deepak";
//   }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//   if(cout << "Sai ")
//   {
//     cout <<"Deepak";
//   }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//   int rowcount = 5;
//   for(int i = 0 ; i < rowcount;i++)
//   {
//     for(int j = i+1;j <= rowcount;j++)
//     {
//       if(j == i+1 || i == 0 || j == rowcount)
//       {
//         cout << j <<" ";
//       }
//       else{
//         cout <<" ";
//       }
//     }
//     cout << endl;
//   }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//   int rowcount = 5;
//   for(int i = 0 ; i < rowcount;i++)
//   {
//     for(int j = i+1;j <= rowcount;j++)
//     {
//       if(j == i+1 || i == 0 || j == rowcount)
//       {
//         cout << j <<" ";
//       }
//       else{
//         cout <<" ";
//       }
//     }
//     cout << endl;
//   }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//   int rowcount = 3;
//   for(int i = 0; i < rowcount;i++)
//   {
//     for(int j = 0; j < 5;j++)
//     {
//       if(i == 0|| i == rowcount-1)
//       {
//         cout << "*";
//       }
//       else{
//         cout <<"*";
//         for(int k =0 ;k < 3;k++)
//         {
//           cout <<"  ";
//         }
//         cout <<"*";
//       }
//     }
//     cout << endl;
//   }
// }

// int main()
// {
// int rowcount = 5;
// for(int i =0; i < rowcount;i++)
// {
//   for(int j = 0; j < rowcount-i;j++)
//   {
//     cout <<"* ";
//   }
//   cout << endl;
// }
// }

// int main()
// {
//   int rowcount = 5;
//   for(int i =0; i < rowcount;i++)
//   {
//     for(int j = 0; j < i+1;j++)
//     {
//       cout <<"* ";
//     }
//     cout << endl;
//   }
// }

// int main()
// {
//   int rowcount = 5;
//   for(int i =0; i < rowcount;i++)
//   {
//     for(int j = 0; j < i+1;j++)
//     {
//       cout << j+1 <<" ";
//     }
//     cout << endl;
//   }
// }

// int main()
// {
// int rowcount = 5;
// for(int i = 0; i < rowcount;i++)
// {
//   for(int j = 0;j < rowcount-i;j++)
//   {
//     cout << j+1 <<" ";
//   }
//   cout << endl;
// }
// }

// int main()
// {
//   int rowcount = 5;
//   for(int i = 0; i < rowcount;i++)
//   {
//     for(int space = 0; space < i ; space++)
//     {
//       cout <<" ";
//     }
//     for(int j = 0; j < rowcount-i;j++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
// }

// int main()
// {
//   int rowcount=5;
//   for(int i =0;i < rowcount;i++)
//   {
//     for(int space = 0; space < rowcount -i;space++)
//     {
//       cout <<" ";
//     }
//     for(int j =0; j < i+1;j++)
//     {
//       cout <<"* ";
//     }
//     cout << endl;
//   }
// }

// int main()
// {
//   int rowcount =5;
//   for(int i = 0; i < rowcount;i++)
//   {
//     for(int j = 0; j < rowcount;j++)
//     {
//       cout <<"* ";
//     }
//     cout << endl;
//   }
// }

// int rowcount = 3;
// int colcount = 5;
// for(int i = 0; i < rowcount;i++)
// {
//   for(int j = 0; j < 5;j++)
//   {
//     if(i == 0 || i == (rowcount - 1) || j == 0 || j == (colcount-1))
//     {
//       cout <<"* ";
//     }
//     else
//     {
//       cout << "  ";
//     }
//   }
//   cout << endl;
// }

// int rowcount = 5;
// for(int i =0;i < rowcount;i++)
// {
//   for(int j = 0; j < rowcount-i;j++)
//   {
//     if(i == 0 || j == 0 || j == rowcount-i-1)
//     {
//       cout <<"* ";
//     }
//     else
//     {
//       cout << "  ";
//     }
//   }
//   cout << endl;
// }

// int rowcount = 5;
// for(int i =0; i < rowcount;i++)
// {
//   for(int space = 0; space < rowcount-i-1;space++)
//   {
//     cout <<" ";
//   }
//   for(int j = 0; j < i+1;j++)
//   {
//     cout <<"* ";
//   }
//   cout << endl;
// }

// int rowcount = 5;
// for(int i = 0; i < rowcount;i++)
// {
//   for(int space = 0; space <i;space++)
//   {
//     cout << " ";
//   }
//   for(int j = 0; j < rowcount-i;j++)
//   {
//     cout << "* ";
//   }
//   cout<< endl;
// }

// Full Pyramid
// int rowcount = 5;
// for(int i = 0; i < rowcount;i++)
// {
//   for(int space = 0 ; space < rowcount-i-1;space++)
//   {
//     cout <<" ";
//   }
//   for(int j = 0 ;j < i+1;j++)
//   {
//     cout << "* ";
//   }
//   cout << endl;
// }
// //Inverted Pyramid
// for(int i = 0; i < rowcount;i++)
// {
//   for(int space = 0; space <i;space++)
//   {
//     cout << " ";
//   }
//   for(int j = 0; j < rowcount-i;j++)
//   {
//     cout << "* ";
//   }
//   cout<< endl;
// }

// int rowcount = 5;
// for(int i =0; i < rowcount;i++)
// {
//   for(int space = 0; space < rowcount-i-1;space++)
//   {
//     cout << " ";
//   }
//   for(int j = 0; j < 2*i+1;j++)
//   {
//     if(j == 0 || j == 2*i)
//     {
//       cout <<"*";
//     }
//     else
//     {
//       cout << " ";
//     }
//   }
//   cout <<endl;
// }
// for(int i = 0; i < rowcount;i++)
// {
//   for(int space = 0 ; space < i;space++)
//   {
//     cout <<" ";
//   }
//   for(int j = 0 ; j < 2*rowcount - 2*i-1;j++)
//   {
//     if(j == 0 || j ==  2*rowcount - 2*i-1-1)
//     {
//       cout <<"*";
//     }
//     else
//     {
//       cout <<" ";
//     }
//   }
//   cout << endl;
// }

// //First Part
// int rowcount = 5;
// for(int i =0; i< rowcount;i++)
// {
//     for(int j = 0; j < rowcount-i;j++)
//     {
//       cout <<"*";
//     }
//   //Second Part
//     for(int space = 0; space < 2*i+1;space++)
//     {
//       cout << " ";
//     }
//   //Third part
//     for(int j = 0; j < rowcount-i;j++)
//     {
//       cout <<"*";
//     }
//     cout << endl;
// }
// //First Part
// for(int i =0; i< rowcount;i++)
// {
//     for(int j = 0; j < i+1;j++)
//     {
//       cout <<"*";
//     }
//   //Second Part
//     for(int space = 0; space < 2*rowcount - 2*i-1;space++)
//     {
//       cout << " ";
//     }
//   //Third part
//     for(int j = 0; j < i+1;j++)
//     {
//       cout <<"*";
//     }
//     cout << endl;
// }

// //First Part
// int rowcount = 5;
// for(int i= 0; i < rowcount;i++)
// {
//   for(int j =0; j < i+1;j++)
//   {
//     cout << i+1;
//     if(j != i+1-1)
//     {
//       cout << "*";
//     }
//   }
//   cout << endl;
// }
// //Second part
// for(int i = 0 ; i < rowcount;i++)
// {
//   for(int j = 0; j < rowcount-i;j++)
//   {
//     cout << rowcount-i;
//     if(j != rowcount-i-1)
//     {
//       cout <<"*";
//     }
//   }
//   cout << endl;
// }

// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// 5*5*5*5*5
// 4*4*4*4
// 3*3*3
// 2*2
// 1

// int rowcount = 5;
// for(int i = 0 ; i < rowcount;i++)
// {
//   int j =0;
//   for(; j < i+1;j++)
//   {
//     cout << j+1 <<" ";
//   }
//   for(int k = i;k >=1 ;k--)
//   {
//     cout << k <<" ";
//   }
//   cout << endl;
// }

// int rowcount = 5;
// for(int i = 0; i < rowcount;i++)
// {
//   for(int j = 0; j < i+1;j++)
//   {
//     if(j == 0 || i == rowcount -1 || j == i )
//     {
//       cout << j + 1 <<"  " ;
//     }
//     else
//     {
//       cout <<"   ";
//     }
//   }
//   cout << endl;
// }

// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//   vector<int> arr{10,20,30,40};
//   for(auto val : arr)
//   {
//     cout << val <<" ";
//   }
// }

// #include<iostream>
// using namespace std;

// int insertElement(int arr[],int size,int pos,int key)
// {
//   size++;
//   for(int i = size;i > pos;i--)
//   {
//     arr[i] = arr[i-1];
//   }
//     arr[pos-1] = key;
//   return pos;
// }

// int linearSearch(int arr[],int size,int key)
// {
//   int d = 0;
//   int index;
//   while(d < size)
//   {
//     if(arr[d] ==  key)
//     {
//       return d;
//     }
//     else if(arr[d] != key)
//     {
//       if(key > arr[d])
//       {
//         d++;
//       }
//       else
//       {
//         index = insertElement(arr,size,d,key);
//         return index;
//       }
//     }
//   }
//   return size;
// }
// int main()
// {
//   int arr[10] ={1,3,5,6};
//   int size = 4;
//   int key = 7;
//   cout << linearSearch(arr,size,key);
//   return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//   vector<int> arr;

//   int ans = ((sizeof(arr)) / sizeof(int));
//   cout << ans << endl;

//   arr.push_back(5);
//   arr.push_back(6);
//   cout << arr.size() << endl;
//   cout << arr.capacity() << endl;

//   vector<int> brr(10, -1);
//   for (auto val : brr)
//   {
//     cout << val << " ";
//   }
//   cout << endl
//        << endl;
//   vector<int> crr(10, 100);
//   for (auto val : crr)
//   {
//     cout << val << " ";
//   }
//   cout << endl
//        << endl;
//   vector<int> drr{1, 2, 3, 4, 5};
//   for (auto val : drr)
//   {
//     cout << val << " ";
//   }
//   cout << endl
//        << endl;
//   cout << "Checking Empty or not :: " << drr.empty();
//   return 0;
// }

// Missing Element

// #include <iostream>
// using namespace std;
// int binarySearch(int arr[], int size)
// {
//     int start = 0;
//     int end = size - 1;
//     int ans = -1;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] == mid + 1)
//         {
//             start = mid + 1;
//         }
//         else if (arr[mid] != mid + 1)
//         {
//             ans = mid + 1;
//             end = mid - 1;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int arr[] = {2, 3, 4, 5, 6, 7, 8};
//     int size = 7;
//     cout << binarySearch(arr, size);
// }

