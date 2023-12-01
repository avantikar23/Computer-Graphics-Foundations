#inlclude <iostream>
#include <math.h>


class Vector3{
    public:

      float x;
      float y;
      float z;

      Vector3(float x,float y,float z){
        this->x = x;
        this->y = y;
        this->z = z;
      }
      Vector3 add(Vector3 v2){
        Vector3 v_ans(v2.x + this->x,v2.y + this->y,v2.z + this->z);
        return v_ans;
      }
      Vector3 subtract(Vector3 v2){
        Vector3 v_ans(this->x - v2.x, this->y - v2.y, this->z - v2.z);
        return v_ans;
      }
      Vector3 multiply_scalar(float a){
        Vector3 v_ans(this->x*a, this->y*a, this->z*a);
        return v_ans;
      }
      Vector3 scaledown(float a=0.5){
        Vector3 v_ans(this->x*a,this->y*a,this->z*a);
        return v_ans;
      }
      Vector3 cross(Vector3 v2){
        Vector3 v_ans(this->y*v2.z-this->z*v2.y, this->z*v2.x-this->x*v2.z, this->x*v2.y-this->y*v2.x);
        return v_ans;
      }
      Vector3 dot(Vector3 v2){
        return this->x*v2.x + this->y*v2.y + this->z*v2.z;
      }
      float modulus(){
        return sqrt(this->dot(*this));
      }
      Vector3 unit_vector(){
        return this->multiply_scalar(1/this->modulus());       
      }
      float STP(Vector3 v2, Vector3 v3){
        return this->dot(v2.cross(v3));
      }
      Vector3 VTP(Vector3 v2, Vector3 v3){
        return this->cross(v2.cross(v3));
      }
      Vector3 perpendicular_vector(Vector3 v2, Vector v3){
        Vector3 v_ans(unit_vector(v2.cross(v3)));
        return v_ans;
      }
      Vector3 parallel_vector(Vector3 v2, float a){
        Vector3 v_ans(unit_vector(v2).multiply_scalar(a));
      }
};


class parallelopiped{
    public:
    Vector3 v1;
    Vector3 v2;
    Vector3 v3;

    parallelopiped(Vector3 v1, Vector3 v2, Vector3 v3){
        this->v1 = v1;
        this->v2 = v2;
        this->v3 = v3;        
    }
    float Volume(){
        return abs(v1.STP(v2,v3));       
}
};

    triangle(Vector3 v1, Vector3 v2){
        this->v1 = v1;
        this->v2 = v2;
    }
    float area(Vector3 v1, Vector v2){
        Vector3 v_ans(v1.cross(v2));
        return modulus(v_ans).multiply_scalar(0.5);
    };



Vector3 operator + (Vector3 v1, Vector3 const& v2){
    return v1.add(v2);
}
float operator * (Vector3 v1, Vector3 v2){
    return v1.dot(v2);
}
Vector3 operator ^ (Vector3 v1, Vector3 v2){
    return v1.cross(v2);
}
float operator * (Vector3 v1, Vector3 const& f){
    return v1.multiply_scalar(f);
}




