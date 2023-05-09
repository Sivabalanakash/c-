#include <iostream>
class Box {
public:
    int length;
    void setWidth(int width);
    int getWidth();
    int width;
};
void Box::setWidth(int width) {
    this->width = width;
}
int Box::getWidth() {
    return this->width;
}
int main() {
    Box box;
    std::cout << "Enter the Length of box: ";
    std::cin >> box.length;
    std::cout << "Enter the Width of box: ";
    int width;
    std::cin >> width;
    box.setWidth(width);
    std::cout << "Length of box: " << box.length << std::endl;
    std::cout << "Width of box: " << box.getWidth() << std::endl;
    return 0;
}
