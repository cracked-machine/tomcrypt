#ifndef __UTILS_HPP__
#define __UTILS_HPP__

#include <filesystem>
#include <fstream>
#include <iostream>
#include <vector>

int read_binary_file(std::filesystem::path path, std::vector<uint8_t> &in);
int write_binary_file(std::filesystem::path &path, std::vector<uint8_t> &out);

#endif // __UTILS_HPP__