#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath> // For pi

class Cylinder {
private:
	double radius;
	double height;
public:
	// Constructor
	Cylinder(double r, double h) : radius(r), height(h) {}

	// Methods to calculate volume and surface area
	double getVolume() {
		return M_PI * radius * radius * height;
	}

	double getSurfaceArea() {
		return 2 * M_PI * radius * +2 * radius * height;
	}

	// Getter and setter methods for radius and height
	double getRadius() {
		return radius;
	}

	void setRadius(double r) {
		if (r > 0) {
			radius = r;
		}
		else {
			std::cerr << "Error: Radius must be a positive value." << std::endl;
		}
	}

	double getHeight() const {
		return height;
	}


	void setHeight(double h) {
		if (h > 0) {
			height = h;
		}
		else {
			std::cerr << "Error: Height must be a positive value." << std::endl;
		}
	}
};

int main() {
	// create a Cylinder object with a radius of 3 and hight of 5
	Cylinder myCylinder(3.0, 5.0);

	// Calculate and print the volume and surface area
	double volume = myCylinder.getVolume();
	double surfaceArea = myCylinder.getSurfaceArea();

	std::cout << "Cylinder properties:" << std::endl;
	std::cout << "Radius: " << myCylinder.getRadius() << std::endl;
	std::cout << "Height: " << myCylinder.getHeight() << std::endl;
	std::cout << "Volume: " << volume << std::endl;
	std::cout << "Surface Area: " << surfaceArea << std::endl;

	// Change the radius and height
	myCylinder.setRadius(4.0);
	myCylinder.setHeight(6.0);

	//Recalculate and print the updated Volume and Surface Area
	volume = myCylinder.getVolume();
	surfaceArea = myCylinder.getSurfaceArea(),

		std::cout << "Updated Cylinder properties:" << std::endl;
	std::cout << "Radius: " << myCylinder.getRadius() << std::endl;
	std::cout << "Height: " << myCylinder.getHeight() << std::endl;
	std::cout << "Updated Volume: " << volume << std::endl;
	std::cout << "Updated Surface Area: " << surfaceArea << std::endl;

	return 0;
}


