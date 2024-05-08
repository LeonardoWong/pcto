#include <iostream>
#include <string>

class Myclass
{
    public:
    int num;
    std::string string;
};

int main()
{
    int x;
    Myclass blcprn;

    blcprn.num = 3;
    blcprn.string = "Nhgg";
    
    while(blcprn.num >= 3)
    {
        blcprn.num--;
        if(blcprn.num <= 0)
        {
            return 0;
        }

        std::cout << blcprn.num << std::endl;
    }
}