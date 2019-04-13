
#ifndef __INCLUDE_OPTS_HPP__
#define __INCLUDE_OPTS_HPP__

#include <string>
#include <vector>

struct command_line_opts {
  unsigned verbosity = 0;
  bool interactive = false;
  std::vector<std::string> file_paths;
};

bool parse_command_line_opts(int argc, char *argv[]);

#endif // __INCLUDE_OPTS_HPP__
