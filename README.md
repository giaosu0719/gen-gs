![image](https://github.com/giaosu0719/gen-gs/assets/63047065/7622237e-190d-45ac-885d-f25a821b4a97)# Huong dan dep trai
```cpp
ip << .... ;
op << .... ;
```
vd:
```cpp
ip << "cac" << "\n cac"; # nhap vao file input
out << "cac" << "\n cac" # nhap vao file output
```

Luon luon ```<<``` ko dc ```>>``` khi dung ip , op
```cpp
file_build({folder dir},{name},{ext input},{ext output});
```

vd : 
```cpp
file_build("./deptrai/","vip",".txt",".txt")
```

```cpp
file_end();
```

Luu y: luon luon phai co ```file_end();``` khi ```file_build(...);``` uwu

```cpp
rand_str({size})
```

vd:
```cpp
rand_str(69); # FNuRXhDZqSfCfvLgYYxwTKHwPCqOhMafFUnOKsCTjnoxUROvkEpuITYcsBsbQFEVmPhOG
```

```cpp
rand_int(l,r)
```
vd:
```cpp
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

![image](https://github.com/giaosu0719/gen-gs/assets/63047065/94e1f8c6-07b1-434a-8744-1985308c9cd3)

