#include<iostream>
#include<thread>

class test
{
    public:
        void do_lengthy_work(int max)
        {
            int i;
            for(i = 0; i<max; i++)
                std::cout<<i<<std::endl;
        }
};

int main()
{
    int max = 10;
    test obj;
    std::cout<<"Enter the limit:"<<std::endl;
    std::cin>>max;
    std::thread my_thread(&test::do_lengthy_work, &obj, max);
    my_thread.join();
}
