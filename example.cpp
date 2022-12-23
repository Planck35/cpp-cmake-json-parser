#include "json/json.h"
#include <fstream>
#include <iostream>
#include "config.h"

int main() {
  Json::Value root;
  std::ifstream ifs;
  std::string source_dir(PROJECT_SOURCE_DIR);
  ifs.open(source_dir + "/data.json");

  Json::CharReaderBuilder builder;
  builder["collectComments"] = true;
  JSONCPP_STRING  errs;
  if (!parseFromStream(builder, ifs, &root, &errs)) {
    std::cout << errs << std::endl;
    return EXIT_FAILURE;
  }

  std::cout << "Root size:" << root.size() << std::endl;

  std::cout << "World MVP:" << root["World MVP"] << std::endl;

  std::cout << "Year:" << root["Year"] << std::endl;
  return EXIT_SUCCESS;
}