#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <locale>

using namespace std;

class Point {
private:
    int x, y;

public:
    // Конструктор с инициализацией координат
    Point(int x, int y) : x(x), y(y) {}

    // Возвращает текстовое представление точки
    string toString() const {
        return "{" + to_string(x) + ";" + to_string(y) + "}";
    }

    // Доступ к координатам
    int getX() const { return x; }
    int getY() const { return y; }

    // Изменение координат точки
    void setX(int newX) { x = newX; }
    void setY(int newY) { y = newY; }
};

class Line {
private:
    Point start, end;

public:
    // Конструкторы для создания линии
    Line(const Point& start, const Point& end) : start(start), end(end) {}
    Line(int x1, int y1, int x2, int y2) : start(x1, y1), end(x2, y2) {}

    // Возвращает текстовое представление линии
    string toString() const {
        return "Линия от " + start.toString() + " до " + end.toString();
    }

    // Изменение начала и конца линии
    void setStart(const Point& newStart) { start = newStart; }
    void setEnd(const Point& newEnd) { end = newEnd; }

    // Вычисление длины линии
    int length() const {
        return static_cast<int>(sqrt(pow(end.getX() - start.getX(), 2) + pow(end.getY() - start.getY(), 2)));
    }

    // Доступ к начальной и конечной точке
    Point getStart() const { return start; }
    Point getEnd() const { return end; }
};

class Student {
private:
    string name;
    vector<int> grades;

public:
    // Конструктор
    Student(const string& name, const vector<int>& grades) : name(name), grades(grades) {}

    // Возвращает текстовое представление студента
    string toString() const {
        string result = "Имя: " + name + " [";
        for (size_t i = 0; i < grades.size(); i++) {
            result += to_string(grades[i]);
            if (i < grades.size() - 1) result += ", ";
        }
        return result + "]";
    }

    // Получение оценок студента
    vector<int>& getGrades() { return grades; }
};

// Функция для создания точек и демонстрации их работы
void task1() {
    Point p1(1, 2), p2(3, 4), p3(5, 6);
    cout << "Точки:\n";
    cout << p1.toString() << endl;
    cout << p2.toString() << endl;
    cout << p3.toString() << endl;
}

// Функция для создания линий и демонстрации их работы
void task2() {
    Line l1(Point(1, 3), Point(23, 8));
    Line l2(Point(5, 10), Point(25, 10));
    Line l3(l1.getStart(), l2.getEnd());

    cout << "Линии:\n";
    cout << l1.toString() << endl;
    cout << l2.toString() << endl;
    cout << l3.toString() << endl;

    // Изменение координат для задания требований
    l1.setStart(Point(2, 4));
    l1.setEnd(Point(24, 9));
    cout << "Измененные координаты первой линии:\n" << l1.toString() << endl;
}

// Функция для работы с сущностью Студент
void task3() {
    Student vasya("Вася", { 3, 4, 5 });
    Student petya("Петя", vasya.getGrades());
    petya.getGrades()[0] = 5;

    cout << "Студенты:\n";
    cout << vasya.toString() << endl;
    cout << petya.toString() << endl;

    // Копирование оценок для Андрея
    vector<int> andrewsGrades = vasya.getGrades();
    Student andrey("Андрей", andrewsGrades);
    cout << andrey.toString() << endl;
}

// Функция для создания точек и линий с новыми требованиями
void task4_1_and_4_2() {
    Point p1(3, 5), p2(25, 6), p3(7, 8);
    Line l1(Point(1, 3), Point(23, 8));
    Line l2(Point(5, 10), Point(25, 10));
    Line l3(l1.getStart(), l2.getEnd());

    cout << "Точки:\n";
    cout << p1.toString() << endl;
    cout << p2.toString() << endl;
    cout << p3.toString() << endl;

    cout << "Линии:\n";
    cout << l1.toString() << endl;
    cout << l2.toString() << endl;
    cout << l3.toString() << endl;
}

// Функция для работы с длиной линии
void task5_3() {
    Line l(Point(1, 1), Point(10, 15));
    cout << "Длина линии: " << l.length() << endl;
}


void displayMenu() {
    cout << "Выберите задание:\n";
    cout << "1. Точка координат\n";
    cout << "2. Прямая\n";
    cout << "3. Студент\n";
    cout << "4. Создаем Точку и Линию\n";
    cout << "5. Длина Линии\n";
    cout << "0. Выход\n";
}

int main() {
    setlocale(LC_ALL, "RU");
    int choice;
    do {
        displayMenu();
        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice) {
        case 1: task1(); break;
        case 2: task2(); break;
        case 3: task3(); break;
        case 4: task4_1_and_4_2(); break;
        case 5: task5_3(); break;
        case 0: cout << "Выход...\n"; break;
        default: cout << "Некорректный выбор, попробуйте снова.\n";
        }
        cout << endl;
    } while (choice != 0);

    return 0;
}
