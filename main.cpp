#include <iostream>
#include <string>
int rightAnswer;
int userAnswer;
int score = 0;
void questionOne;
void questionTwo;
void questionThree;
void questionFour;
void questionFive;

using namespace std;

int main(string nameOfUser, score = 0) {
  cout << "So you've run into a bit of trouble there?" << endl;
  system("pause");
  cout << "Well I'm here to help!" << endl;
  cout << "What did you say your name was?" << endl;
  cin >> nameOfUser;
  cout << string(50, '\n');
  cout << "Alright then, " << nameOfUser << ". Shall we begin?" << endl;
  system("pause")
  cout << string(50, '\n');
  questionOne();
}

void questionOne(rightAnswer = 3) {
  cout << "What is the formula for simple interest?" << endl;
  cout << "1. P=IRT" << endl;
  cout << "2. Toes" << endl;
  cout << "3. I=PRT" << endl;
  cout << "4. Interest is weird" << endl;
  cin >> userAnswer;
  if (userAnswer != rightAnswer) {
    cout << "Darn!" << endl;
    system("pause");
    cout << string(50, '\n');
    score = score - 1;
    questionTwo();
  }
  else if (userAnswer = rightAnswer) {
    cout << "Good Job!" << endl;
    system("pause");
    cout << string(50, '\n');
    score = score + 1;
    questionTwo();
  }
}

void questionTwo(rightAnswer = 2) {
  cout << "What does P stand for?" << endl;
  cout << "1. Equal Rights for Pencils" << endl;
  cout << "2. Principle" << endl;
  cout << "3. Interest" << endl;
  cout << "4. Rate" << endl;
  cin >> userAnswer;
  if (userAnswer != rightAnswer) {
    cout << "Incorrect!" << endl;
    system("pause");
    cout << string(50, '\n');
    score = score - 1;
    questionThree();
  }
  else if (userAnswer = rightAnswer) {
    cout << "Nice Work!" << endl;
    system("pause");
    cout << string(50, '\n');
    score = score + 1;
    questionThree();
  }
}

void questionThree(rightAnswer = 2) {
  cout << "What does R stand for?" << endl;
  cout << "1. 42" << endl;
  cout << "2. Rate" << endl;
  cout << "3. Time" << endl;
  cout << "4. Principle" << endl;
  cin >> userAnswer;
  if (userAnswer != rightAnswer) {
    cout << "Nope!" << endl;
    system("pause");
    cout << string(50, '\n');
    score = score - 1;
    questionFour();
  }
  else if (userAnswer = rightAnswer) {
    cout << "Correct!" << endl;
    system("pause");
    cout << string(50, '\n');
    score = score + 1;
    questionFour();
  }
}

void questionFour(rightAnswer = 4) {
  cout << "What does T stand for?" << endl;
  cout << "1. Train" << endl;
  cout << "2. Temperature" << endl;
  cout << "3. IDK" << endl;
  cout << "4. Time" << endl;
  cin >> userAnswer;
  if (userAnswer != rightAnswer) {
    cout << "Nope!" << endl;
    system("pause");
    cout << string(50, '\n');
    score = score - 1;
    questionFive();
  }
  else if (userAnswer = rightAnswer) {
    cout << "Correct!" << endl;
    system("pause");
    cout << string(50, '\n');
    score = score + 1;
    questionFive();
  }
}

void questionFive(rightAnswer = 3;) {
  cout << "Robin invests $4000 into the bank." << endl;
  cout << "The bank has a 4% interest rate" << endl;
  cout << "If he invests for 4 years, how much" << endl;
  cout << "interest will he make?" << endl;
  cout << "1. 32000" << endl;
  cout << "2. 4640" << endl;
  cout << "3. 640" << endl;
  cin >> userAnswer;
  if (userAnswer != rightAnswer) {
    cout << "Nope!" << endl;
    system("pause");
    cout << string(50, '\n');
    score = score - 1;
    questionSix();
  }
  else if (userAnswer = rightAnswer) {
    cout << "Correct!" << endl;
    system("pause");
    cout << string(50, '\n');
    score = score + 1;
    questionSix();
  }
}

void questionSix(rightAnswer = 6413) {
  cout << "Charlie has 5300. He chose to invest" << endl;
  cout << "it in SkyBlue Bank. The bank has a 7%" << endl;
  cout << "interest rate. In 3 years, how much will" << endl;
  cout << "Charlie make total?" << endl;
  if (userAnswer != rightAnswer) {
    cout << "Nope!" << endl;
    system("pause");
    cout << string(50, '\n');
    score = score - 1;
    questionSeven();
  }
  else if (userAnswer = rightAnswer) {
    cout << "Correct!" << endl;
    system("pause");
    cout << string(50, '\n');
    score = score + 1;
    questionSeven();
  }
}
