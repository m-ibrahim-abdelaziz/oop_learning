#include <iostream>

using namespace std;
float area (float);
float volume (float);
int main()
{
    float red;
     cout<<" enter the reduios \n";
     cin >>red ;
     cout <<"the area of the sphere="<<area( red) <<"\n";
     cout <<"the volume of the sphere="<<volume( red) <<"\n";
    return 0;
}

float area (float red)
{
    float area ;
    area=4*3.14*red ;
    return area ;
}
float volume (float red)
{
    float volume ;
    volume=(4/3)*3.14*red*red*red;
    return volume;
}
