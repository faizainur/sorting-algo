/* =================================
    Faiz Ainur Rofiq
    1706985956
    Teknik Komputer 2017
   ================================= */

#include "gen.h"
void help();
int main(int argc, char** argv){
    UTS::Generator generator;

    if (argc > 1){
        std::string buff = argv[1];
        if (argc == 3){
            std::string buff = argv[1];
            int count = std::stoi(buff);
            generator.generate(count, argv[2]);
        } else if (buff.compare("--help") == 0 || buff.compare("-h")) {
            help();
            return EXIT_FAILURE;
        } else {
            std::cout << "Incompleate arguments\nPlease use options [--help] or [-h] to open help" << std::endl;
        }
    } else {
        help();
    }
    return EXIT_SUCCESS;
}

void help(){
    printf("Usage   : generator [how many] [output file including path]\n");
    printf("Options : --help   -h    Open help file\n");
}