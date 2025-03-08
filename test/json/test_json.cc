#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include "json.hpp"
using namespace std;
using nlohmann::json;

void test1()
{
    json js;
    js["status"] = 200;
    js["msg"] = "OK";
    cout << js << endl;
}

void test2()
{
    json js;
    js["id"] = {1, 2, 3, 4, 5};
    js["msg"]["name1"] = "hello name1.";
    js["msg"]["name2"] = js;
    cout << js << endl;
}

void test3()
{
    json js;

    vector<int> vec{1, 2, 5};
    
    map<int, string> mp;
    mp.insert({1, "a"});
    mp.insert({2, "b"});
    
    js["vector"] = vec;
    js["map"] = mp;

    cout << js << endl;

    string buf = js.dump(); // js ==> 序列化为json字符串
    cout << buf << endl;
}

// 反序列化
void test4()
{
    string recv = []() -> string {
        json js;
        js["1"] = vector<int>{1, 2, 3};
        return js.dump();
    }();

    json buf = json::parse(recv);
    cout << buf << endl;
}

int main()
{
    test1();
    test2();
    test3();
    test4();
}