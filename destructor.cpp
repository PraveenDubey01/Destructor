#include<iostream>
using namespace std;
class numeric
{
public:
    numeric()
    {
        cout<<"inside concstructor"<<endl;

    }
    ~numeric()
    {

        cout<<"inside destructor"<<endl;
    }
};
int main()
{
    numeric n1;
    return 0;
}
