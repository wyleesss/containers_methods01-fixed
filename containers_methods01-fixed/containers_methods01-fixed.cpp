#include <iostream>
#include <list>
using namespace std;

template<class I>
void print(const I& start, const I& end) {
    for (I it = start; it != end; ++it)
        cout << *it << " ";
    cout << endl;
}

bool compare(double first, double least) {
    if (least > first)
        if ((least - first) / first * 100 < 10)
            return true;
    if (first > least)
        if ((first - least) / least * 100 < 10)
            return true;
    return false;
}

int main(void) {
    double arr[]{ 1, 2, 1.2, 4.3, 182, 4.4, 5.5, 7.7, 8, 9, 56, 56.6, 200 };
    list<double> list(arr, arr + 13);
    cout << "default list:\n";
    print(list.begin(), list.end());
    list.sort();
    cout << "\nlist after sorting:\n";
    print(list.begin(), list.end());
    list.unique(compare);
    cout << "\nlist after sorting & comparing unique method:\n";
    print(list.begin(), list.end());
}