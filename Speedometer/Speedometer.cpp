#include <iostream>

int main()
{
    float speed = 0;
    float delta;
    do {
        std::cout << "Your speed = " << speed << "km/h. Enter a delta of speed: ";
        std::cin >> delta;
        speed += delta;
        if (speed > 150) {
            std::cout << "Max speed can't be higher 150 km/h!" << std::endl;
            speed = 150;
        }
    } while (speed - 0.1 > 0);
    std::cout << "You stopped.";
}
