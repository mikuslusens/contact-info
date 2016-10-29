#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "kontaktinformacija.hpp"
#define pi 3.14159265358979323846
#define earthRadiusKm 6371.0

using namespace std;

void Kontaktinformacija::addPhone(string phoneNumber)
{
    this->talrunis.push_back(phoneNumber);
}

int Kontaktinformacija::talrunuSk(void)
{
    int talrunuSk = talrunis.size();
    return talrunuSk;
}

void Kontaktinformacija::addFax(string fax)
{
    this->fakss.push_back(fax);
}

int Kontaktinformacija::faksuSk(void)
{
    int faksuSk = fakss.size();
    return faksuSk;
}

void Kontaktinformacija::addSkype(string skype)
{
    this->skype.push_back(skype);
}

int Kontaktinformacija::skypeSk(void)
{
    int skypeSk = skype.size();
    return skypeSk;
}


void Kontaktinformacija::printInfo(void)
{
    cout << "Valsts: " << valsts << endl;
    cout << "Pilseta: " << pilseta << endl;
    cout << "Novads: " << novads << endl;
    cout << "Pagasts: " << pagasts << endl;
    cout << "Adrese: " << iela << " " << ekasNr << "-" << dzivoklaNr <<endl;
    cout << "Pasta indekss: " << pastaIndekss << endl;
    cout << "E-pasts: " << email << endl;
    cout << "Talrunis: ";
    if (talrunis.size() == 0)
        cout << "Nav ievadits" << endl;
    else
        for (vector<string>::iterator it = talrunis.begin() ; it != talrunis.end(); ++it)
            if(it == (talrunis.end() -1))
                cout << *it;
            else
                cout << *it << ", ";
    cout << endl;
    cout << "Fakss: ";
    if (fakss.size() == 0)
        cout << "Nav ievadits" << endl;
    else
        for (vector<string>::iterator it = fakss.begin() ; it != fakss.end(); ++it)
            if(it == (fakss.end() -1))
                cout << *it;
            else
                cout << *it << ", ";
    cout << endl;
    cout << "Skype: ";
    if (skype.size() == 0)
        cout << "Nav ievadits" << endl;
    else
        for (vector<string>::iterator it = skype.begin() ; it != skype.end(); ++it)
            if(it == (skype.end() -1))
                cout << *it;
            else
                cout << *it << ", ";
    cout << endl;
    cout << "GPS koordinates: " << lat << ", " << lon << endl;
}

double Kontaktinformacija::deg2rad(double deg) {
    return (deg * pi / 180);
}


double Kontaktinformacija::distanceEarth(double lat2d, double lon2d) {
  double lat1r, lon1r, lat2r, lon2r, u, v;

  lat1r = deg2rad(this->lat);
  lon1r = deg2rad(this->lon);
  lat2r = deg2rad(lat2d);
  lon2r = deg2rad(lon2d);
  u = sin((lat2r - lat1r)/2);
  v = sin((lon2r - lon1r)/2);
  return 2.0 * earthRadiusKm * asin(sqrt(u * u + cos(lat1r) * cos(lat2r) * v * v));     /// Haversine formula
}
