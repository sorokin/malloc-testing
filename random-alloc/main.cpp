#include <cstdlib>
#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<std::vector<char> > v;

    size_t N = 100000;
    for (size_t i = 0; i != N; ++i)
    {
        size_t const MAX_SIZE = 40000;
        size_t i = rand() % MAX_SIZE;
        if (i < v.size())
        {
            //std::cout << "random-alloc: erase" << std::endl;
            std::swap(v[i], v.back());
            v.pop_back();
        }
        else
        {
            //std::cout << "random-alloc: insert" << std::endl;
            v.push_back(std::vector<char>(rand() % 10000));
        }
    }

    return 0;
}
