#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
using namespace std;
class SquareCalculations
{
public:
    long area_of_square(long side1)
    {
        double area_of_square;
        std::cout << "\n\tThe area of square will be: " << side1 * side1 << " With side " << side1;
        _getch();
        return 0;
    }
    double perimeter_of_square(double sidex4)
    {
        double perimeter_of_sq = 4 * sidex4;
        std::cout << "\n\tThe perimeter of the square will be: " << perimeter_of_sq << " with side " << sidex4 << std::endl;
        std::cout << "\n\tHit enter to continue " << _getch();
        _getch();
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
        std::cout << "\n\n\tThe Area Of Triangle will be 1/2 x " << base_OT << " x " << height_OT << " =  " << answer_AOT;
        _getch();
        return 0;
    }
    double perimeter_of_triangle(double side_a, double side_b, double side_c)
    {
        std::cout << "The perimeter of the triangle is side1 + side2 + side3." << std::endl;
        std::cout << "Perimeter of triangle with side 1, = " << side_a << " side 2, = "<< side_b <<" side 3, = "<< side_b;
        std::cout << "\n\tThe perimeter of the triangle will be: " << side_a + side_b + side_c;
        _getch();
        return 0;
    }
    double area_of_triangle_herons(float side1, float side2, float side3)
    {

        float semi_peri = side1 + side2 + side3;
        semi_peri /= 2;
        std::cout << "Semi-Perimeter of the sides will be: " << semi_peri << std::endl;

        float area = sqrt(semi_peri * (semi_peri - side1) * (semi_peri - side2) * (semi_peri - side3));

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
        std::cout << "\n\tThe area of Rectangle will be: " << length_OR * breadth_OR;
        _getch();
        return 0;
    }
    float diagonal_of_rectangle(float length, float breadth)
    {
        float diagonal = sqrt(pow(length, 2) + pow(breadth, 2));
        std::cout << "\n\tThe DIAGONAL of rectangle with length: " << length << " and breadth " << breadth << std::endl;
        std::cout << "\n\tWIll BE: " << diagonal;
        return 0;
    }
    double perimeter_of_rectangle(double LENGTH, double BREADTH)
    {
        double perimeter = 2 * (LENGTH + BREADTH);
        std::cout << "\n\tThe PERIMETER of rectangle will be: " << perimeter;
        return 0;
    }
};

