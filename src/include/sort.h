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
            void quick_sort();
            void merged_sort();
            void heap_sort();
            void insertion_sort();
            void bucket_sort();
            void radix_sort();
            void counting_sort();
            void bubble_sort();
            /* =============== */

        private:
            int count;
            std::vector<int> DATA_STREAM;
            bool load_data(std::string path_to_file);
            bool save_data(std::string path);

            
    };
}