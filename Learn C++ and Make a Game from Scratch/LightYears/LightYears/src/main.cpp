#include <SFML/Graphics.hpp>
#include <iostream>
#include <memory>

#include "framework/Application.h"


int main()
{
    //===Render Window===============================
    //allocating oh heap by pointers
    /* Explanation to ly::Application* app = new ly::Application();
        ly::Application*: �� ��������� ������ ��'���� ����� Application � �������� ���� ly. � ������� �������, ly ���� ��'�� ������� ������, �������� ��� �������� ����, ��� ������ ���� Application.

        app: �� ��'� �����, ��� ���� ���������� �� ��������� ��'��� Application. �� ������ ��������������� ����-��� ��'�, ��� ������� �������.

        =: �� �������� ���������. ³� ����������� ��� ����, ��� ��'����� ��'���, ���� ����������� ������� new ly::Application() � ������ app.

        new: �� ��������, ���� ��������������� ��� ���������� ��������� ������ ��'���� � ���'��. ��'��� Application ���� ������� � ��� ���'��, � ���� ������ ���� ��������� ������� new.

        ly::Application(): �� ������ ������������ ����� Application � �������� ���� ly. ����������� - �� ����������� ����� �����, ���� ����������� ��� �������� ������ ��'���� ����� �����. ³� ���������� �������� �������� ��'����.

        ����, ���� ��� ����� ���� ������� ����� ��'��� ����� Application � �������� ���� ly � ����'��� ���� �� ����� app, ��� ���� ����������������� ��� �������� ������ � ��� ��'�����.
    */
    ly::Application* app = new ly::Application();
    app->Run();

    //allocating oh heap by unique pointers
    //more safety - going one time
    //std::unique_ptr<ly::Application> app{ new ly::Application };
    //OR
    //std::unique_ptr<ly::Application> app = std::make_unique<ly::Application>() ;
}