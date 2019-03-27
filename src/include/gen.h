#include <fstream>
#include <iostream>
#include <vector>
#include <ctime>
#include "rlutil.h"

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

namespace UTS{
    class Generator {
        public:
            Generator();
            ~Generator();
            void generate(int count, std::string path);
        private:
            std::vector<int> DATA_STREAM;
            bool write_to_file(std::string path);
    };
}