class CircleCalculations
{
public:
    double area_of_circle(double radius_OC)
    {
        std::cout << "\n\tThe area of CIRCLE will be: " << 3.14 * radius_OC * radius_OC;
        _getch();
        return 0;
    }
    double circumference_of_circle(double radius)
    {
        std::cout << "The CIRCUMFERENCE of the CIRCLE will be: " << 2 * 3.14 * radius;
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
    {
        char what_to_perform_sq;
        if (figure_selection == '1')
        {

            std::cout << "\n\tPress 1 to find area of the square! ";
            std::cout << "\n\tPress 2 to find perimeter of square! ";
            std::cin >> what_to_perform_sq;

            if (what_to_perform_sq == '1')
            {

                SquareCalculations sq1;
                double square_side1;

                std::cout << "\tEnter the side of the square : ";
                std::cin >> square_side1;
                sq1.area_of_square(square_side1);
            }
            else if (what_to_perform_sq == '2')
            {

                double side_of_sq_peri;
                SquareCalculations POS;
                std::cout << "\tEnter the side of the square: ";
                std::cin >> side_of_sq_peri;

                POS.perimeter_of_square(side_of_sq_peri);
            }
        }

        if (figure_selection == '2')
        {
            char triangle_calculations;
            std::cout << "\n\tPress 1 to find perimeter of triangle! ";
            std::cout << "\n\tPress 2 to find area of triangle! ";
            std::cout << "\n\tPress 3 to find area of triangle using HERON's formula! ";
            std::cin >> triangle_calculations;
            if (triangle_calculations == '1')
            {
                double side1_ot, side2_ot, side3_ot;
                std::cout << "\n\tEnter the 1st side of the triangle: ";
                std::cin >> side1_ot;
                std::cout << "\n\tEnter the 2nd side of the triangle: ";
                std::cin >> side2_ot;
                std::cout << "\n\tEnter the 3rd side of the triangle: ";
                std::cin >> side3_ot;

                TriangleCalculations POT;
                POT.perimeter_of_triangle(side1_ot, side2_ot, side3_ot);
            }
            else if (triangle_calculations == '2')
            {

                double base_AOt, heightAOt;

                TriangleCalculations AOT;
                std::cout << "\tEnter the base of the triangle: ";
                std::cin >> base_AOt;

                std::cout << "\tEnter the height of the triangle: ";
                std::cin >> heightAOt;

                AOT.area_of_triangle(base_AOt, heightAOt);
            }

            else if (triangle_calculations == '3')
            {
                float side1, side2, side3;

                std::cout << "\n\tEnter the 1st SIDE of the triangle: ";
                std::cin >> side1;
                std::cout << "\n\tEnter the 2nd SIDE of the triangle: ";
                std::cin >> side2;
                std::cout << "\n\tEnter thr 3rd SIDE of the triangle: ";
                std::cin >> side3;

                TriangleCalculations AOTH;
                AOTH.area_of_triangle_herons(side1, side2, side3);
            }
        }

        else if (figure_selection == '3')
        {
            char rectangle_calculations;
            std::cout << "\n\tPress 1 to find area of Rectangle: ";
            std::cout << "\n\tPress 2 to find DIAGONAL of rectangle: ";
            std::cout << "\n\tPress 3 to find PERIMETER of rectangle: ";
            std::cin >> rectangle_calculations;

            if (rectangle_calculations == '1')
            {

                RectangleCalculations AOR;
                double length_AOr, breadth_AOr;
                std::cout << "\tEnter LENGTH and BREADTH of the rectangle: ";
                std::cin >> length_AOr >> breadth_AOr;
                AOR.area_of_rectangle(length_AOr, breadth_AOr);
            }
            else if (rectangle_calculations == '2')
            {
                float length, breadth;
                std::cout << "\n\tEnter LENGTH of rectangle: ";
                std::cin >> length;
                std::cout << "\n\tEnter BREADTH of rectangle: ";
                std::cin >> breadth;

                RectangleCalculations DOC;
                DOC.diagonal_of_rectangle(length, breadth);
            }
            else if (rectangle_calculations == '3')
            {
                double LENGTh, BREADTh;
                std::cout << "\n\tEnter the LENGTH of the rectangle: ";
                std::cin >> LENGTh;
                std::cout << "\n\tEnter the BREADTH of the rectangle: ";
                std::cin >> BREADTh;
                RectangleCalculations POR;
                POR.perimeter_of_rectangle(LENGTh, BREADTh);
            }
        }

        else if (figure_selection == '4')
        {

            char circle_calculations;
            std::cout << "\n\tPress 1 to find AREA of CIRCLE: ";
            std::cout << "\n\tPress 2 to find CIRCUMFERENCE of circle: ";
            std::cin >> circle_calculations;
            if (circle_calculations == '1')
            {
                CircleCalculations AOC;
                double radius_OC;
                std::cout << "\tEnter the radius of circle: ";
                std::cin >> radius_OC;
                AOC.area_of_circle(radius_OC);
            }
            else if (circle_calculations == '2')
            {
                double rad;
                std::cout << "\n\tEnter the radius of the CIRCLE: ";
                std::cin >> rad;
                CircleCalculations COC;
                COC.circumference_of_circle(rad);
            }
        }

        while (figure_selection != '1' && figure_selection != '2' && figure_selection != '3' && figure_selection != '4')
        {
            string error_code = "0x0FFfe0b";
            std::cout << "Please enter a right option! here is the error code" << error_code;
            break;
        }
    }
    return 0;
}
