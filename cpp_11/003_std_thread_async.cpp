#include <iostream>
#include <string>
#include <chrono>
#include <thread>
 
using namespace std::chrono;
 
std::string fetchDataFromDB(std::string recvData) {
  //确保函数要5秒才能执行完成
  std::this_thread::sleep_for(seconds(5));
 
  //处理创建数据库连接、获取数据等事情
  return "DB_" + recvData;
}
 
std::string fetchDataFromFile(std::string recvData) {
  //确保函数要5秒才能执行完成
  std::this_thread::sleep_for(seconds(5));
 
  //处理获取文件数据
  return "File_" + recvData;
}
 
int main() {
  //获取开始时间
  system_clock::time_point start = system_clock::now();
 
  //从数据库获取数据
  std::string dbData = fetchDataFromDB("Data");
 
  //从文件获取数据
  std::string fileData = fetchDataFromFile("Data");
 
  //获取结束时间
  auto end = system_clock::now();
 
  auto diff = duration_cast<std::chrono::seconds>(end - start).count();
  std::cout << "Total Time taken= " << diff << "Seconds" << std::endl;
 
  //组装数据
  std::string data = dbData +  " :: " + fileData;
 
  //输出组装的数据
  std::cout << "Data = " << data << std::endl;
 
  return 0;
}
