#include <iostream>
#include <algorithm>
#include <vector>


int main()
{
    std::vector<int> a = {1, 2, 3, 4, 5};
    std::cout << "Входные данные: ";
    for(auto it : a)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;


    std::for_each(a.begin(), a.end(), [](auto& it){
        if(it%2==1)
            it*=3;
    });


    std::cout << "Выходные данные: ";
    for(auto it : a)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;
}
