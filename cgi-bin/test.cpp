#include <iostream>

using namespace std;

int main()
{
    cout<<"Content-type: text/html"<<endl<<endl;

    cout<<"<!doctype html>\n"
            "<html>\n"
            "<head>\n"
            "<title>Відповідь сервера</title>"
            "</head>\n"
            "<body>\n"
                "Вітаннячко!\n"
            "</body>";
    return 0;
}