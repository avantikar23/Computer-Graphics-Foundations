#include <iostream>
#include <cmath>

const double PI = 3.14159;

  class Shape{
    public:
    virtual double calculateArea(){
    }
    virtual double calculatePerimeter(){
    }
  };
  class Circle:  public Shape{
    public:
    double r;
    
    Circle(double x)
    {
      r=x;
    }

    double calculateArea() override{
      return PI*r*r;
    };
    double calculatePerimeter() override{
      return PI*2*r;
    };

    };

    class Rectangle: public Shape{
    public:
    double l;
    double b;
    
    Rectangle(double a,double c)
    {
      b=c;
      l=a;

    }
    

    double calculateArea() override {
      return l*b ;
    };
    double calculatePerimeter() override {
      return 2*l+2*b;
    
    };
    };
    class Triangle: public Shape{
    public:
    double x;
    double y;
    
    Triangle(double a,double b)
    {
      x=a;
      y=b;
    }

    double calculateArea() override{
      return x*y/2;
    };
    double calculatePerimeter() override{
      return x+x+y;
    };

    };
  
  int main(){
    Circle circle(7.1);
    std::cout << "circle: " << std::endl;
    std::cout << "Area: " << circle.calculateArea() << std::endl;
    std::cout << "Perimeter: " << circle.calculatePerimeter() << std::endl;
    

    Rectangle rectangle(4.2,8.0);

     std::cout << "\nRectangle: " << std::endl;
     std::cout << "Area: " << rectangle.calculateArea() << std::endl;
     std::cout << "Perimeter: " << rectangle.calculatePerimeter() << std::endl;
    

    Triangle triangle(4.0,3.2);
     std::cout << "\nTriangle: " << std::endl;
     std::cout << "Area: " << triangle.calculateArea() << std::endl;
     std::cout << "Perimeter: " << triangle.calculatePerimeter() << std::endl;
    
    return 0;
    
    }



       


//   Circle circle(7.0);
//   Rectangle rectangle(4.2, 8.0);
//   Triangle triangle(4.0, 4.0, 3.2);

//   https://github.com/avantikar23/Computer-Graphics-Foundations.git

//   std::cout << "\nRectangle: " << std::endl;
//   std::cout << "Area: " << rectangle.calculateArea() << std::endl;
//   std::cout << "Perimeter: " << rectangle.calculatePerimeter() << std::endl;

//   std::cout << "\nTriangle: " << std::endl;
//   std::cout << "Area: " << triangle.calculateArea() << std::endl;
//   std::cout << "Perimeter: " << triangle.calculatePerimeter() << std::endl;

  
