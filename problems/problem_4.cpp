#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::string result;
    if (macAdress[0] == 'F' and macAdress[1] == 'F') {
        result = "Broadcast";
    } else {
        switch (macAdress[1]){
            case 'E' :
            case 'C' :
            case 'A' :
            case '8' :
            case '6' :
            case '4' :
            case '2' :
            case '0' :
                result = "Unicast";
                break;
            case 'F' :
            case 'D' :
            case 'B' :
            case '9' :
            case '7' :
            case '5' :
            case '3' :
            case '1' :
                result = "Multicast";
                break;
        }
    }
                
    
    return result;

    // make use of control flow statements
    // return result;
}
