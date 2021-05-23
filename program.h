#include "user.h"
#include <list>
#include "product.h"

class program
{
private:
    list<user> users;
    list<product> products;
public:
    program(/* args */);
    void login();
    void signup();
    void showProducts(string category);
    ~program();
};

