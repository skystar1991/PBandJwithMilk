// Rectangle.h   Class Specification File

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	private:
        //attributes(data)
        double width;
        double length;
	
	public:

        //constructor
        Rectangle(double = 1, double = 1);

        //copy constructor
        Rectangle(const Rectangle&);
        Rectangle(const Rectangle*); 

        //destructor
        ~Rectangle();
 
        //predicate methods
        static bool isValidWidth(double);
        static bool isValidLength(double);
      
        //mutators that validate arguments
        bool setWidth(double);
        bool setLength(double);

        //accessors (get functions)
        double getWidth() const;
        double getLength() const;
        double getArea() const;  

        //assignment operator
        Rectangle& operator=(const Rectangle&);   
        static Rectangle create(double,double);
	static Rectangle* heapCreate(double,double);
};


#endif



 
