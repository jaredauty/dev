#include <iostream>

using namespace std;


 class Vector
 {
 public:
   float m_x;
   float m_y;
   float m_z;
 public:
  Vector(float _x, float _y, float _z);
 };


  Vector::Vector(float _x, float _y, float _z)
  {
    m_x = _x;
    m_y = _y;
    m_z = _z;
  }


int main()
{
  Vector vec = Vector(5,6,7);
  cout << "Hello world!" << endl;
  cout << vec.m_x << endl;
  return 0;
}
