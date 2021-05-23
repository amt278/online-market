#include <list>
#include <string>
#include "product.h"

using namespace std;

class user
{
private:
    int id;
    string name;
    string email;
    string address;
    int phoneNumber;
    list<product> cart;
public:
    user(string id, string name, string email, string address, string phoneNumber);
    void sell(product product);
    void buy(product product);
    ~user();
};