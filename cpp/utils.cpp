

#include <utils.hpp>

int read_binary_file(std::filesystem::path &path, std::vector<uint8_t> &in)
{
    if (not std::filesystem::exists(path)) { return -1; }
    // open filestream and write to "in" param
    std::ifstream ifs(path, std::ios::in | std::ios::binary);
    in.assign((std::istreambuf_iterator<char>(ifs)), {});
    return 0;
}

int write_binary_file(std::filesystem::path &path, std::vector<uint8_t> &out)
{
    
    // open filestream and write to "in" param
    std::ofstream ofs(path, std::ios::out | std::ios::binary);
    std::copy(out.begin(), out.end(), std::ostreambuf_iterator<char>(ofs));
    return 0;
}