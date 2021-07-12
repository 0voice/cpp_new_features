#include <iostream>
#include <vector>

#include <list>
#include <map>
using namespace std;

int main(int argc, char *argv[])
{ 
#if 0
　　vector<int> vi(5);
　　cout<<vi.size()<<vi.capacity()<<endl;
　　vector<int> vi2(5,10);
　　for(auto i: vi2){
　　　　cout<<i<<endl;
　　} 
　　vector<int> vi3;
　　for(int i=0; i<10; i++){
　　　　vi3.push_back(i);
　　} 
　　for(auto i: vi3){
　　　　cout<<i<<endl;
　　} 
　　list<int> li(5);
　　cout<<li.size()<<endl;
　　for(auto &i:li){
　　　　cout<<i<<endl;
　　} 
　　list<int> li2(5,10);
　　cout<<li2.size()<<endl;
　　for(auto &i:li2){
　　cout<<i<<endl;
　　} 
　　list<int> li3;
　　for(int i=0; i<10; i++)
　　{
　　　　li3.push_back(i);
　　} 
　　cout<<li3.size()<<endl;
　　for(auto &i:li3){
　　　　cout<<i<<endl;
　　}
#endif
　　map<int,string> mis;

　　mis.insert(pair<int,string>(1,"c++"));
　　mis.insert(pair<int,string>(2,"java"));
　　mis.insert(pair<int,string>(3,"python"));
　　mis.insert(map<int,string>::value_type(4,"c"));
　　mis.insert(map<int,string>::value_type(5,"php"));
　　for(auto is: mis)
　　{
　　cout<<is.first<<"\t"<<is.second<<endl;
　　} 
　　mis[6] = "scala";
　　mis[7] = "basic";
　　mis[8] = "ruby";
　　for(auto &is: mis)
　　{
　　cout<<is.first<<"\t"<<is.second<<endl;
　　} 
　　return 0;
}
