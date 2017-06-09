#include <iostream>
#include <array>

using namespace std;

float negyzet(float alap){
    return alap*alap;
}
float hatvany(float alap,int hanyadikon){
    float egy=1;
    for(int i=0;i<hanyadikon;i++){
        egy=egy*alap;
    }
    return egy;
}

float gyok(float szam){
    float bob=szam;
    while(!(bob*bob+1>szam && bob*bob-1<szam)){
      if (bob*bob>szam){
          bob=bob/2;
      }
      else if (bob*bob<szam){
          bob=bob*1.5;

      }
    }

    return bob;
}
pair<float,float> masodfoku(float a, float b, float c){                    //Az egyenlet formaja: a*x^2+b*x+c=0
    pair<float,float> megoldas;
    megoldas.first=(-b+gyok(negyzet(b)-4*a*c))/(2*a);
    megoldas.second=(-b-gyok(negyzet(b)-4*a*c))/(2*a);
    return megoldas;
}

int main()
{
    float a,b,c;

    for(;;){
    cout << "Az egyenlet formaja:\na*x^2+b*x+c=0\n\na:";
    cin >> a;
    cout << "\nb:";
    cin >> b;
    cout << "\nc:";
    cin >> c;
    cout << endl <<"Ha sokaig tolt,akkor valoszinuleg nincs valos gyok\n\n";



     pair<float,float> yeehaw=masodfoku(a,b,c);
    cout << "Az egyenlet megoldasai:" << endl << yeehaw.first << endl << yeehaw.second << "\n\n";
    }



   // cout << gyok(9000) << endl;
   // cout << gyok(negyzet(-1)) << endl;
   // cout << hatvany(2,10) << endl;
   // cout << negyzet(0.5) << endl;
    return 0;
}
