#ifndef WWTOOLS_W3SC_HPP
#define WWTOOLS_W3SC_HPP

#include <string>
#include <vector>

#include "kaitai/structs/w3sc.h"
#include "kaitai/kaitaistream.h"

namespace wwtools::w3sc {
std::string get_info(const std::string &indata);
void create(const std::vector<std::pair<std::string, std::string>>& files, std::ostream& os);
} // namespace wwtools::w3sc

#endif // WWTOOLS_W3SC_HPP