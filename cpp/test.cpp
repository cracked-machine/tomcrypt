#include <iostream>
#include <tomcrypt.h>
#include <fstream>

#include <utils.hpp>

#define LTC_SHA3

int test_sha384()
{
    std::vector<uint8_t> d{0xDE, 0xED, 0xBE, 0xEF};
    std::filesystem::path p1("plaintext.bin");
    write_binary_file(p1, d);

    hash_state h;
    sha3_384_init(&h);
    sha3_process(&h, d.data(), d.size());
    std::vector<uint8_t> s(364/8);
    sha3_done(&h, s.data());

    std::filesystem::path p2("hashtext.bin");
    write_binary_file(p2, s);
    
    return 0;
}

int main()
{
    test_sha384();
}