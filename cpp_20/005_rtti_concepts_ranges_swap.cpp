
#include<iostream>
#include<time.h>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
	vector<int> v;
 
	srand(time(0));
	for(int i=0;i<10;i++)
	{
		v.push_back(i+1);
	}
	
	//使用了lambda表达式
	for_each(v.begin(),v.end(),[](int n){cout<<n<<' ';});
	cout<<endl;
 
	swap_ranges(v.begin(),v.begin()+5,v.begin()+5);
 
	for_each(v.begin(),v.end(),[](int n){cout<<n<<' ';});
	cout<<endl;
}
