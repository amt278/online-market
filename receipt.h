#include <string>
#include <vector>

#define shipment 30;

using namespace std;

class receipt
{
private:
    int id; // = 0
    vector< pair<string/*name*/, int/*count*/> > product;
    string customerId;
    double totalPrice; // = 0
public:
    receipt();
    double getTotal();
    ~receipt();
};
