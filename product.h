#include <string>

using namespace std;

class product {
private:
    int id;
    string name;
    double price;
    string category;
    int sellerId;
    int count;
    bool approved;
public:
    product(string id, string name, double price, string category, string sellerId, int count, bool approved);
    ~product();
};