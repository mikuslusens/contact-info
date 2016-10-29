#include <iostream>
#include <vector>
#include <string>
#include "kontaktinformacija.hpp"

using namespace std;

int main()
{
    Kontaktinformacija *info1;
    info1 = new Kontaktinformacija;

    info1->valsts = "Latvija";
    info1->pilseta = "Riga";
    info1->iela = "Brivibas gatve";
    info1->ekasNr = "214b";
    info1->dzivoklaNr = "8";
    info1->pastaIndekss = "LV-1039";
    info1->email = "info@novatech.lv";

    info1->addPhone("29345344");
    info1->addPhone("67456754");
    info1->addPhone("67324220");
    info1->addFax("31231233");
    info1->addSkype("a.krumins");
    info1->addSkype("NovaTechHR");

    info1->lat = 56.57;
    info1->lon = 24.06;


    cout << info1->talrunuSk() << endl;
    cout << info1->faksuSk() << endl;
    cout << info1->skypeSk() << endl;

    cout << endl;
    info1->printInfo();
    cout << endl;

    cout << info1->distanceEarth(54.41, 25.17) << endl;

    return 0;
}
