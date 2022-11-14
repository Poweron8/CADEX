#include <iostream>
#include <list>
#include <memory>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include "curves.h"

using namespace std;

int main()
{
    const auto MaxRadius = 10;
    std::srand(std::time(nullptr)); // use current time as seed for random generator
    list<shared_ptr<curve>>l1;
    list<shared_ptr<curve>>l2;
    const auto count = 10;
    auto MakeCurveShared = [](uint type)
    {
        type = type  % curve::ctCount;
        shared_ptr<curve>sh;
        auto RandomFunc = [](){return (rand() % MaxRadius) + 1;};
        if (type == curve::ctCircle)
            sh = make_shared<circle>(RandomFunc());
        else if (type == curve::ctEllipse)
            sh = make_shared<ellipse>(RandomFunc(), RandomFunc());
        else if (type == curve::ctHelix)
            sh = make_shared<helix>(RandomFunc(), RandomFunc());
        return sh;
    };

    for (auto i = 0u; i < count; ++i)
        l1.push_back(MakeCurveShared(rand()));

    for (const auto& curve : l1)
    {
        auto p = curve->GetPoint(M_PI/4);
        auto d = curve->GetFirstDerivative(M_PI/4);
        string str1 = "Point x = " + to_string(p.x) + " y = " + to_string(p.y) + " z = " + to_string(p.z);
        cout << str1 << endl;
        string str2 = "First derivative x = " + to_string(d.x) + " y = "+ to_string(d.y) + " z = " + to_string(d.z);
        cout << str2 << endl;
    }
    for (const auto& curve : l1)
    {
        if (curve->GetType() == curve::ctCircle)
            l2.push_back(curve);
    }
    l2.sort([](const shared_ptr<curve>& sh1, const shared_ptr<curve>& sh2) {return sh1->GetRadius() < sh2->GetRadius();});
    uint RadiusSum = 0;
    for (const auto& curve : l2)
        RadiusSum += curve->GetRadius();
    cout << "Total radius sum = " << RadiusSum << endl;

return 0;
}
