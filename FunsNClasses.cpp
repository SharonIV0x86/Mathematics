#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <cmath>
using namespace std;
void clear_screen()
{
#ifdef _WIN32
    std::system("cls");

#else
    std::system("clear");
#endif
    // cin.get();
}
void clear_screen_and_delay_cross_platform()
{
#ifdef _WIN32

    {
        // long delay = 1000;
        clear_screen();
        std::cout << "\n\n\tCalculating . . . . . . . . . ." << std::endl;
        Sleep(5000);
        std::cout << "\n\n\tThanks for using the program, hope the asnwer is correct X)) ";
        std::cout << "HIT ENTER TO GET THE ANSWER! ";
        cin.get();
    }
#else
    {
        for (int i = 20; i > 0; i--)
        {
            std::cout << "Thanks for using the program, hope the asnwer is correct X)) ";
            std::this_thread::sleep_for(std::chrono::seconds(30000));
        }
    }
#endif
}
class SquareCalculations
{
public:
    void area_of_square(long side1)
    {

        clear_screen_and_delay_cross_platform();

        std::cout << "\n\n\tThe area of square will be: " << side1 * side1 << " With side " << side1;
        }
    void perimeter_of_square(double sidex4)
    {
        double perimeter_of_sq = 4 * sidex4;
        clear_screen_and_delay_cross_platform();
        std::cout << "\n\n\tThe perimeter of the square will be: " << perimeter_of_sq << " with side " << sidex4 << std::endl;
    }
};
class TriangleCalculations
{
public:
    void area_of_triangle(double base_OT, double height_OT)
    {
        std::cout << "\n\n\tBase of triangle: " << base_OT;
        std::cout << "\n\n\tHeight of triangle: " << height_OT;
        clear_screen_and_delay_cross_platform();
        std::cout << "\n\n\tThe Area Of Triangle will be 1/2 x " << base_OT << " x " << height_OT << " =  " << (0.5) * base_OT * height_OT;
    }
    void perimeter_of_triangle(double side_a, double side_b, double side_c)
    {
        std::cout << "\n\n\tThe perimeter of the triangle is side1 + side2 + side3." << std::endl;
        clear_screen_and_delay_cross_platform();
        std::cout << "\n\n\tPerimeter of triangle with side 1, = " << side_a << " side 2, = " << side_b << " side 3, = " << side_b;
        std::cout << "\n\n\tThe perimeter of the triangle will be: " << side_a + side_b + side_c;
    }
    void area_of_triangle_herons(float side1, float side2, float side3)
    {
        clear_screen_and_delay_cross_platform();
        std::cout << "\n\n\tSemi-Perimeter of the sides will be: " << (side1 + side2 + side3) / 2;
        std::cout << "\n\n\tArea of triangle will be: " << sqrt(((side1 + side2 + side3) / 2) * (((side1 + side2 + side3) / 2) - side1) * (((side1 + side2 + side3) / 2) - side2) * (((side1 + side2 + side3) / 2) - side3));
    }
};
class RectangleCalculations
{
public:
    void area_of_rectangle(double length_OR, double breadth_OR)
    {
        clear_screen_and_delay_cross_platform();
        std::cout << "\n\n\tThe area of Rectangle will be: " << length_OR * breadth_OR;
    }
    void diagonal_of_rectangle(float length, float breadth)
    {
        clear_screen_and_delay_cross_platform();
        std::cout << "\n\n\tThe DIAGONAL of rectangle with length: " << length << " and breadth " << breadth << std::endl;
        std::cout << "\n\n\tWIll BE: " << sqrt(pow(length, 2) + pow(breadth, 2));
    }
    void perimeter_of_rectangle(double LENGTH, double BREADTH)
    {
        clear_screen_and_delay_cross_platform();
        std::cout << "\n\n\tThe PERIMETER of rectangle will be: " << 2 * (LENGTH + BREADTH);
    }
};

class CircleCalculations
{
public:
    void area_of_circle(double radius_OC)
    {
        clear_screen_and_delay_cross_platform();
        std::cout << "\n\n\tThe area of CIRCLE will be: " << 3.14 * radius_OC * radius_OC;
    }
    void circumference_of_circle(double radius)
    {
        clear_screen_and_delay_cross_platform();
        std::cout << "\n\n\tThe CIRCUMFERENCE of the CIRCLE will be: " << 2 * 3.14 * radius;
    }
};
void delay_only_delay()
{
#ifdef _WIN32
    {
        std::cout << "\n\n\tPlease wait...";
        Sleep(3000);
    }
#else
    {
        std::cout << "\n\n\tPlease wait...";
        std::this_thread::sleep_for(std::chrono::seconds(3));
    }
#endif
}
