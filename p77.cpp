#include <iostream>
using namespace std;
template <class T>
class Flight
{
private:
    float lon, lat;

public:
    void setLocation()
    {
        cout << "Location" << endl;
        cin >> lat >> lon;
    }
    void plotLocation()
    {
        cout << "Latitude" << lat << endl;
        cout << "Longitude" << lon << endl;
    }
};
int main()
{
    Flight<float> *f;
    int n;
    cout << "Enter Size:" << endl;
    cin >> n;
    f = new Flight<float>[n];
    for (int i = 0; i < n; i++)
    {
        (f + i)->setLocation();
    }
    cout << "Flight Location" << endl;
    for (int i = 0; i < n; i++)
        (f + i)->plotLocation();
    delete[] f;
    return 0;
}
