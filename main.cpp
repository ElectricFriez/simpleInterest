#include <iostream>
#include <string>

using namespace std;

int main(string nameOfUser) {
  cout << "So you've run into a bit of trouble there?" << endl;
  system("pause");
  cout << "Well I'm here to help!" << endl;
  cout << "What did you say your name was?" << endl;
  cin >> nameOfUser;
  cout << string(50, '\n');
  cout << "Alright then, " << nameOfUser << ". Shall we begin?" << endl;
  system("pause")
  
}

