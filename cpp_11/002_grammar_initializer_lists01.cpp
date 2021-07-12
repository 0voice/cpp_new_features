#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;

//初始化列表

int main(int argc, char *argv[])
{
    vector<int> iv = {1,2,3,4,5};
    list<int> li = {1,2,3,4,5};
    map<int,string> mis = {{1,"c"},{2,"c++"},
                                       {3,"java"},{4,"scala"},
                                       {5,"python"}};
    mis.insert({6,"ruby"});
    // map<int,string>::iterator itr = mis.begin();
    // for(; itr != mis.end(); ++itr)
    // {
    // cout<<itr->first<< itr->second<<endl;
    // }
    for(auto &is: mis)
    {
        cout<<is.first<<is.second<<endl;
    }
     return 0;
}
