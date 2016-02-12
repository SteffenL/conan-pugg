#include <pugg/Driver.h>
#include <pugg/Kernel.h>

#include <iostream>
#include <string>


class Test
{
public:
    Test() {}
    virtual ~Test() {}

    virtual std::string test() = 0;

    static const int version = 1;
    static const std::string server_name() {return "TestServer";}
};


class TestDriver : public pugg::Driver
{
public:
    TestDriver(std::string name, int version) : pugg::Driver(Test::server_name(), name, version) {}
    virtual Test* create() = 0;
};


int main()
{
    pugg::Kernel kernel;
    kernel.add_server(Test::server_name(), Test::version);
    return 0;
}
