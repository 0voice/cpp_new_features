#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    deque<char> dq = { 'a', 'b', 'c', 'd', 'e' }; 
  
    cout << "The deque in reverse order: "; 
  
    // prints the elements in reverse order 
    for (auto it = dq.rbegin(); it != dq.rend(); ++it) 
        cout << *it << " "; 
  
    return 0; 
}
