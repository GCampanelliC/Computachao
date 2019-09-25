#include <bits/stdc++.h>
using namespace std;

    int main(){

            bitset<10> s(string("0010011010"));
    // from right to left
    cout << "s = (" << s << ")\n";
    cout << "s[4] = " << s[4] << "\n";
    cout << "s[5] = " << s[5] << "\n";
        printf("Total = %d\n", s.count());
            bitset<10> a(string("0010110110"));
            bitset<10> b(string("1011011000"));
    cout << "a = (" << a << ")\n";
    cout << "b = (" << b << ")\n";
    cout << "a&b = (" << (a&b) << ")\n";
    cout << "a|b = (" << (a|b) << ")\n";
    cout << "a^b = (" << (a^b) << ")\n";
return 0;
}
