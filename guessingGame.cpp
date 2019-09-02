#include <iostream>
using namespace std;
int main(){
  int ans = 10;
  cout << "Welcome to number guessing game!" << endl;
  cout << "Enter your guess (e.g. 1): ";
  int user = 0;
  cin >> user;
  while (user != ans){
    if (user < ans){
      cout << "Too small!" << endl;
    }
    if (user > ans){
      cout << "Too big!" << endl;
    }
    cout << "Enter a different guess: ";
    cin >> user;
  }
  cout << "Congratulations! You won!" << endl;
  return 0;
}
