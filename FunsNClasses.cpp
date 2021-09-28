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
    cin.get();
}
void clear_screen_and_delay_cross_platform()
{
#ifdef _WIN32

    {
        //long delay = 1000;
        clear_screen();
        std::cout << "\n\tCalculating . . . . . . . . . ." << std::endl;
        Sleep(5000);
        std::cout << "\n\tThanks for using the program, hope the asnwer is correct X)) ";
        std::cout<<"HIT ENTER TO GET THE ANSWER! ";
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
    long area_of_square(long side1)
    {
        double area_of_square;
        clear_screen_and_delay_cross_platform();

        std::cout << "\n\tThe area of square will be: " << side1 * side1 << " With side " << side1;

        return 0;
    }
    double perimeter_of_square(double sidex4)
    {
        double perimeter_of_sq = 4 * sidex4;
        clear_screen_and_delay_cross_platform();
        std::cout << "\n\tThe perimeter of the square will be: " << perimeter_of_sq << " with side " << sidex4 << std::endl;

        return perimeter_of_sq;
    }
};
class TriangleCalculations
{
public:
    double area_of_triangle(double base_OT, double height_OT)
    {

        double answer_AOT = (0.5) * base_OT * height_OT;

        std::cout << "\n\tBase of triangle: " << base_OT;
        std::cout << "\n\tHeight of triangle: " << height_OT;
        clear_screen_and_delay_cross_platform();
        std::cout << "\n\n\tThe Area Of Triangle will be 1/2 x " << base_OT << " x " << height_OT << " =  " << answer_AOT;

        return 0;
    }
    double perimeter_of_triangle(double side_a, double side_b, double side_c)
    {
        std::cout << "The perimeter of the triangle is side1 + side2 + side3." << std::endl;
        clear_screen_and_delay_cross_platform();
        std::cout << "Perimeter of triangle with side 1, = " << side_a << " side 2, = " << side_b << " side 3, = " << side_b;
        std::cout << "\n\tThe perimeter of the triangle will be: " << side_a + side_b + side_c;

        return 0;
    }
    double area_of_triangle_herons(float side1, float side2, float side3)
    {

        float semi_peri = side1 + side2 + side3;
        semi_peri /= 2;

        float area = sqrt(semi_peri * (semi_peri - side1) * (semi_peri - side2) * (semi_peri - side3));
        clear_screen_and_delay_cross_platform();
        std::cout << "Semi-Perimeter of the sides will be: " << semi_peri << std::endl;
        std::cout << "Area of triangle will be: " << area;

        return 0;
    }
};

class RectangleCalculations
{
public:
    double area_of_rectangle(double length_OR, double breadth_OR)
    {
        double answer_AOR = length_OR * breadth_OR;
        clear_screen_and_delay_cross_platform();
        std::cout << "\n\tThe area of Rectangle will be: " << length_OR * breadth_OR;

        return 0;
    }
    float diagonal_of_rectangle(float length, float breadth)
    {
        float diagonal = sqrt(pow(length, 2) + pow(breadth, 2));
        clear_screen_and_delay_cross_platform();
        std::cout << "\n\tThe DIAGONAL of rectangle with length: " << length << " and breadth " << breadth << std::endl;
        std::cout << "\n\tWIll BE: " << diagonal;

        return 0;
    }
    double perimeter_of_rectangle(double LENGTH, double BREADTH)
    {
        double perimeter = 2 * (LENGTH + BREADTH);
        clear_screen_and_delay_cross_platform();
        std::cout << "\n\tThe PERIMETER of rectangle will be: " << perimeter;

        return 0;
    }
};

class CircleCalculations
{
public:
    double area_of_circle(double radius_OC)
    {
        clear_screen_and_delay_cross_platform();

        std::cout << "\n\tThe area of CIRCLE will be: " << 3.14 * radius_OC * radius_OC;

        return 0;
    }
    double circumference_of_circle(double radius)
    {
        clear_screen_and_delay_cross_platform();
        std::cout << "The CIRCUMFERENCE of the CIRCLE will be: " << 2 * 3.14 * radius;

        return 0;
    }
};
