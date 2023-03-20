// #include<iostream>
// using namespace std;
// int main()
// {

//     int arr[]={1,2};
//     cout<<arr<<" "<< (&arr) <<" "<< arr+1<<" "<<(&arr[1])<<" "<<((&arr)+1)<<" "<<(&arr[1]+1);
//     // char ch=234234;
//     // cout << ch;

//     // short a=2^-1;
//     // short b=10;
//     // short sum=a+b;
//     // cout << sum;

//     // for(int i=0;i<5;i++)
//     // {
//     //     // cout << i << endl;
//     //     // cout << "Deepak" <<endl;
//     //     cout << i * 2 <<endl;
//     // } 

//     // for(int i=100;i>0;i=i/2){
//     //     cout << i << endl ;
//     // }

//     // for(int i=5;(i>0 && i<=10);i++){
//     //     cout << i << endl;
//     // }


//     // if(cout << "deepak "){
//     //     cout << "Sai" << endl;
//     // }


//     // int a;
//     // if(cin >> a ){
//     //     cout << "deepak";
//     // }
// }

#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralMatrix(vector<vector<int> > &v)
{
  vector<int> ans;
  int count=0;
  int totalElement=( v.size()*v[0].size());

  int startingRow =0;
  int endingRow =v.size()-1;
  int startingCol = 0;
  int endingCol=v[0].size()-1;

  while(count < totalElement)
    {
      for(int i=startingCol ; i<=endingCol     ; i++)   //&& count < totalElement
        {
          ans.push_back( v[startingRow] [i]  );
          count++;
        }
      startingRow++;
      
      for(int i=startingRow  ;  i<=endingRow    ; i++)
        {
          ans.push_back( v[i][endingCol]);
          count++;
        }
      endingCol--;
      
      if(count < totalElement) // check to avoid duplicates
      {
          for(int i=endingCol ; i>=startingCol   ; i--)
          {
              ans.push_back( v[endingRow][i]);
              count++;
          }
          endingRow--;
      }
      
      if(count < totalElement) // check to avoid duplicates
      {
          for(int i=endingRow ; i>=startingRow  ; i--)
          {
              ans.push_back( v[i][startingCol]);
              count++;
          }
          startingCol++;
      }
    }
  return ans;
}

int main()
{
  vector<vector<int> > vect{{1,2,3,4},{5,6,7,8},{9,10,11,12}};

  vector<int> an{spiralMatrix(vect)};
  for(int i=0; i<an.size(); i++)
    {
      cout<<an[i]<< " ";
    }
}
