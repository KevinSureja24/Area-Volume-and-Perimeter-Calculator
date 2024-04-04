#include<iostream>
using namespace std;

class Perimeter
{
public:
    float l,b,b1,b2,r,s,s1,s2,s3;
    float p;
    void Square()
    {
        cout<<"Enter the size of side of square: ";
        cin>>l;
        p= 4*l;
        cout<<"Perimeter of square is: "<<p<<"\n";
        cout<<"-------------------------------------------------------------------------------- \n";
    }
    void Rectangle()
    {
        cout<<"Enter the length of rectangle: ";
        cin>>l;
        cout<<"Enter the breadth of rectangle: ";
        cin>>b;
        p= 2*(l+b);
        cout<<"Perimeter of rectangle is: "<<p<<"\n";
        cout<<"-------------------------------------------------------------------------------- \n";
    }
    void Circle()
    {
        cout<<"Enter the radius of circle: ";
        cin>>r;
        p= 2*(3.14)*r;
        cout<<"Perimeter of circle is: "<<p<<"\n";
        cout<<"-------------------------------------------------------------------------------- \n";
    }
    void Semicircle()
    {
        cout<<"Enter the radius of semi circle: ";
        cin>>r;
        p= ((3.14)*r)+(2*r);
        cout<<"Perimeter of semi circle is: "<<p<<"\n";
        cout<<"-------------------------------------------------------------------------------- \n";
    }
    void Triangle()
    {
        cout<<"Enter length of side 1 of triangle: ";
        cin>>s1;
        cout<<"Enter length of side 2 of triangle: ";
        cin>>s2;
        cout<<"Enter length of side 3 of triangle: ";
        cin>>s3;
        p= s1+s2+s3;
        cout<<"Perimeter of triangle: "<<p<<"\n";
        cout<<"-------------------------------------------------------------------------------- \n";
    }
    void Trapezium()
    {
        cout<<"Enter the size of length of smaller base of trapezium: ";
        cin>>b1;
        cout<<"Enter the size of length of bigger base of trapezium: ";
        cin>>b2;
        cout<<"Enter the size of non parallel side of trapezium: ";
        cin>>s;
        p= b1+b2+s+s;
        cout<<"Perimeter of trapezium is: "<<p<<"\n";
        cout<<"-------------------------------------------------------------------------------- \n";
    }
};


class Area: public Perimeter
{
public:
    float b,b1,b2,h,r,s,l;
    float a;
    void triangle()
    {
        cout<<"Area of triangle calculation: \n";
        cout<<"Enter size of base of triangle: ";
        cin>>b;
        cout<<"Enter size of height of triangle: ";
        cin>>h;
        a= (b*h)/2;
        cout<<"Area of triangle is: "<<a<<"\n";
        cout<<"-------------------------------------------------------------------------------- \n";
    }
    void square()
    {
        cout<<"Area of square calculation: \n";
        cout<<"Enter size length of square: ";
        cin>>s;
        a= s*s;
        cout<<"Area of square is: "<<a<<"\n";
        cout<<"-------------------------------------------------------------------------------- \n";
    }
    void rectangle()
    {
        cout<<"Area of rectangle calculation: \n";
        cout<<"Enter size of length of rectangle: ";
        cin>>l;
        cout<<"Enter size of breadth of rectangle: ";
        cin>>b;
        a=l*b;
        cout<<"Area of rectangle is: "<<a<<"\n";
        cout<<"-------------------------------------------------------------------------------- \n";
    }
    void circle()
    {
        cout<<"Area of circle calculation: \n";
        cout<<"Enter radius of circle: ";
        cin>>r;
        a= 3.14*r*r;
        cout<<"Area of circle is: "<<a<<"\n";
        cout<<"-------------------------------------------------------------------------------- \n";
    }
    void semicircle()
    {
        cout<<"Area of semi circle calculation: \n";
        cout<<"Enter radius of semi circle: ";
        cin>>r;
        a= (3.14*r*r)/2;
        cout<<"Area of semi circle is: "<<a<<"\n";
        cout<<"-------------------------------------------------------------------------------- \n";
    }
    void trapezium()
    {
        cout<<"Area of trapezium calculation: \n";
        cout<<"Enter size of smaller base of trapezium: ";
        cin>>b1;
        cout<<"Enter size of bigger base of trapezium: ";
        cin>>b2;
        cout<<"Enter size of height of trapezium: ";
        cin>>h;
        a= ((b1+b2)/2)*h;
        cout<<"Area of trapezium is: "<<a<<"\n";
        cout<<"-------------------------------------------------------------------------------- \n";
    }
};

