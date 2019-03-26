#include <fstream>
#include <iostream>
#include <vector>
#include <ctime>

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