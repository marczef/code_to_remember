#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

class PrimeDecomp
{
public:
    static std::string factors(int lst);
};

std::string PrimeDecomp::factors(int lst)
{
    std::vector<int> pom;
    std::string res="";
    int k=2;
    while(lst>1)
    {
        if(lst%k==0)
        {
            res+="("+std::to_string(k);
            int licznik=0;
            while(lst%k==0)
            {
                pom.push_back(k);
                licznik++;
                lst/=k;
            }
            if(licznik>1)   res+="**"+std::to_string(licznik)+")";
            else res+=")";
        }
        ++k;
    }
    return res;
}

int main()
{
    PrimeDecomp pa;
    std::cout<<pa.factors(86240);

}