/* =================================
    Faiz Ainur Rofiq
    1706985956
    Teknik Komputer 2017
   ================================= */

#include <iostream>
#include <vector>
#include <fstream>
#include <stdexcept>
#include <sstream>
#include "rlutil.h"
#include <time.h>


#define COLOR_BLACK 0
#define COLOR_BLUE 1
#define COLOR_GREEN 2
#define COLOR_CYAN 3
#define COLOR_RED 4
#define COLOR_MAGENTA 5
#define COLOR_BROWN 6
#define COLOR_LIGHT_GRAY 7
#define COLOR_GREY 8
#define COLOR_LIGHT_BLUE 9
#define COLOR_LIGHT_GREEN 10
#define COLOR_LIGHT_CYAN 11
#define COLOR_LIGHT_RED 12
#define COLOR_LIGHT_MAGENTA 13
#define COLOR_YELLOW 14
#define COLOR_WHITE 15

namespace UTS {
    class sort{
        public:
            sort();
            ~sort();

            /* Sorting method */
            int quick_sort(std::string input_path, std::string output_path);
            int merged_sort(std::string input_path, std::string output_path);
            int heap_sort(std::string input_path, std::string output_path);
            int insertion_sort(std::string input_path, std::string output_path);
            int bucket_sort(std::string input_path, std::string output_path);
            int radix_sort(std::string input_path, std::string output_path);
            int counting_sort(std::string input_path, std::string output_path);
            int bubble_sort(std::string input_path, std::string output_path);
            /* =============== */


        private:
            int count;
            std::vector<int> DATA_STREAM;
            bool write_to_file(std::string path);
            bool load_data(std::string path_to_file);


            
    };
}