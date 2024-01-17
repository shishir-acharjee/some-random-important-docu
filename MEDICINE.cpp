#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <utility>
using namespace std;

class all_medicine {
public:
    pair<int, int> ecosprin;
    pair<int, int> clopid;
    pair<int, int> atova;
    pair<int, int> osartil;
    pair<int, int> bislol;
    pair<int, int> frulac;
    pair<int, int> syndopa;
    pair<int, int> rasagil;
    pair<int, int> exelon;
    pair<int, int> perkirol;
    pair<int, int> provair;
    pair<int, int> sergel;
    pair<int, int> omidon;
    pair<int, int> gabarol;
    pair<int, int> rivotril;

    all_medicine() {

        ecosprin = make_pair(2, 1);
        clopid = make_pair(13, 1);
        atova = make_pair(24, 1);
        osartil = make_pair(10, 1);
        bislol = make_pair(7, 1);
        frulac = make_pair(9, 1);
        syndopa = make_pair(20, 2);
        rasagil = make_pair(20, 1);
        exelon = make_pair(102, 2);
        perkirol = make_pair(6, 3);
        provair = make_pair(18, 1);
        sergel = make_pair(14, 2);
        omidon = make_pair(12, 3);
        gabarol = make_pair(25, 1);
        rivotril = make_pair(11, 1);
    }
};

int main() {
    all_medicine a;
    int taka[] = {
        a.ecosprin.first, a.clopid.first, a.atova.first, a.osartil.first,
        a.bislol.first, a.frulac.first, a.syndopa.first, a.rasagil.first,
        a.exelon.first, a.perkirol.first, a.provair.first, a.sergel.first,
        a.omidon.first, a.gabarol.first, a.rivotril.first
    };
    int n=15;
    while (true) {

        cout << "TASK :\n";
        cout << "1. BUYING MEDICINE\n";
        cout << "2. CALCULATING REMAINING MEDICINE\n";
        cout << "3. EXIT\n";
        int ans;
        cin>>ans;
        if(ans==3){
            break;
        }
        else if(ans==1){
            cout<<"HOW MANY DAYS ? : ";
            int day;
            cin>>day;
            double sum=0;
            cout<<" how much discount are you getting  ?"<<endl;
            double discount;
            cin>>discount;
            for(int i = 0; i <15; i++) {
                sum+=taka[i]*day;
            }
             cout << "Ecosprin: " << a.ecosprin.second * day << endl;
    cout << "Clopid: " << a.clopid.second * day << endl;
    cout << "Atova: " << a.atova.second * day << endl;
    cout << "Osartil: " << a.osartil.second * day << endl;
    cout << "Bislol: " << a.bislol.second * day << endl;
    cout << "Frulac: " << a.frulac.second * day << endl;
    cout << "Syndopa: " << a.syndopa.second * day << endl;
    cout << "Rasagil: " << a.rasagil.second * day << endl;
    cout << "Exelon: " << a.exelon.second * day << endl;
    cout << "Perkirol: " << a.perkirol.second * day << endl;
    cout << "Provair: " << a.provair.second * day << endl;
    cout << "Sergel: " << a.sergel.second * day << endl;
    cout << "Omidon: " << a.omidon.second * day << endl;
    cout << "Gabarol: " << a.gabarol.second * day << endl;
    cout << "Rivotril: " << a.rivotril.second * day << endl;
    cout<<"Total cost="<<sum<<endl;
    double dp=sum-sum*(discount/100);
    if(dp!=sum){
        cout<<"discount price"<<dp<<endl;
    }
        }


    }

    return 0;
}
