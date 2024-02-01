#include <iostream>
#define ll long long
#define VERSION "1.0.0"
#define GIAOSUDEPTRAI  
using namespace std;
ofstream in; ofstream out;
#define ip in
#define op out
bool _check_build = false;
bool _check_srand = false;
void srand_build() {srand(time(NULL)); _check_srand = true;}
ll rand_int(ll l, ll h){
    return l + ((ll)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (ll)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (ll)rand() * (RAND_MAX + 1) +
                rand()) % (h - l + 1);
}

string rand_str(size_t __length){
    auto randchar = []() -> char
    {
        const char charset[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
        const size_t max_index = (sizeof(charset) - 1);
        return charset[ rand() % max_index ];
    };
    string __str(__length,0);
    generate_n( __str.begin(), __length, randchar );
    return __str;
}


void file_build(string _folder, string _name,string _inp, string _out){
    in.open((_folder + _name + _inp).c_str());
    out.open((_folder + _name + _out).c_str());

    if(!_check_srand) srand_build();

    _check_build = true;
}

void file_end(){
    if(_check_build){
        in.close();
        out.close();
    }
    else cout << "Chua end file!" << '\n';
}

