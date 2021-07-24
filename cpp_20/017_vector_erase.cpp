#include <iostream> 
#include <string> 
using namespace std; 
  
// Function to demo erase() 
void eraseDemo(string str) 
{ 
    // Deletes all characters 
    str.erase(); 
  
    cout << "After erase():"; 
    cout << str; 
} 
  
// Driver code 
int main() 
{ 
    string str("Hello World!"); 
  
    cout << "Before erase():"; 
    cout << str << endl; 
    eraseDemo(str); 
  
    return 0; 
}
