#include <iostream>
#include <vector>

int main()
{
	//遍历字符串
	std::string str = “hello, world”;
	for(auto ch : str)
	{
		std::cout << ch << std::endl;
	}
	//遍历str，输出每个字符，同时用上auto，简直是如虎添翼。（auto也是c++11的新特性）


	//遍历数组
	int arr[] = {1, 2, 3, 4};
	for(auto i : arr)
	{
		std::cout<< i << std::endl;
	}
	//不用知道数组容器的大小，即可方便的遍历数组。


	//遍历stl 容器
	std::vector<std::string> str_vec = {“i”, “like”,  "google”};
	for(auto& it : str_vec)
	{
		it = “c++”;
	}
	//在这段程序中，可以返回引用值，通过引用可以修改容器内容。


	//遍历stl map 
	std::map<int, std::string> hash_map = {{1, “c++”}, {2, “java”}, {3, “python”}};
	for(auto it : hash_map)
	{
		std::cout << it.first << “\t” << it.second << std::endl;
	}
	//遍历map返回的是pair变量，不是迭代器。

    return 0;
}
