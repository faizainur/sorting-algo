/* =================================
    Faiz Ainur Rofiq
    1706985956
    Teknik Komputer 2017
   ================================= */

#include <iostream>
#include <cstdio>
#include <array>
#include "rlutil.h"
#include "sort.h"

/* Function protoypes */
int show_menu();
void sort(int sorting_mode, std::string in, std::string out);
int help();
void clear_screen();
void wait_key();

int main(int argc, char** argv){

    int sorting_mode, opmode {1};            
    std::string in_path, out_path;       // Creating object string
    std::array<std::string, 6> args;     // Creating object array to store arguments inputed by user

    /* Checking if there are any arguments inputed by users */
    if (argc > 1) {
        if (argc == 7){        // Checking how many arguments available
            /* Storing arguments to object array */                                                      
            for (int i = 1; i < argc; ++i){                                            
                args[i - 1] = argv[i];
            }

            std::array<std::string, 6>::iterator it;        // Creating iterator to access STL object

            /*  
                Usage    : sorting [Options1] [value] [Options2] [value] [Options3] [value]

                Options  :  --input    -i        for assign any text based files as input
                            --output   -o        Creating new text based files as output file, 
                                                 this file will contain the result of the process
                            --mode     -m        Choosing the method of sorting
                
                Sorting method:
                    No   | Method Name
                    1      Merged Sort
                    2      Quick Sort
                    3      Heap Sort
                    4      Insertion Sort
                    5      Bucket Sort
                    6      Radix Sort
                    7      Counting Sort
                    8      Bubble Sort
                
                example  : 
                    ./sorting --mode 2 --input text.txt --ouput result.txt         ==> Linux based
                    ./sorting -o result.txt -m 3 -i text.txt                       ==> Linux based
                    
                    sorting.exe -i result.txt --mode 8 --input text.txt            ==> Windows
                    sorting -m 5 --output result.txt -i text.txt                   ==> Windows
                
            */
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

            // Printing the value inputed by user to console screen
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
                    // If the the value of mode option invalid, then exit program
                    rlutil::setColor(COLOR_RED);
                    std::cout << sorting_mode << " (Invalid)\n" << std::endl;
                    std::cout << "Invalid sorting method." << std::endl;
                    rlutil::resetColor();
                    return EXIT_FAILURE;
            }
            rlutil::setColor(COLOR_GREEN);
            std::cout << "\nValid arguments." << std::endl; 
            rlutil::resetColor();           
            sort(sorting_mode, in_path, out_path);
        } else if (argc == 2) {
            std::string buff = argv[1];
            if (buff.compare("--help") == 0 || buff.compare("-h") == 0){
                help();
            }
        }
        else {                 // if the arguments inputed by user less than 7
            std::cout << "Incomplete arguments !!!" << std::endl;
            return EXIT_FAILURE;
        }  
    }
    else {    // if there are no arguments available, then start the menu
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

    clear_screen();
    
    // system("clear");
    /* ======================================= MENU ============================================ */
    printf("#============================#\n");
    printf("#       SORTING PROGRAM      #\n");
    printf("#============================#\n\n");
    printf("Sorting method : ");
    printf("\n\t[1] Merged Sort\n\t[2] Quick Sort\n\t[3] Heap Sort\n\t[4] Insertion Sort");
    printf("\n\t[5] Bucket Sort\n\t[6] Radix Sort\n\t[7] Counting Sort\n\t[8] Bubble Sort");
    printf("\n\t[9] Help\n\t[0] Exit program\nSelect : ");
    std::cin >> opmode;
    
    if (opmode == 0){      // if user choose to exit program [0], then exit program
        return opmode;
    } else if (opmode == 9){
        help();
        return opmode;
    } else if (opmode > 9) std::cout << "Invalid option, please refer to the list"
                            << std::endl; wait_key(); return opmode;

    /* if user chose one of sorting methods available */
    printf("Input file : ");
    std::cin >> in;
    printf("\nOutput path : ");
    std::cin >> out_path;
    std::cout << out_path;
    
    // Run sorting algorithm
    if (opmode != 0) sort(opmode, in, out_path);
    
    // Check OS
    
    
    return opmode;
}

void clear_screen(){
      // Check OS to decide which command to run
    #if __linux__          // if linux based
        system("clear");
    #elif __MINGW32__      // if Windows and the program compiled using MinGW compiler
        system("cls");
    #elif __CYGWIN32__     // if Windows and the program compiled using CYGWIN compiler
        system("cls");
    #elif _WIN32           // if Windows and the program compiled using MVC
        system("cls");
    #endif
}

void wait_key(){
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

void sort(int sorting_mode, std::string in, std::string out){
    UTS::sort sorter;                    // Creating new object of UTS::sort class
    switch (sorting_mode)                // Based on the user input will decide which sorting method to run
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

int help(){
    std::ifstream help_file;
    help_file.open("help.txt");

    if (!help_file){
        rlutil::setColor(COLOR_RED);
        std::cout << "Error loading help file" << std::endl;
        rlutil::resetColor();
        return EXIT_FAILURE;
    }

    std::string line;
    while (getline(help_file, line)){
        std::cout << line << std::endl;
    }

    // Check OS
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
    help_file.close();

    return EXIT_SUCCESS;
}