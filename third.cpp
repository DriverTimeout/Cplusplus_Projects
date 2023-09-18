#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("FlowLayout Sample");

    QGridLayout *layout = new QGridLayout(&window);

    QPushButton *btn1 = new QPushButton("Button 1");
    QPushButton *btn2 = new QPushButton("Button 2");
    QPushButton *btn3 = new QPushButton("Button 3");
    QPushButton *btn4 = new QPushButton("Button 4");
    QPushButton *btn5 = new QPushButton("Button 5");
    QLabel *lblsample1 = new QLabel("Test");

    layout->addWidget(btn1, 0, 0);
    layout->addWidget(lblsample1, 0, 1);
    layout->addWidget(btn2, 1, 1);
    layout->addWidget(btn3, 1, 2);
    layout->addWidget(btn4, 1, 0);
    layout->addWidget(btn5, 2, 1);

    window.setLayout(layout);

    window.resize(300, 300);
    window.show();

    return app.exec();
}
