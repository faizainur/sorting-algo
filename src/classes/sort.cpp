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
        rlutil::setColor(COLOR_RED);
        std::cout << "Failed to read file " << path << std::endl;
        return false;
    }

    std::string line;
    while(input.is_open() && getline(input, line)){
        // getline(input, line);
        std::cout << line << std::endl;
        // int buff = std::stoi(line);
        // DATA_STREAM.push_back(buff);
    }
      
    input.close();
    return true;
}

bool sort::write_to_file(std::string path){
    std::fstream output;
    output.open(path, std::ios::out);

    if (!output){
        rlutil::setColor(COLOR_RED);
        std::cout << "Failed to make file" << std::endl;
        return false;
    }

    std::cout << "Writing to file" << std::endl;
    for (int i = 0; i < DATA_STREAM.size(); ++i){
        output << DATA_STREAM.at(i) << std::endl;
    }
    
    rlutil::setColor(COLOR_GREEN);
    std::cout << "Success writing to " << path << std::endl;
    DATA_STREAM.clear();
    output.close();

    return true;
}

// void print_array(){
//     std::vector<int>::iterator it;
//     for (it = )
// }

int sort::bubble_sort(std::string input_path, std::string output_path){
    if (!load_data(input_path)){
        return EXIT_FAILURE;
    }
    std::vector<int> b;
    /* Sorting algorithm */
    for (int i = 0; i < DATA_STREAM.size() - 1; i++){
        for (int j = 0; j < DATA_STREAM.size() - i - 1; j++){
            int buff;
            if (DATA_STREAM.at(j) > DATA_STREAM.at(j + 1)){
                buff = DATA_STREAM.at(j + 1);
                DATA_STREAM.at(j + 1) = DATA_STREAM.at(j);
                DATA_STREAM.at(j) = buff;
            }
        }
    }
    /* ================= */

    if (!write_to_file(output_path)){
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

int sort::bucket_sort(std::string input_path, std::string output_path){
    if (!load_data(input_path)){
        return EXIT_FAILURE;
    }

    /* Sorting algorithm */


    /* ================= */

    if (!write_to_file(output_path)){
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

int sort::counting_sort(std::string input_path, std::string output_path){
    if (!load_data(input_path)){
        return EXIT_FAILURE;
    }

    /* Sorting algorithm */


    /* ================= */

    if (!write_to_file(output_path)){
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

int sort::heap_sort(std::string input_path, std::string output_path){
    if (!load_data(input_path)){
        return EXIT_FAILURE;
    }

    /* Sorting algorithm */


    /* ================= */

    if (!write_to_file(output_path)){
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

int sort::insertion_sort(std::string input_path, std::string output_path){
    if (!load_data(input_path)){
        return EXIT_FAILURE;
    }

    /* Sorting algorithm */


    /* ================= */

    if (!write_to_file(output_path)){
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

int sort::merged_sort(std::string input_path, std::string output_path){
    if (!load_data(input_path)){
        return EXIT_FAILURE;
    }

    /* Sorting algorithm */


    /* ================= */

    if (!write_to_file(output_path)){
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

int sort::quick_sort(std::string input_path, std::string output_path){
    if (!load_data(input_path)){
        return EXIT_FAILURE;
    }

    /* Sorting algorithm */


    /* ================= */

    if (!write_to_file(output_path)){
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

int sort::radix_sort(std::string input_path, std::string output_path){
    if (!load_data(input_path)){
        return EXIT_FAILURE;
    }

    /* Sorting algorithm */


    /* ================= */

    if (!write_to_file(output_path)){
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

