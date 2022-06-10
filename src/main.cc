//Header Files
#include <iostream>
#include <string>
#include <sstream>

//Constants
const std::string kTxt = ".txt";
const std::string kPng = ".png";

//Main Function
int main(int argc, char** argv){
    if (argc != 3){
        std::cerr << "[Usage]: ./bin/task_2 arg_1 arg_2"<<std::endl;
        return 1;
    }
    else{

        std::string extension_1;
        std::string extension_2;
        int filename_1 = 0; 
        int filename_2 = 0;

        std::stringstream file_1 {argv[1]};
        std::stringstream file_2 {argv[2]};

        file_1 >> filename_1 >> extension_1;

        file_2 >> filename_2 >> extension_2;

        int result = 0;

        if ((extension_1 == kTxt) && (extension_2 == kTxt)) {
            result = (filename_1 + filename_2) / 2;
            std::cout << result;
        }
        else if ((extension_1 == kPng) && (extension_2 == kPng)) {
            result = filename_1 + filename_2;
            std::cout << result;
        }
        else if ((extension_1 == kTxt) && (extension_2 == kPng)) {
            result = filename_1 % filename_2;
            std::cout << result;
        }
        else {
            std::cerr << "Incorrect Arguments." << std::endl;
            return 1;
        }
    }

    return 0;
}