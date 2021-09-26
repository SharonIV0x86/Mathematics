#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
#include "FunsNClasses.cpp"
using namespace std;

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
