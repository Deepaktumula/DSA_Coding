#include<iostream>
using namespace std;

int main(){
    int rowcount;
    cin>>rowcount;

    for(int row =0;row < rowcount;row++){
        for(int col =row+1;col <=rowcount;col++){
            if(col == row+1 || col == rowcount || row == 0){
                cout<< col<<"  ";
            }
            else{
                cout << "   ";
            }
        }
            cout<< endl;
    }
}