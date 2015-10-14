//=======================================================================
// Copyright (c) 2014-2015 Baptiste Wicht
// Distributed under the terms of the MIT License.
// (See accompanying file LICENSE or copy at
//  http://opensource.org/licenses/MIT)
//=======================================================================

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <memory>

#include "cpp_utils/string.hpp"

#include "dll/processor/processor.hpp"

namespace dllp {

bool starts_with(const std::string& str, const std::string& search);

std::string extract_value(const std::string& str, const std::string& search);

std::string unit_type(const std::string& unit);

std::string activation_function(const std::string& unit);

std::string decay_to_str(const std::string& decay);

bool valid_unit(const std::string& unit);

bool valid_activation(const std::string& unit);

std::vector<std::string> read_lines(const std::string& source_file);

} //end of namespace dllp
