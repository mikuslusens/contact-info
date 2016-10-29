#include <string>
#include <vector>

using namespace std;

class Kontaktinformacija
{
public:
    string valsts;
    string pilseta;
    string novads;
    string pagasts;
    string iela;
    string ekasNr;
    string dzivoklaNr;
    string pastaIndekss;
    string email;
    vector<string> talrunis;
    vector<string> fakss;
    vector<string> skype;
    double lat;
    double lon;

    //Kontaktinformacija(void);
    int talrunuSk(void);
    void addPhone(string phoneNumber);
    int faksuSk(void);
    void addFax (string fax);
    int skypeSk(void);
    void addSkype (string skype);
    double distanceEarth(double lat2d, double lon2d);
    void printInfo(void);

private:
    double deg2rad(double deg);

};


