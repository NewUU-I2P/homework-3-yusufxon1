//void problemSolution1(float consumed_water) {
   // float cost;
#include <iostream>
using namespace std;

int main() {
int consumed_water;
double cost = 13;

cout << "Enter the water consumption in cubic metres : ";
    // write your code here
    if (consumed_water <= 30) {
        cost+ = consumed_water * 0.4;
    } else if (consumer_water <= 50){
        cost += 30 * 0.4 + (comsumed_water - 30) * 0.12;
            } else if (consumed_water <= 60) {
        cost += 30 * 0.4 + 20 * 0.12 + (consumed_water - 50) * 1.4;
    } else {
        cost += 30 * 0.4 + 20 * 0.12 + 10 * 1.4 + (consumed_water - 60) * 1.5;
    }
cout << "The total cost is: $" << cost <<endl;
    return cost;
}
