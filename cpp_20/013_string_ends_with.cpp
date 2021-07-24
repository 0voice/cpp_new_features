#include<string>
#include<iostream>
using namespace std;

int startsWith(string s, string sub){
        return s.find(sub)==0?1:0;
}

int endsWith(string s,string sub){
        return s.rfind(sub)==(s.length()-sub.length())?1:0;
}

int main(){
        string str = "helloWorld";
        string preStr = "he";
        string sufStr = "rld";
        if(startsWith(str,preStr)){
                cout<<str + " starts with "+preStr<<endl;
        }
        if(endsWith(str,sufStr)){
                cout<<str+" ends with "+sufStr<<endl;
        }
        return 0;
}
