#include <iostream>
#include <string>

class User
{
    std::string m_username{};

public:
    void setName(std::string_view username)
    {
        m_username = username;
    }

    const std::string &username() const
    {
        return m_username;
    }
};

int main(int argc, char const *argv[])
{
    User user1{};
    user1.setName("Hemant");

    std::cout << user1.username() << "\n";
    return 0;
}
