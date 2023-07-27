#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double ppi(double pixel_width, double pixel_height, double inches_diagonal);
double pixels_diagonal(double width, double height);

const string USAGE = "Usage: ppi width-px height-px diagonal-in\n";

int main (int argc, char *argv[]) {
    if (argc != 4) {
        cerr << USAGE;
        exit(EXIT_FAILURE);
    }

    const double pixel_width = atof(argv[1]);
    const double pixel_height = atof(argv[2]);
    const double inches_diagonal = atof(argv[3]);

    // result is pixels per inch
    cout << ppi(pixel_width, pixel_height, inches_diagonal);

    return 0;
}

double ppi(double pixel_width, double pixel_height, double inches_diagonal) {
    // length of diagonal in pixels / length of diagonal in inches
    return pixels_diagonal(pixel_width, pixel_height) / inches_diagonal;
}

double pixels_diagonal(double width, double height) {
    // Calculate the length of the diagonal in pixels
    return sqrt((width * width) + (height * height));
}
