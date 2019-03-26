#include "sort.h"

using namespace UTS;

sort::sort(){
    // Constructor
    
}

sort::~sort(){
    // Deconstructor
}

bool sort::load_data(std::string path ){
    std::fstream input;
    input.open(path, std::ios::in);

    if (!input){
        std::cout << "Failed to read file " << path << std::endl;
        return false;
    }

    std::string line;
    while(input.is_open() && !input.eof()){
        getline(input, line);
        DATA_STREAM.push_back(std::stoi(line));
    }   
    input.close();
    return true;
}

bool sort::save_data(std::string path){
    bool status;
    
    return status;
}

void sort::bubble_sort(){

}

void sort::bucket_sort(){

}

void sort::counting_sort(){
    
}

void sort::heap_sort(){

}

void sort::insertion_sort(){

}

void sort::merged_sort(){

}

void sort::quick_sort(){

}

void sort::radix_sort(){

}

