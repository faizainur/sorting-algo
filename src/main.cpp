#include <iostream>
#include <cstdio>
#include <array>
#include "rlutil.h"
#include "sort.h"

int show_menu();
void sort(int sorting_mode, std::string in, std::string out);
void print_array();

int main(int argc, char** argv){
    int sorting_mode, opmode;
    std::string in_path, out_path;
    std::array<std::string, 6> args;
    UTS::sort sorter;
    // std::cout << argc;
    if (argc > 1) {
        if (argc == 7){
            for (int i = 1; i < argc; ++i){
                args[i - 1] = argv[i];
            }
            std::array<std::string, 6>::iterator it;
            for (it = args.begin(); it != args.end(); it++){
                if ((*it).compare("--mode") == 0|| (*it).compare("-m") == 0){
                    std::string buff = *(it + 1);
                    if ((int)buff[0] >= 48 && (int)buff[0] <= 57){
                        sorting_mode = std::stoi(buff);
                    }
                }
                if ((*it).compare("--input") == 0|| (*it).compare("-i") == 0){
                    in_path = *(it + 1);
                }
                if ((*it).compare("--output") == 0|| (*it).compare("-o") == 0){
                    out_path = *(it + 1);
                }
            }
        
            std::cout << "Input          : " << in_path << std::endl;
            std::cout << "Output         : " << out_path << std::endl;
            std::cout << "Sorting method : ";
            switch (sorting_mode)
            {
                case 1: std::cout << "Merged Sort" << std::endl; break;
                case 2: std::cout << "Quick Sort" << std::endl; break;
                case 3: std::cout << "Heap Sort" << std::endl; break;
                case 4: std::cout << "Insertion Sort" << std::endl; break;
                case 5: std::cout << "Bucket Sort" << std::endl; break;
                case 6: std::cout << "Radix Sort" << std::endl; break;
                case 7: std::cout << "Counting Sort" << std::endl; break;
                case 8: std::cout << "Bubble Sort" << std::endl; break;
                default:
                    rlutil::setColor(COLOR_RED);
                    std::cout << sorting_mode << " (Invalid)\n" << std::endl;
                    std::cout << "Invalid sorting method." << std::endl;
                    rlutil::resetColor();
                    return EXIT_FAILURE;
            }
            rlutil::setColor(COLOR_GREEN);
            std::cout << "\nValid arguments." << std::endl;            
            sort(sorting_mode, in_path, out_path);
        }
        else if (argc != 7) {
            std::cout << "Incomplete arguments !!!" << std::endl;
            return EXIT_FAILURE;
        }  
       
    }
    else {
        while (opmode > 0) {
            opmode = show_menu();
        }
    }
    
    return EXIT_SUCCESS;
}



/* BUG Appeared */
int show_menu(){
    int opmode;
    std::string in, filename, out_path;

    // Check if linux or Windows
    #if __linux__
        system("clear");
    #elif __MINGW32__
        system("cls");
    #elif __CYGWIN32__
        system("cls");
    #elif _WIN32
        system("cls");
    #endif
    
    printf("#============================#\n");
    printf("#       SORTING PROGRAM      #\n");
    printf("#============================#\n\n");
    printf("Sorting method : ");
    printf("\n\t[1] Merged Sort\n\t[2] Quick Sort\n\t[3] Heap Sort\n\t[4] Insertion Sort");
    printf("\n\t[5] Bucket Sort\n\t[6] Radix Sort\n\t[7] Counting Sort\n\t[8] Bubble Sort");
    printf("\n\t[0] Exit program\nSelect : ");
     std::cin >> opmode;

    
    if (opmode == 0){
        return opmode;
    }
    printf("Input file : ");
    std::cin >> in;
    printf("\nOutput path : ");
    std::cin >> out_path;
    std::cout << out_path;
    
   
    if (opmode != 0) sort(opmode, in, out_path);
    
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

    return opmode;
}

void sort(int sorting_mode, std::string in, std::string out){
    UTS::sort sorter;
    switch (sorting_mode)
        {
            case 1:
                sorter.merged_sort(in, out);
                break;
            case 2:
                sorter.quick_sort(in, out);
                break;
            case 3:
                sorter.heap_sort(in, out);
                break;
            case 4:
                sorter.insertion_sort(in, out);
                break;
            case 5:
                sorter.bucket_sort(in, out);
                break;
            case 6:
                sorter.radix_sort(in, out);
                break;
            case 7:
                sorter.counting_sort(in, out);
                break;
            case 8:
                sorter.bubble_sort(in, out);
                break;
            default:
                break;
        }
}