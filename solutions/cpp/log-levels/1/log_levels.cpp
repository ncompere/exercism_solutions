#include <string>

namespace log_line {
std::string message(std::string line) {
    std::string::size_type message_index{line.find(":")};
    std::string message_from_line{line.substr(message_index+2)};
    return message_from_line;
}

std::string log_level(std::string line) {
    std::string::size_type log_level_end_index{line.find("]")};
    std::string log_level_from_line{line.substr(1,log_level_end_index-1)};
    return log_level_from_line;
}

std::string reformat(std::string line) {
    std::string reformated_line{log_line::message(line) + " (" + log_line::log_level(line) + ")"};
    return reformated_line;
}
}  // namespace log_line
