# Huong dan dep trai
```
ip << .... ;

op << .... ;
```
vd:
```
    ip << "cac" << "\n cac"; # nhap vao file input
    out << "cac" << "\n cac" # nhap vao file output
```

Luon luon "<<" ko dc ">>" khi dung ip , op
```
file_build({folder dir},{name},{ext input},{ext output});
```

vd : 
```
file_build("./deptrai/","vip",".txt",".txt")
```

```
file_end();
```

Luu y: luon luon phai co ```file_end();``` khi ```file_build(...);``` uwu

```
rand_str({size})
```

vd:
```
    rand_str(69); # FNuRXhDZqSfCfvLgYYxwTKHwPCqOhMafFUnOKsCTjnoxUROvkEpuITYcsBsbQFEVmPhOG
```

```
rand_int(l,r)
```
vd:
```
    rand_int(1,69);  # 69
```

# code vd sinh N test

```cpp
#include <bits/stdc++.h>
#include "giaosu.h"
using namespace std;
signed main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cout.tie(0);
    int test = 1;
    while(test--){
        string s = to_string(test);
        file_build("./testda/",s,".inp",".out");

        int a = rand_int(1,69);
        int b = rand_int(1,69);

        ip << a << " " << b;
        op << a + b;

        file_end();
    }
    return 0;
}
```