class Volume: public Area
{
public:
    float l,b,h,r,r1,r2;
    float v;
    void cube()
    {
        cout<<"Enter the size of cube: ";
        cin>>l;
        v= l*l*l;
        cout<<"Volume of cube is: "<<v<<"\n";
        cout<<"-------------------------------------------------------------------------------- \n";
    }
    void cuboid()
    {
        cout<<"Enter the length of cuboid: ";
        cin>>l;
        cout<<"Enter the breadth of cuboid: ";
        cin>>b;
        cout<<"Enter the height of cuboid: ";
        cin>>h;
        v= l*b*h;
        cout<<"The volume of cuboid is: "<<v<<"\n";
        cout<<"-------------------------------------------------------------------------------- \n";
    }
    void sphere()
    {
        cout<<"Enter the radius of sphere: ";
        cin>>r;
        v= (4*(3.14)*r*r*r)/3;
        cout<<"Volume of sphere is: "<<v<<"\n";
        cout<<"-------------------------------------------------------------------------------- \n";
    }
    void hemisphere()
    {
        cout<<"Enter the radius of hemisphere: ";
        cin>>r;
        v= (2*(3.14)*r*r*r)/3;
        cout<<"Volume of hemisphere is: "<<v<<"\n";
        cout<<"-------------------------------------------------------------------------------- \n";
    }
    void cone()
    {
        cout<<"Enter the radius of cone: ";
        cin>>r;
        cout<<"Enter the height of cone: ";
        cin>>h;
        v= (3.14*r*r*h)/3;
        cout<<"Volume of cone is :"<<v<<"\n";
        cout<<"-------------------------------------------------------------------------------- \n";
    }
    void cylinder()
    {
        cout<<"Enter the radius of cylinder: ";
        cin>>r;
        cout<<"Enter the height of cylinder: ";
        cin>>h;
        v= (3.14)*r*r*h;
        cout<<"Volume of cylinder is: "<<v<<"\n";
        cout<<"-------------------------------------------------------------------------------- \n";
    }
    void frustum()
    {
        cout<<"Enter the smaller radius of frustum: ";
        cin>>r1;
        cout<<"Enter the bigger radius of frustum: ";
        cin>>r2;
        cout<<"Enter the height of frustum: ";
        cin>>h;
        v= ((3.14)*h*((r2*r2)+(r2*r1)+(r1*r1)))/3;
        cout<<"Volume of frustum is: "<<v<<"\n";
        cout<<"-------------------------------------------------------------------------------- \n";
    }
};

int main()
{   Again:
    int i;
    cout<<"\n                           Numbers for calculating:                                 \n ";
    cout<<"  Perimeter                      Area                        Volume       \n";
    cout<<"\n  1. Square                    7. Square                     13. Cube           \n";
    cout<<"\n  2. Rectangle                 8. Rectangle                  14. Cuboid         \n";
    cout<<"\n  3. Triangle                  9.  Triangle                  15. Cone           \n";
    cout<<"\n  4. Circle                    10.  Circle                   16. Sphere         \n";
    cout<<"\n  5. Semi-Circle               11. Semi-Circle               17. Hemi-Sphere    \n";
    cout<<"\n  6. Trapezium                 12.  Trapezium                18. Cylinder       \n";
    cout<<"\n                                                             19. Frustum        \n";
    cout<<"-------------------------------------------------------------------------------- \n";
    cout<<"Please enter a number: ";
    cin>>i;
    cout<<"-------------------------------------------------------------------------------- \n";
    Volume obj;

        switch(i)
        {
            case 1:
            {
                obj.Square();
                goto Again;
                break;
            }
            case 2:
            {
                obj.Rectangle();
                goto Again;
                break;
            }
            case 3:
            {
                obj.Triangle();
                goto Again;
                break;
            }
            case 4:
            {
                obj.Circle();
                goto Again;
                break;
            }
            case 5:
            {
                obj.Semicircle();
                goto Again;
                break;
            }
            case 6:
            {
                obj.Trapezium();
                goto Again;
                break;
            }
            case 7:
            {
                obj.square();
                goto Again;
                break;
            }
            case 8:
            {
                obj.rectangle();
                goto Again;
                break;
            }
            case 9:
            {
                obj.triangle();
                goto Again;
                break;
            }
            case 10:
            {
                obj.circle();
                goto Again;
                break;
            }
            case 11:
            {
                obj.semicircle();
                goto Again;
                break;
            }
            case 12:
            {
                obj.trapezium();
                goto Again;
                break;
            }
            case 13:
            {
                obj.cube();
                goto Again;
                break;
            }
            case 14:
            {
                obj.cuboid();
                goto Again;
                break;
            }
            case 15:
            {
                obj.cone();
                goto Again;
                break;
            }
            case 16:
            {
                obj.sphere();
                goto Again;
                break;
            }
            case 17:
            {
                obj.hemisphere();
                goto Again;
                break;
            }
            case 18:
            {
                obj.cylinder();
                goto Again;
                break;
            }
            case 19:
            {
                obj.frustum();
                goto Again;
                break;
            }
            default:
            {
                cout<<"Please enter a valid number: \n";
                goto Again;
                break;
            }

        }
}
