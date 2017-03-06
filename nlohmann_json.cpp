// Implement replacements for string functions missing from std

#include "json.hpp"

namespace nlohmann
{
namespace std_support
{

std::string to_string(int Value)
{
    std::ostringstream TempStream;
    TempStream << Value;
    return TempStream.str();
}
int stoi( const std::string& s )
{
    return strtol(s.c_str(),0,10);

}
}
}
