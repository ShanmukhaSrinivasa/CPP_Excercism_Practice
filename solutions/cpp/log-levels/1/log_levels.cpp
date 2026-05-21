#include <string>

namespace log_line {

std::string message(std::string line) {
    // 1. Find where the structural separation ": " happens
    size_t delimiter_pos = line.find(": ");
    
    // 2. The message starts right AFTER ": " (which is position + 2 characters)
    // Providing just the starting index tells substr() to grab everything until the very end
    return line.substr(delimiter_pos + 2);
}

std::string log_level(std::string line) {
    // 1. Find the position of the brackets
    size_t start = line.find("[");
    size_t end = line.find("]");
    
    // 2. Extract the word in between. 
    // The length of the word is equal to (end_index - start_index - 1)
    return line.substr(start + 1, end - start - 1);
}

std::string reformat(std::string line) {
    // 1. Reuse your existing methods to grab the clean components
    std::string clean_message = message(line);
    std::string level = log_level(line);
    
    // 2. Glue them together in the new format
    return clean_message + " (" + level + ")";
}

}  // namespace log_line