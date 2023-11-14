#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::string result;
    if (macAdress[0] == 'F' and macAdress[1] == 'F') {
        result = "Broadcast";
    } else if ((int)macAdress[1] % 2 ==0) {
        result = "Unicast";
    } else {
        result = "Multicast" ;
    }
    return result;

    // make use of control flow statements
    // return result;
}
