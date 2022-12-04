#include <iostream>
#include <string>
using namespace std;

class JSValue
{
    public:
    string value;
};

class JSBool: public JSValue
{
    public:
    JSBool(bool value)
    {
        this->value = value ? "true" : "false";   
    }
};

class JSString : public JSValue
{
    public:
    JSString(string value)
    {
        
        this->value = "\"" + value + "\"" ;
    }
};

class JSInt : public JSValue
{
    public:
    JSInt(int value)
    {
        this->value = to_string(value);
    }
};

class JSArr : public JSValue
{
    public:
    JSArr(JSValue** pvalAr, int n)
    {
        value = "[ ";
        for(int i = 0; i < n; i++)
        {
            value.append(pvalAr[i]->value);
            if(i != n-1) value.append(", ");
        }
        value.append(pvalAr[n-1]->value + "]");
    }
};

class JSPair
{
    public:
    JSPair(string key,JSValue value)
    {
        this->key = key;
        this->value = value;
    }
    string key;
    JSValue value;
};

class JSON  
{
    public:
    JSON(JSPair** jspair, int n)
    {
        for(int i = 0; i < n; i++)
        {
            pairs[i] = jspair[i]; 
        }
    }
    void Output()
    {

        for(int i = 0; i < 10; i++)
        {
            cout << "\"" << pairs[i]->key << "\": " << pairs[i]->value.value << endl;
        }
    }
    JSPair* pairs[10];
};

int main()
{
    JSPair* jsp[10];
    JSPair jspr1("key1", JSString("value1"));
    jsp[0] = &jspr1;
    JSPair jspr2("key2", JSBool(true));
    jsp[1] = &jspr2;
    JSPair jspr3("key3", JSInt(150000));
    jsp[2] = &jspr3;
    JSValue* jsarr[] = {new JSString("array1"), new JSBool(false), new JSInt(241415)};
    JSPair jspr4("key4", JSArr(jsarr);
    jsp[3] = &jspr4;
    JSON js(jsp);
    js.Output();
    delete jsarr[0];
    delete jsarr[1];
    delete jsarr[2];
    return 0;
}
