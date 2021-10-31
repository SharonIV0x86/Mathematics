#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
#include "FunsNClasses.cpp"
#define PI 3.14159265
using namespace std;

class trigonometricCalculations
{
public:
    double x, y;
    void all_calculations()
    {

        std::cout << "\n\n\tEnter the 1st value: ";
        std::cin >> x;
        std::cout << "\n\n\tEnter the 2nd value: ";
        std::cin >> y;
        double cos_radian_x = cos((x)*PI / 180.0);
        double cos_radian_y = cos((y)*PI / 180.0);
        std::cout << "\n\n\tThe value of Cos radian for " << x << " is (" << cos_radian_x << ")";
        std::cout << "\n\n\tThe value of Cos radian for " << y << " is (" << cos_radian_y << ")";
        delay_only_delay();
        double sin_radian_x = sin((x)*PI / 180.0);
        double sin_radian_y = sin((y)*PI / 180.0);
        std::cout << "\n\n\tThe value of Sin radian for " << x << " is (" << sin_radian_x << ")";
        std::cout << "\n\n\tThe value of Sin radian for " << y << " is (" << sin_radian_y << ")";
        delay_only_delay();
        double tan_radian_x = tan((x)*PI / 180.0);
        double tan_radian_y = tan((y)*PI / 180.0);
        std::cout << "\n\n\tThe value of Tan radian for " << x << " is (" << tan_radian_x << ")";
        std::cout << "\n\n\tThe value of Tan radian for " << y << " is (" << tan_radian_y << ")";
        delay_only_delay();
        // radian to pi conversions.
        double arc_cosine_x = acos((x)*180.0 / PI);
        double arc_cosine_y = acos((y)*180.0 / PI);
        std::cout << "\n\n\tThe value of Arc Cosine of " << x << " is(" << arc_cosine_x << " ) degrees";
        std::cout << "\n\n\tThe value of Arc Cosine of " << y << " is(" << arc_cosine_y << ") degrees";
        delay_only_delay();
        double arc_sine_x = asin((x)*180.0 / PI);
        double arc_sine_y = asin((y)*180.0 / PI);
        std::cout << "\n\n\tThe value of Arc Sine in degree for " << x << " is(" << arc_sine_x << ") degrees";
        std::cout << "\n\n\tThe value of Arc Sine in degree for " << y << " is(" << arc_sine_y << ") degrees";
        delay_only_delay();
        double arc_tangent_x = atan((x)*180.0 / PI);
        double arc_tangent_y = atan((y)*180.0 / PI);
        std::cout << "\n\n\tThe value of Arc Tangent in degree for " << x << " is(" << arc_tangent_x << ") degrees";
        std::cout << "\n\n\tThe value of Arc Tangent in degree for " << y << " is(" << arc_tangent_y << ") degrees";
        delay_only_delay();

        double tan_coordinate_x_and_y = atan2(x, y) * 180 / PI;
        std::cout << "\n\n\tThe arc tangent for 'x' coodrinate (" << x << ") and for 'y' coordinate (" << y << ") is (" << tan_coordinate_x_and_y << ")";
        std::cout << "\n\n\tHope the answers you are getting are correct, you can reach me on github for any issues :)) ";
        std::cout << "\n\n\tPress any key to continue! ";
        std::cin.get();
        std::cin.ignore();
        clear_screen();
        go_back_one_screen();
    }
    void Main_Function()
    {
        double x2, y2 = 0;
        int choice2;
        do
        {
            std::cout << "\n\n\tPress 0 to perform all calculations ";
            std::cout << "\n\n\n\n\t~~~~~~~~TO CONVERT T-RATIOS TO RADIANS~~~~~~~~";
            std::cout << "\n\n\tPress 1 to find Cosine of x radians: ";
            std::cout << "\n\n\tPress 2 to find Sine of x radians: ";
            std::cout << "\n\n\tPress 3 to find Tan of x radians: ";
            std::cout << "\n\n\n\n\t~~~~~~~~TO CONVERT RADIANS TO DEGREES~~~~~~~~";
            std::cout << "\n\n\tPress 4 to find DEGREE Arc Cosine of radians: ";
            std::cout << "\n\n\tPress 5 to find DEGREE Arc Sine of radians: ";
            std::cout << "\n\n\tPress 6 to find DEGREE Arc Tangent of radians: ";
            std::cout << "\n\n\tPress 7 to find DEGREE Arc tangent of radians on x and y coordinates! : ";
            std::cin >> choice2;
            clear_screen();
            switch (choice2)
            {
                {
                case 0:
                    all_calculations();
                    break;
                }
                {
                case 1:
                    clear_screen();
                    std::cout << "\n\n\tEnter the 1st value ";
                    std::cin >> x2;
                    std::cout << "\n\n\tEnter the 2nd value ";
                    std::cin >> y2;

                    double cos_radian_x2 = cos((x2)*PI / 180.0);
                    double cos_radian_y2 = cos((y2)*PI / 180.0);
                    std::cout << "\n\n\tThe value of Cos radian for " << x2 << " is (" << cos_radian_x2 << ")";
                    std::cout << "\n\n\tThe value of Cos radian for " << y2 << " is (" << cos_radian_y2 << ")";
                    std::cout << "\n\n\tPress any key to continue. ";
                    std::cin.get();
                    std::cin.ignore();
                    clear_screen();
                    go_back_one_screen();
                }

                {
                case 2:
                    clear_screen();
                    std::cout << "\n\n\tEnter the 1st value ";
                    std::cin >> x2;
                    std::cout << "\n\n\tEnter the 2nd value ";
                    std::cin >> y2;

                    double sin_radian_x2 = sin((x2)*PI / 180.0);
                    double sin_radian_y2 = sin((y2)*PI / 180.0);
                    std::cout << "\n\n\tThe value of Sin radian for " << x2 << " is (" << sin_radian_x2 << ")";
                    std::cout << "\n\n\tThe value of Sin radian for " << y2 << " is (" << sin_radian_y2 << ")";
                    std::cout << "\n\n\tPress any key to continue. ";
                    std::cin.get();
                    std::cin.ignore();
                    clear_screen();
                    go_back_one_screen();
                }
                {
                case 3:

                    clear_screen();
                    std::cout << "\n\n\tEnter the 1st value ";
                    std::cin >> x2;
                    std::cout << "\n\n\tEnter the 2nd value ";
                    std::cin >> y2;

                    double Tan_radian_x2 = cos((x2)*PI / 180.0);
                    double Tan_radian_y2 = cos((y2)*PI / 180.0);
                    std::cout << "\n\n\tThe value of Tan radian for " << x2 << " is (" << Tan_radian_x2 << ")";
                    std::cout << "\n\n\tThe value of Tan radian for " << y2 << " is (" << Tan_radian_y2 << ")";
                    std::cout << "\n\n\tPress any key to continue. ";
                    std::cin.get();
                    std::cin.ignore();
                    clear_screen();
                    go_back_one_screen();
                }

                {
                case 4:
                    clear_screen();
                    std::cout << "\n\n\tEnter the 1st value ";
                    std::cin >> x2;
                    std::cout << "\n\n\tEnter the 2nd value ";
                    std::cin >> y2;
                    double arc_cosine_x2 = acos((x2)*180.0 / PI);
                    double arc_cosine_y2 = acos((y2)*180.0 / PI);
                    std::cout << "\n\n\tThe value of Arc Cosine of " << x2 << " is(" << arc_cosine_x2 << " ) degrees";
                    std::cout << "\n\n\tThe value of Arc Cosine of " << y2 << " is(" << arc_cosine_y2 << ") degrees";
                    std::cout << "\n\n\tPress any key to continue. ";
                    std::cin.get();
                    std::cin.ignore();
                    clear_screen();
                    go_back_one_screen();
                }

                {
                case 5:
                    clear_screen();
                    std::cout << "\n\n\tEnter the 1st value ";
                    std::cin >> x2;
                    std::cout << "\n\n\tEnter the 2nd value ";
                    std::cin >> y2;
                    double arc_sine_x2 = acos((x2)*180.0 / PI);
                    double arc_sine_y2 = acos((y2)*180.0 / PI);
                    std::cout << "\n\n\tThe value of Arc Sine of " << x2 << " is(" << arc_sine_x2 << " ) degrees";
                    std::cout << "\n\n\tThe value of Arc Sine of " << y2 << " is(" << arc_sine_y2 << ") degrees";
                    std::cout << "\n\n\tPress any key to continue. ";
                    std::cin.get();
                    std::cin.ignore();
                    clear_screen();
                    go_back_one_screen();
                }
                {
                case 6:
                    std::cout << "\n\n\tEnter the 1st value ";
                    std::cin >> x2;
                    std::cout << "\n\n\tEnter the 2nd value ";
                    std::cin >> y2;
                    double arc_tangent_x2 = atan((x2)*180.0 / PI);
                    double arc_tangent_y2 = atan((y2)*180.0 / PI);
                    std::cout << "\n\n\tThe value of Arc Tangent in degree for 'x' coordinate " << x2 << " is(" << arc_tangent_x2 << ") degrees";
                    std::cout << "\n\n\tThe value of Arc Tangent in degree for 'y' coordinate " << y2 << " is(" << arc_tangent_y2 << ") degrees";
                    std::cout << "\n\n\tPress any key to continue. ";
                    std::cin.get();
                    std::cin.ignore();
                    clear_screen();
                    go_back_one_screen();
                }
                {
                default:
                    std::cout << "\n\n\tAn Unexpected error occured! :( ";
                    break;
                }
            }

        } while (choice2 < 8);
        {
            std::cout << "\n\n\tWrong input :( or an unexpected error occured! ";
        }
    }
    void go_back_one_screen()
    {
        trigonometricCalculations gobec;
        gobec.Main_Function();
    }
};
int main()

