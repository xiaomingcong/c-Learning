#include <vector>
using namespace std;

void practise09(){
    vector<float> a,b,c;
    for(int i = 0; i < 10; i++){
        a.push_back(random()%100);
    }

    for(int i = 0; i < 10; i++){
        b.push_back(random()%100);
    }
    float f;
    for(int i = 0; i < 10; i++){
        c.push_back(f = a[i] + b[i]);
        cout << f << endl;
    }


}