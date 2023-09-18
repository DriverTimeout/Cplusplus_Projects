#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>

class GUIExercise : public QWidget
{
    Q_OBJECT

public:
    GUIExercise(QWidget *parent = nullptr)
        : QWidget(parent)
    {
        setupUI();
    }

private slots:
    void calculateResult();
    void clearFields();

private:
    QLabel *n1;
    QLabel *n2;
    QLabel *n3;
    QLabel *n4;
    QLabel *n5;
    QLineEdit *number1;
    QLineEdit *number2;
    QLineEdit *number3;
    QLineEdit *number4;
    QLineEdit *number5;
    QLabel *r1;
    QLineEdit *result;
    QPushButton *bt1;
    QPushButton *btnClear;

    void setupUI()
    {
        n1 = new QLabel("Miles To Drive : ");
        n2 = new QLabel("Mile Per Gallon : ");
        n3 = new QLabel("Gasoline Price: ");
        n4 = new QLabel("Parking Cost: ");
        n5 = new QLabel("Tolls Cost: ");
        r1 = new QLabel("RESULT : ");

        number1 = new QLineEdit();
        number2 = new QLineEdit();
        number3 = new QLineEdit();
        number4 = new QLineEdit();
        number5 = new QLineEdit();
        result = new QLineEdit();

        bt1 = new QPushButton("ADDITION");
        btnClear = new QPushButton("CLEAR");

        QGridLayout *layout = new QGridLayout();
        layout->addWidget(n1, 0, 0);
        layout->addWidget(number1, 0, 1);
        layout->addWidget(n2, 1, 0);
        layout->addWidget(number2, 1, 1);
        layout->addWidget(n3, 2, 0);
        layout->addWidget(number3, 2, 1);
        layout->addWidget(n4, 3, 0);
        layout->addWidget(number4, 3, 1);
        layout->addWidget(n5, 4, 0);
        layout->addWidget(number5, 4, 1);
        layout->addWidget(bt1, 5, 0);
        layout->addWidget(btnClear, 5, 1);
        layout->addWidget(r1, 6, 0);
        layout->addWidget(result, 6, 1);

        setLayout(layout);

        connect(bt1, SIGNAL(clicked()), this, SLOT(calculateResult()));
        connect(btnClear, SIGNAL(clicked()), this, SLOT(clearFields()));
    }
};

void GUIExercise::calculateResult()
{
    double a = number1->text().toDouble();
    double b = number2->text().toDouble();
    double c = number3->text().toDouble();
    double d = number4->text().toDouble();
    double f = number5->text().toDouble();
    double y = a / b;
    double z = y * c;
    double r = d + f;
    double tro = z + r;

    result->setText(QString::number(tro));
}

void GUIExercise::clearFields()
{
    number1->clear();
    number2->clear();
    number3->clear();
    number4->clear();
    number5->clear();
    result->clear();
    number1->setFocus();
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    GUIExercise gui;
    gui.setWindowTitle("CALCULATIONS");
    gui.setFixedSize(500, 300);
    gui.show();
    return app.exec();
}
