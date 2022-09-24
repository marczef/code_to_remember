#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

class RGBToHex
{
public:
    static std::string rgb(int r, int g, int b);
};

std::string RGBToHex::rgb(int r, int g, int b)
{
    std::stringstream ss;
    for(auto* i : {&r,&g,&b})
    {
        if(*i<0)
        {
            *i = 0;
        }
        if(*i>255)
        {
            *i = 255;
        }
    }
    //g=std::clamp()
    ss << std::uppercase << std::hex << std::setfill('0') << std::setw(6) << (r << 16 | g << 8 | b );
    return ss.str();
}
int main()
{
    RGBToHex rgb;
    std::cout<<rgb.rgb(-20,275,125)<<std::endl;
}