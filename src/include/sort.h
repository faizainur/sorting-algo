#include <iostream>
#include <vector>
#include <fstream>
#include <stdexcept>

namespace UTS {
    class sort{
        public:
            sort();
            ~sort();

            /* Sorting method */
            bool quick_sort(std::string input_path, std::string output_path);
            bool merged_sort(std::string input_path, std::string output_path);
            bool heap_sort(std::string input_path, std::string output_path);
            bool insertion_sort(std::string input_path, std::string output_path);
            bool bucket_sort(std::string input_path, std::string output_path);
            bool radix_sort(std::string input_path, std::string output_path);
            bool counting_sort(std::string input_path, std::string output_path);
            bool bubble_sort(std::string input_path, std::string output_path);
            /* =============== */

        private:
            int count;
            std::vector<int> DATA_STREAM;
            bool load_data(std::string path_to_file);
            bool write_to_file(std::string path);

            
    };
}