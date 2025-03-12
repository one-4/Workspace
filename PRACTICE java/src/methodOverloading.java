public class methodOverloading{

    // Method to calculate the area of a rectangle (using two integers)
    public int calculateArea(int length, int width) {
        return length * width;
    }

    // Method to calculate the area of a rectangle (using two doubles)
    public double calculateArea(double length, double width) {
        return length * width;
    }

    // Method to calculate the area of a square (using one integer)
    public int calculateArea(int side) {
        return side * side;
    }

    // Method to calculate the area of a circle (using one double)
    public double calculateArea(double radius) {
        return Math.PI * radius * radius;
    }

    // Method to display information about a shape (can take different parameters)
    public void displayShapeInfo(String shapeName) {
        System.out.println("Shape: " + shapeName);
    }

    public void displayShapeInfo(String shapeName, int numberOfSides) {
        System.out.println("Shape: " + shapeName + ", Sides: " + numberOfSides);
    }


    public static void main(String[] args) {
        methodOverloading calculator = new methodOverloading();

        int rectArea1 = calculator.calculateArea(5, 10); // Calls the first calculateArea method
        double rectArea2 = calculator.calculateArea(5.5, 10.2); // Calls the second calculateArea method
        int squareArea = calculator.calculateArea(7); // Calls the third calculateArea method
        double circleArea = calculator.calculateArea(3.0); // Calls the fourth calculateArea method

        System.out.println("Rectangle Area (int): " + rectArea1);
        System.out.println("Rectangle Area (double): " + rectArea2);
        System.out.println("Square Area: " + squareArea);
        System.out.println("Circle Area: " + circleArea);

        calculator.displayShapeInfo("Rectangle"); // Calls the first displayShapeInfo
        calculator.displayShapeInfo("Triangle", 3); // Calls the second displayShapeInfo
    }
}