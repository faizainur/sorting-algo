/* =================================
    Faiz Ainur Rofiq
    1706985956
    Teknik Komputer 2017
   ================================= */

#include "sort.h"

using namespace UTS;

sort::sort(){
    // Constructor
    
}

sort::~sort(){
    // Deconstructor
}

bool sort::load_data(std::string path ){
        std::ifstream input;
    input.open(path);

    if (!input){
        rlutil::setColor(COLOR_RED);
        std::cout << "Cannot find " << path << std::endl;
        #if __linux__
        rlutil::resetColor();
        #elif _MINGW32_
            rlutil::setColor(COLOR_WHITE);
        #elif _CYGWIN32_
            rlutil::setColor(COLOR_WHITE);
        #elif _WIN32
            rlutil::setColor(COLOR_WHITE);
        #endif
        wait_key();
        return false;
    }
    std::string line;
   while (std::getline(input, line)){
       DATA_STREAM.push_back(std::stoi(line));
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

    std::cout << "Writing to file..." << std::endl;
    for (int i = 0; i < DATA_STREAM.size(); ++i){
        output << DATA_STREAM.at(i) << std::endl;
    }
    
    rlutil::setColor(COLOR_GREEN);
    std::cout << "Success writing to " << path << std::endl;
    #if __linux__
        rlutil::resetColor();
    #elif _MINGW32_
        rlutil::setColor(COLOR_WHITE);
    #elif _CYGWIN32_
        rlutil::setColor(COLOR_WHITE);
    #elif _WIN32
        rlutil::setColor(COLOR_WHITE);
    #endif


    DATA_STREAM.clear();
    output.close();
    
    return true;
}

int sort::bubble_sort(std::string input_path, std::string output_path){
    clock_t tStart = clock();
    if (!load_data(input_path)){
        return EXIT_FAILURE;
    }

    std::cout << "Sorting in process..." << std::endl;
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

    // Printing the time taken to sort
    rlutil::setColor(COLOR_YELLOW);
    printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    #if __linux__
        rlutil::resetColor();
    #elif _MINGW32_
        rlutil::setColor(COLOR_WHITE);
    #elif _CYGWIN32_
        rlutil::setColor(COLOR_WHITE);
    #elif _WIN32
        rlutil::setColor(COLOR_WHITE);
    #endif

    /* ================= */

    if (!write_to_file(output_path)){
        return EXIT_FAILURE;
    }
    DATA_STREAM.clear();
    wait_key();
    return EXIT_SUCCESS;
}



void sort::do_quicksort(std::vector<int> &vec, int L, int R) {
    int i, j, mid, piv;
    i = L;
    j = R;
    mid = L + (R - L) / 2;
    piv = vec[mid];

    while (i<R || j>L) {
        while (vec[i] < piv)
            i++;
        while (vec[j] > piv)
            j--;

        if (i <= j) {
            swap(vec, i, j); //error=swap function doesnt take 3 arguments
            i++;
            j--;
        }
        else {
            if (i < R)
                do_quicksort(vec, i, R);
            if (j > L)
                do_quicksort(vec, L, j);
            return;
        }
    }
}

void sort::swap(std::vector<int>& v, int x, int y) {
    int temp = v[x];
    v[x] = v[y];
    v[y] = temp;

}
/* TODO */
int sort::quick_sort(std::string input_path, std::string output_path){
        clock_t tStart = clock();

    if (!load_data(input_path)){
        return EXIT_FAILURE;
    }

    /* Sorting algorithm */
    do_quicksort(DATA_STREAM, 0, DATA_STREAM.size() - 1);
    // Printing the time taken to sort
    rlutil::setColor(COLOR_YELLOW);
    printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    rlutil::resetColor();
    /* ================= */

    if (!write_to_file(output_path)){
        return EXIT_FAILURE;
    }
    wait_key();
    return EXIT_SUCCESS;
}

void sort::wait_key(){
    #if __linux__
        std::cin.ignore(1024, '\n');
        std::cout << "Press enter to continue...";
        std::cin.get();
    #elif _MINGW32_
        system("pause");
    #elif _CYGWIN32_
        system("pause");
    #elif _WIN32
        system("pause");
    #endif
}




