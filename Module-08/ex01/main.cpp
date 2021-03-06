#include "Span.hpp"

int main( void ) {
    Span s(10);
    s.addNumber(-1);
    s.addNumber(-9);
    s.addNumber(4);
    s.addNumber(10);
    s.addNumber(5);
    s.addNumber(2);
    s.addNumber(3);
    s.addNumber(1);
    s.addNumber(-6);
    s.addNumber(7);
    std::cout << "shortestSpan: " << s.shortestSpan() << std::endl; // this should print 1
    std::cout << "longestSpan: " << s.longestSpan() << std::endl;   // this should print 19
    try {
        s.addNumber(11);
    }
    catch (std::exception & e) { // Full Span exception should be thrown here
        std::cout << e.what() << std::endl;
    }
    try {
        Span s2(10);
        s2.addNumber(69);
        s2.shortestSpan();
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl; // Empty Span exception should be thrown here
    }
    std::cout << "===================== HEAVY TEST =====================" << std::endl;
    Span s3(20000);
    srand(time(NULL));
    std::vector <int> vec(20000);
    for (int i = 0; i < 20000; i++) {
        vec.push_back(rand());
    }
    s3.addRange(vec.begin(), vec.end());
    std::cout << "shortestSpan: " << s3.shortestSpan() << std::endl;
    std::cout << "longestSpan: " << s3.longestSpan() << std::endl;
}