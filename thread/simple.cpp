#include<thread>
#include<iostream>

void hello()
{
    std::cout<<"hello World"<<std::endl;
}

int main()
{
    std::thread my_thread(hello);
    my_thread.join();
}
