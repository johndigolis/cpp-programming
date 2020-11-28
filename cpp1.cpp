//test!!
#include <iostream>
#include <string>
#include <sstream>

struct product
{
    int weigh;
    double price;

} apple, banana, orange;


void printproduct(product pr4)
{
    
    std::cout << "Weigh:" << pr4.weigh << "\n";
    std::cout << "Price:" << pr4.price << "\n";
}


int main()
{
    /*int userInput;
    std::cout << "This is a test\nEnter a number: ";
    std::cin >> userInput;
    int doubleUserInput;
    doubleUserInput = 2 * userInput;
    std::cout << "The double of that is: " << doubleUserInput;
    return 0;*/

    //set attributes

    
    apple.weigh = 1;
    apple.price = 4.56;
    banana.weigh = 4;
    banana.price = 14.23;
    orange.weigh = 1;
    orange.price = 2.4;

    printproduct(apple);
    printproduct(banana);
    printproduct(orange);


}
