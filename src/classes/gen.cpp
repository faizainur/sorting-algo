/* =================================
    Faiz Ainur Rofiq
    1706985956
    Teknik Komputer 2017
   ================================= */

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
        rlutil::setColor(COLOR_GREEN);
        std::cout << "Success writing to " << path << std::endl;
        rlutil::resetColor();
    }
    DATA_STREAM.clear();
}

bool Generator::write_to_file(std::string path){
    std::ofstream output;
    output.open(path, std::ios::out);

    if (!output){
        rlutil::setColor(COLOR_RED);
        std::cout << "Failed to make file" << std::endl;
        rlutil::resetColor();
        return false;
    }

    std::cout << "Generating..." << std::endl;
    for (int i = 0; i < DATA_STREAM.size(); ++i){
        output << DATA_STREAM.at(i) << std::endl;
    }
    output.close();
    return true;
}