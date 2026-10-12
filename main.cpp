#include "book.h"
#include <array>

namespace KimJueun2649073
{
    void printBookArray(const book a[], const int n)
    {
        for (int i=0; i<n; i++)
            std::cout << a[i];
        std::cout << std::endl;
    }
}

int main()
{
    const int n{4};
    using namespace KimJueun2649073;
    book a[n];
    a[0] = book{"C++ programing", 1, 30000};
    a[0].print();
    a[1].setTitle("C programing"); a[1].setID(2); a[1].setprice(20000);
    a[2].input();
    std::cin >> a[3];
    printBookArray(a,n);

    std::array<book, n> arr;
    for (int i=0; i<arr.size(); ++i)
        arr.at(i) = a[i];
    for (const auto& arri: arr)
        arri.print();

    return 0;
}