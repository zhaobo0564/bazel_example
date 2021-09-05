#include <glog/logging.h>
#include <iostream>

int main(int argc, char* argv[]) {
   // std::cout << "YES" << endl;
    // Initialize Google’s logging library.
    google::InitGoogleLogging(argv[0]);

    // ...
    LOG(ERROR) << "Found "<< " cookies";
   
}
