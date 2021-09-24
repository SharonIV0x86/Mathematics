#include <iostream>
#include <string>
using namespace std;
class SquareCalculations
{
public:
    //int side;

    long area_of_square(long side1)
    {
        std::cout << "The area of square will be: " << side1 * side1;
        return 0;
    }
};
class TriangleCalculations
{   public:
    double area_of_triangle(double base_OT, double height_OT)
    {

        double answer_AOT = (0.5) * base_OT * height_OT;

        std::cout << "The Area of the Triangle will be : " << answer_AOT;
        return 0;
    }
};

class RectangleCalculations
{   public:
    double area_of_rectangle(double length_OR, double breadth_OR)
    {
        double answer_AOR = length_OR * breadth_OR;
        std::cout << "The area of Rectangle will be: " << length_OR * breadth_OR;
        return 0;
    }
};

class CircleCalculations
{   public:

    double area_of_circle(double radius_OC)
    {
        std::cout << "The area of CIRCLE will be: " << 3.14 * radius_OC * radius_OC;
        return 0;
    }
};
int main()
{

    std::cout << "<<<<<<<<<<<<<<<<<<<<      SIMPLE OBJECT'S AREA CALCULATOR BY *SharonIV*>>>>>>>>>>>>>>>>>>>>       " << std::endl;
    std::cout << "You can perform calculations on following figures: " << std::endl;

    std::cout << "\n\tPress 1 to perform calculation on Square" << std::endl;
    std::cout << "\n\tPress 2 to perform calculation on Triangle" << std::endl;
    std::cout << "\n\tPress 3 to perform calculation on Rectangle" << std::endl;
    std::cout << "\n\tPress 4 to perform calculation on Circle" << std::endl;

    char figure_selection;
    std::cout << "Enter a CHOICE ~~~~~~~~~~~>  ";
    std::cin >> figure_selection;

    if (figure_selection = '1')
    {
        SquareCalculations sq1;
        long square_side1;
        // std::cout << "Enter the name of the figure ";
        // std::cin >> figure_selection;

        std::cout << "Enter the side of the square : ";
        std::cin >> square_side1;
        sq1.area_of_square(square_side1);
    }

    else if (figure_selection = '2')
    {
        double base_AOt, heightAOt;

        TriangleCalculations AOT;
        std::cout << "Enter the base of the triangle: ";
        std::cin >> base_AOt;

        std::cout << "Enter the height of the triangle: ";
        std::cin >> heightAOt;

        AOT.area_of_triangle(base_AOt, heightAOt);
    }
    else if (figure_selection = '3')
    {

        RectangleCalculations AOR;
        double length_AOr, breadth_AOr;
        std::cout << "Enter LENGTH and BREADTH of the rectangle: ";
        std::cin >> length_AOr >> breadth_AOr;
        AOR.area_of_rectangle(length_AOr, breadth_AOr);
    }
    else if (figure_selection = '4')
    {
        CircleCalculations AOC;
        double radius_OC;
        std::cout << "Enter the radius of circle: ";
        std::cin >> radius_OC;
        AOC.area_of_circle(radius_OC);
    }
    while (figure_selection != '1' && figure_selection != '2' && figure_selection != '3' && figure_selection != '4')
    {
        std::cout << "Please enter a right option! ";
        break;
    }

    return 0;
}
