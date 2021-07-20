#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
  
    // initialize container 
    map<int, int> mp; 
  
    // insert elements in random order 
    mp.insert({ 2, 30 }); 
    mp.insert({ 1, 40 }); 
    mp.insert({ 3, 60 }); 
    mp.insert({ 4, 20 }); 
    mp.insert({ 5, 50 }); 
  
    // prints the elements 
    cout << "\nThe map in reverse order is:\n"; 
    cout << "KEY\tELEMENT\n"; 
    for (auto itr = mp.crbegin(); itr != mp.crend(); ++itr) { 
        cout << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    return 0; 
}
