#include<iostream>
using namespace std;
int main() {
  int n;
    cin>>n;
  for (int i = 0; i <n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      printf("  ");
    }
    for (int j = i+1; j <=2*i+1; j++) {
      printf("%d ", j);
    }
    int ele = 2 * i;
    for (int j = 0; j <= i - 1; j++) {
      printf("%d ", ele--);
    }
    printf("\n");
  }
  return 0;
}