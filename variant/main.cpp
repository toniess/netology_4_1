#include <iostream>
#include <vector>
#include <variant>
#include <ctime>

std::variant<int, std::string, std::vector<int>> get_variant() {
    std::srand(std::time(nullptr));
    int random_variable = std::rand() % 3;

    std::variant<int, std::string, std::vector<int>> result;
    switch (random_variable)
    {
    case 0:
        result = 5;
        break;
    case 1:
        result = "string";
        break;
    case 2:
        result = std::vector<int>{ 1, 2, 3, 4, 5 };
        break;
    default:
        break;
    }
    return result;
}

int main()
{
    auto v = get_variant();
    if (std::holds_alternative<int>(v))
    {
        std::cout << std::get<int>(v) * 2 << std::endl;
    }
    else if (std::holds_alternative<std::string>(v))
    {
        std::cout << std::get<std::string>(v) << std::endl;
    }
    else if (std::holds_alternative<std::vector<int>>(v))
    {
        auto arr = std::get<std::vector<int>>(v);
        for(auto it : arr)
        {
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }
}