{

    std::cout << "\n\n\tSIMPLE OBJECT'S AREA CALCULATOR BY *SharonIV " << std::endl;
    std::cout << "\n\n\tYou can perform calculations on following figures: " << std::endl;

    std::cout << "\n\n\tPress 1 to perform calculation on Square" << std::endl;
    std::cout << "\n\n\tPress 2 to perform calculation on Triangle" << std::endl;
    std::cout << "\n\n\tPress 3 to perform calculation on Rectangle" << std::endl;
    std::cout << "\n\n\tPress 4 to perform calculation on Circle" << std::endl;
    std::cout << "\n\n\tPress 5 to perform Trigonometric Calculations! ";
    char figure_selection;
    std::cout << "\n\n\tEnter a CHOICE ~~~~~~~~~~~>  ";
    std::cin >> figure_selection;
    clear_screen();
    {
        char what_to_perform_sq;
        if (figure_selection == '1')
        {

            std::cout << "\n\n\tPress 1 to find area of the square! ";
            std::cout << "\n\n\tPress 2 to find perimeter of square! ";
            std::cin >> what_to_perform_sq;

            if (what_to_perform_sq == '1')
            {

                SquareCalculations sq1;
                double square_side1;

                std::cout << "\n\n\tEnter the side of the square : ";
                std::cin >> square_side1;
                sq1.area_of_square(square_side1);
            }
            else if (what_to_perform_sq == '2')
            {

                double side_of_sq_peri;
                SquareCalculations POS;
                std::cout << "\n\n\tEnter the side of the square: ";
                std::cin >> side_of_sq_peri;

                POS.perimeter_of_square(side_of_sq_peri);
            }
        }

        if (figure_selection == '2')
        {
            char triangle_calculations;
            std::cout << "\n\n\tPress 1 to find perimeter of triangle! ";
            std::cout << "\n\n\tPress 2 to find area of triangle! ";
            std::cout << "\n\n\tPress 3 to find area of triangle using HERON's formula! ";
            std::cin >> triangle_calculations;
            if (triangle_calculations == '1')
            {
                double side1_ot, side2_ot, side3_ot;
                std::cout << "\\nn\tEnter the 1st side of the triangle: ";
                std::cin >> side1_ot;
                std::cout << "\n\n\tEnter the 2nd side of the triangle: ";
                std::cin >> side2_ot;
                std::cout << "\n\n\tEnter the 3rd side of the triangle: ";
                std::cin >> side3_ot;

                TriangleCalculations POT;
                POT.perimeter_of_triangle(side1_ot, side2_ot, side3_ot);
            }
            else if (triangle_calculations == '2')
            {

                double base_AOt, heightAOt;

                TriangleCalculations AOT;
                std::cout << "\n\n\tEnter the base of the triangle: ";
                std::cin >> base_AOt;

                std::cout << "\n\n\tEnter the height of the triangle: ";
                std::cin >> heightAOt;

                AOT.area_of_triangle(base_AOt, heightAOt);
            }

            else if (triangle_calculations == '3')
            {
                float side1, side2, side3;

                std::cout << "\n\n\tEnter the 1st SIDE of the triangle: ";
                std::cin >> side1;
                std::cout << "\n\n\tEnter the 2nd SIDE of the triangle: ";
                std::cin >> side2;
                std::cout << "\n\n\tEnter thr 3rd SIDE of the triangle: ";
                std::cin >> side3;

                TriangleCalculations AOTH;
                AOTH.area_of_triangle_herons(side1, side2, side3);
            }
        }

        else if (figure_selection == '3')
        {
            char rectangle_calculations;
            std::cout << "\n\n\tPress 1 to find area of Rectangle: ";
            std::cout << "\n\n\tPress 2 to find DIAGONAL of rectangle: ";
            std::cout << "\n\n\tPress 3 to find PERIMETER of rectangle: ";
            std::cin >> rectangle_calculations;

            if (rectangle_calculations == '1')
            {

                RectangleCalculations AOR;
                double length_AOr, breadth_AOr;
                std::cout << "\n\n\tEnter LENGTH and BREADTH of the rectangle: ";
                std::cin >> length_AOr >> breadth_AOr;
                AOR.area_of_rectangle(length_AOr, breadth_AOr);
            }
            else if (rectangle_calculations == '2')
            {
                float length, breadth;
                std::cout << "\n\n\tEnter LENGTH of rectangle: ";
                std::cin >> length;
                std::cout << "\n\n\tEnter BREADTH of rectangle: ";
                std::cin >> breadth;

                RectangleCalculations DOC;
                DOC.diagonal_of_rectangle(length, breadth);
            }
            else if (rectangle_calculations == '3')
            {
                double LENGTh, BREADTh;
                std::cout << "\n\n\tEnter the LENGTH of the rectangle: ";
                std::cin >> LENGTh;
                std::cout << "\n\n\tEnter the BREADTH of the rectangle: ";
                std::cin >> BREADTh;
                RectangleCalculations POR;
                POR.perimeter_of_rectangle(LENGTh, BREADTh);
            }
        }

        else if (figure_selection == '4')
        {

            char circle_calculations;
            std::cout << "\n\n\tPress 1 to find AREA of CIRCLE: ";
            std::cout << "\n\n\tPress 2 to find CIRCUMFERENCE of circle: ";
            std::cin >> circle_calculations;
            if (circle_calculations == '1')
            {
                CircleCalculations AOC;
                double radius_OC;
                std::cout << "\n\n\tEnter the radius of circle: ";
                std::cin >> radius_OC;
                AOC.area_of_circle(radius_OC);
            }
            else if (circle_calculations == '2')
            {
                double rad;
                std::cout << "\n\n\tEnter the radius of the CIRCLE: ";
                std::cin >> rad;
                CircleCalculations COC;
                COC.circumference_of_circle(rad);
            }
        }
        else if (figure_selection == '5')
        {
            trigonometricCalculations Cal1;
            Cal1.Main_Function();
        }
        while (figure_selection != '1' && figure_selection != '2' && figure_selection != '3' && figure_selection != '4')
        {
            string error_code = "0x0FFfe0b";
            std::cout << "\n\ntPlease enter a right option! here is the error code" << error_code;
            break;
        }
    }
    return 0;
}
