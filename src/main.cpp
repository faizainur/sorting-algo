#include <iostream>
#include "sort.h"

int main(int argc, char** argv){
    UTS::sort sorter;
    int sorting_mode;
    std::string in_path, out_path;
    if (argc > 1) {
        for (int i = 1; i < argc; ++i){
            if (argv[i] == "--mode" || argv[i] == "-m"){
                sorting_mode = std::stoi(argv[i + 1]);
                if (sorting_mode <= 0){
                    std::cout << "Wrong argument" << std::endl;
                    return EXIT_FAILURE;
                }
            }
            else if (argv[i] == "--input" || argv[i] == "-m"){
                in_path == argv[i + 1];
            }
            else if (argv[i] == "--output" || argv[i] == "-m"){
                out_path == argv[i + 1];
            }
            else {
                if (argc != 4){
                    std::cout << "Incomplete argument !!!" << std::endl;
                }
                return EXIT_FAILURE;
            }
        }
        switch (sorting_mode)
        {
            case 1:
                sorter.merged_sort(in_path, out_path);
                break;
            case 2:
                sorter.quick_sort(in_path, out_path);
                break;
            case 3:
                sorter.heap_sort(in_path, out_path);
                break;
            case 4:
                sorter.insertion_sort(in_path, out_path);
                break;
            case 5:
                sorter.bucket_sort(in_path, out_path);
                break;
            case 6:
                sorter.radix_sort(in_path, out_path);
                break;
            case 7:
                sorter.counting_sort(in_path, out_path);
                break;
            case 8:
                sorter.bubble_sort(in_path, out_path);
                break;
            default:
                break;
        }
    }

    return EXIT_SUCCESS;
}