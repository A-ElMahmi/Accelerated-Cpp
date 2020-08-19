#ifndef GUARD_pictureframe
#define GUARD_pictureframe

#include <vector>
#include <string>


std::vector<std::string> split(const std::string&);
std::vector<std::string> frame(const std::vector<std::string>&);
std::vector<std::string> vcat(const std::vector<std::string>&, const std::vector<std::string>&);
std::vector<std::string> hcat(const std::vector<std::string>&, const std::vector<std::string>&);


#endif