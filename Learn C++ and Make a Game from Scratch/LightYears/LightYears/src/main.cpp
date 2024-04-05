#include <SFML/Graphics.hpp>
#include <iostream>
#include <memory>

#include "framework/Application.h"


int main()
{
    //===Render Window===============================
    //allocating oh heap by pointers
    /* Explanation to ly::Application* app = new ly::Application();
        ly::Application*: Це створення нового об'єкта класу Application з простору імен ly. У більшості випадків, ly буде ім'ям певного модулю, бібліотеки або простору імен, яке містить клас Application.

        app: Це ім'я змінної, яка буде посилатися на створений об'єкт Application. Ви можете використовувати будь-яке ім'я, яке вважаєте зручним.

        =: Це оператор присвоєння. Він призначений для того, щоб зв'язати об'єкт, який повертається виразом new ly::Application() зі змінною app.

        new: Це оператор, який використовується для динамічного створення нового об'єкта у пам'яті. Об'єкт Application буде виділено у купі пам'яті, і його адреса буде повернута виразом new.

        ly::Application(): Це виклик конструктора класу Application з простору імен ly. Конструктор - це спеціальний метод класу, який викликається при створенні нового об'єкта цього класу. Він встановлює початкові значення об'єкта.

        Отже, весь цей рядок коду створює новий об'єкт класу Application з простору імен ly і прив'язує його до змінної app, яка буде використовуватися для подальшої роботи з цим об'єктом.
    */
    ly::Application* app = new ly::Application();
    app->Run();

    //allocating oh heap by unique pointers
    //more safety - going one time
    //std::unique_ptr<ly::Application> app{ new ly::Application };
    //OR
    //std::unique_ptr<ly::Application> app = std::make_unique<ly::Application>() ;
}