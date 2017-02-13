#include<iostream>
using namespace std;
class Room
{

     int length;
     int width;
public:
   Room()
   {
          length=0;
          width=0;
   }
Room(int)
  {
         length = width =8;
  }
void display()
  {
        cout<<length<< ' ' <<width;
  }
};
int  main()
{
Room objRooml;
Room objRoom2(8);
objRoom2.display();
return 0;
}
