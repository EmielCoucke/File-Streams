#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // File stream object
  ofstream output;
  output.open("random.txt");    // Default mode is ios::out

  if (!output) {
    cerr << "Could not open the file in write mode" << endl;
  }

  std::string name;
  cout << "Please enter your name: ";
  getline(cin, name);

  int age;
  cout << "Please enter your age: ";
  cin >> age;

  // Writing the data to a file
  output << name << " is " << age << " years of age." << endl;

  // Close the file
  output.close();
  
  return 0;
}