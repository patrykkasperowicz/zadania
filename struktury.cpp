#include <iostream>
using namespace std;

struct Point {
  double x;
  double y;
};

struct Measure {
  int size;
  Point *data;
};

void load(Measure& measure)
{
    cout << "Podaj ilość pomiarów " << endl;
    cin >> measure.size;
    measure.data = new Point[measure.size];
    for(int i = 0; i < measure.size; i++)
    {
        cin >> measure.data[i].x;
        cin >> measure.data[i].y;
    }
    cout << endl;
}

int main()
{
    const int size = 2;
    Measure *measurements =  new Measure[size];

    for(int i = 0; i < size; i++) load(measurements[i]);


    for(int i = 0; i < size; i++)
    {
        cout << "Pomiar " << i+1 << endl;;
        for(int j = 0; j < measurements[i].size; j++)
            cout << "x" << j << " = " << measurements[i].data[j].x  <<
            " y" << j <<" = " <<measurements[i].data[j].y << "\t";
        cout << endl;
    }

     for(int i = 0; i < size; i++)
        delete(measurements[i].data);

    delete measurements;
return 0;
}
