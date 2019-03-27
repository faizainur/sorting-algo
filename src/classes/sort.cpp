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

bool sort::write_to_file(std::string path){
    std::fstream output;
    output.open(path, std::ios::out);

    if (!output){
        std::cout << "Failed to make file" << std::endl;
        return false;
    }

    std::cout << "Writing to file" << std::endl;
    for (int i = 0; i < DATA_STREAM.size(); ++i){
        output << DATA_STREAM.at(i) << std::endl;
    }
    
    std::cout << "Success writing to " << path << std::endl;
    DATA_STREAM.clear();
    output.close();

    return true;
}

bool sort::bubble_sort(std::string input_path, std::string output_path){
    if (!load_data(input_path)){
        return false;
    }

    /* Sorting algorithm */


    /* ================= */

    if (!write_to_file(output_path)){
        return false;
    }
    return true;
}

bool sort::bucket_sort(std::string input_path, std::string output_path){
    if (!load_data(input_path)){
        return false;
    }

    /* Sorting algorithm */


    /* ================= */

    if (!write_to_file(output_path)){
        return false;
    }
    return true;
}

bool sort::counting_sort(std::string input_path, std::string output_path){
    if (!load_data(input_path)){
        return false;
    }

    /* Sorting algorithm */


    /* ================= */

    if (!write_to_file(output_path)){
        return false;
    }
    return true;
}

bool sort::heap_sort(std::string input_path, std::string output_path){
    if (!load_data(input_path)){
        return false;
    }

    /* Sorting algorithm */


    /* ================= */

    if (!write_to_file(output_path)){
        return false;
    }
    return true;
}

bool sort::insertion_sort(std::string input_path, std::string output_path){
    if (!load_data(input_path)){
        return false;
    }

    /* Sorting algorithm */


    /* ================= */

    if (!write_to_file(output_path)){
        return false;
    }
    return true;
}

bool sort::merged_sort(std::string input_path, std::string output_path){
    if (!load_data(input_path)){
        return false;
    }

    /* Sorting algorithm */


    /* ================= */

    if (!write_to_file(output_path)){
        return false;
    }
    return true;
}

bool sort::quick_sort(std::string input_path, std::string output_path){
    if (!load_data(input_path)){
        return false;
    }

    /* Sorting algorithm */


    /* ================= */

    if (!write_to_file(output_path)){
        return false;
    }
    return true;
}

bool sort::radix_sort(std::string input_path, std::string output_path){
    if (!load_data(input_path)){
        return false;
    }

    /* Sorting algorithm */


    /* ================= */

    if (!write_to_file(output_path)){
        return false;
    }
    return true;
}

