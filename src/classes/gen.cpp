#include "gen.h"

using namespace UTS;

Generator::Generator(){
    // Constructor
    /* TODO : Add necessery code */

    srand(time(0));
}

Generator::~Generator(){
    // Deconstrcutor
    /* TODO : Add necessery code */
}

void Generator::generate(int count, std::string path){
    int num;
    for (int i = 0; i < count; ++i){
        num = rand() % 101;
        DATA_STREAM.push_back(num);
    }
    if (!Generator::write_to_file(path)){
        std::cout << "Failed writing to " << path << std::endl;
    } else {
        std::cout << "Success writing to " << path << std::endl;
    }
    DATA_STREAM.clear();
}

bool Generator::write_to_file(std::string path){
    std::ofstream output;
    output.open(path, std::ios::out);

    if (!output){
        std::cout << "Failed to make file" << std::endl;
        return false;
    }

    std::cout << "Generating..." << std::endl;
    for (int i = 0; i < DATA_STREAM.size(); ++i){
        output << DATA_STREAM.at(i)<<std::endl;
    }
    output.close();
    return true;
}