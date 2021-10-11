#include <iostream>
#include <fstream>

using namespace std;

int main() {

  ifstream input;
  input.open("random.txt");  

  if (!input) {
    cerr << "Could not open the file in reading mode" << endl;
  }

  int sum = 0;
  int count = 0;
  string line;
  while (getline(input, line)) {
    sum = sum + stoi(line);
    count++;
  }

  cout << "The sum is: " << sum << endl;
  input.close();

  ofstream output;
  output.open("calculations.txt");


  int average = sum/count;
  cout << "The average is: " << average << endl;

  
 
  output << sum << " " << average;

  output.close();

  return 0;
}