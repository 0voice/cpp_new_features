#include <iostream>
#include <thread>
#include <atomic>
#include <array>
 
std::atomic<long long> data{10};
std::array<long long, 5> return_values{};
 
void do_work(int thread_num)
{
    long long val = data.fetch_add(1, std::memory_order_relaxed);
    return_values[thread_num] = val;
}
 
int main()
{
    {
        std::jthread th0{do_work, 0};
        std::jthread th1{do_work, 1};
        std::jthread th2{do_work, 2};
        std::jthread th3{do_work, 3};
        std::jthread th4{do_work, 4};
    }
 
    std::cout << "Result : " << data << '\n';
 
    for (long long val : return_values) {
        std::cout << "Seen return value : " << val << std::endl;
    }
}
