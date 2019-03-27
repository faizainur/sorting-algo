/* =================================
    Faiz Ainur Rofiq
    1706985956
    Teknik Komputer 2017
   ================================= */

#include "gen.h"

int main(int argc, char** argv){
    UTS::Generator generator;

    std::string buff = argv[1];
    int count = std::stoi(buff);
    generator.generate(count, argv[2]);
    return 0;
}