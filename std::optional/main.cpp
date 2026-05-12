#include <iostream>
#include <optional>

std::optional<int> getValue(bool shouldGet)
{
    if (shouldGet)
    {
        return 5;
    }

    return {};
}

int main(int argc, char const *argv[])
{
    std::optional<int> result{getValue(true)};
    if (result)
    {
        std::cout << "result from optional return is " << *result << "\n";
        std::cout << "result from optional return is " << result.value() << "\n";
    }

    result = getValue(false);

    if (!result)
    {
        std::cout << "Optional result has no value\n";
    }

    result = std::nullopt;
    if (!result)
    {
        std::cout << "Optional result has no value\n";
    }

    return 0;
}
