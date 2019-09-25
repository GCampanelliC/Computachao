#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d;
    deque<int>:: iterator it;
    d.push_back(5);
    printf("d = {");
            for (it = d.begin(); it != d.end(); ++it)
            {
                printf(" %d", *it);
            }
            printf("}\n");
            d.push_back(2);
            printf("d = {");
            for (it = d.begin(); it != d.end(); ++it)
            {
                printf(" %d", *it);
            }
            printf("}\n");
            d.push_front(3);
            printf("d = {");
            for (it = d.begin(); it != d.end(); ++it)
            {
                printf(" %d", *it);
            }
            printf("}\n");
            d.pop_back();
            printf("d = {");
            for (it = d.begin(); it != d.end(); ++it)
            {
                printf(" %d", *it);
            }
            printf("}\n");
            d.pop_front();
            printf("d = {");
            for (it = d.begin(); it != d.end(); ++it)
            {
                printf(" %d", *it);
            }
            printf("}\n");
return 0;
}
