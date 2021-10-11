#include <iostream>
#include <fstream>


using namespace std;

  
int main() {

  int sum = 0;
  int count = 0;

  ifstream input;
  input.open("files/random.txt");  

  if (!input) {
    cerr << "Could not open the file in reading mode" << endl;
  }


  string line;
  while (getline(input, line)) {
    sum = sum + stoi(line);
    count++;
  }

  cout << "The sum is: " << sum << endl;
  
  int average = sum/count;
  cout << "The average is: " << average;
  
  
  ofstream output;
  output.open("files/calculations.txt");

 
  output << sum << " " << average;

  input.close();
  output.close();

  return 0;
}