#include <iostream>
#include <string>

int simpleAsciiHash(const std::string& text) {
    int hashValue = 0;
    for (char c : text) {
        hashValue += static_cast<int>(c); // Chuyển char sang unsigned int
    }
    return hashValue;
}

int main() {
    std::string text = "Nguyen Van A";
    unsigned int hashValue = simpleAsciiHash(text);
    std::cout << "Giá trị băm của '" << text << "': " << hashValue << std::endl;
    return 0;
}