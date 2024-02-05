#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QFormLayout>
#include "neurona.h"
#include "administradorneuronas.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget window;
    window.setWindowTitle("Captura de Neuronas");

    QLabel *idLabel = new QLabel("ID:");
    QLineEdit *idLineEdit = new QLineEdit;

    QLabel *voltajeLabel = new QLabel("Voltaje:");
    QLineEdit *voltajeLineEdit = new QLineEdit;

    QLabel *posXLabel = new QLabel("Posición X:");
    QLineEdit *posXLineEdit = new QLineEdit;

    QLabel *posYLabel = new QLabel("Posición Y:");
    QLineEdit *posYLineEdit = new QLineEdit;

    QLabel *redLabel = new QLabel("Rojo:");
    QLineEdit *redLineEdit = new QLineEdit;

    QLabel *greenLabel = new QLabel("Verde:");
    QLineEdit *greenLineEdit = new QLineEdit;

    QLabel *blueLabel = new QLabel("Azul:");
    QLineEdit *blueLineEdit = new QLineEdit;

    QPushButton *saveButton = new QPushButton("Guardar");

    QFormLayout *formLayout = new QFormLayout;
    formLayout->addRow(idLabel, idLineEdit);
    formLayout->addRow(voltajeLabel, voltajeLineEdit);
    formLayout->addRow(posXLabel, posXLineEdit);
    formLayout->addRow(posYLabel, posYLineEdit);
    formLayout->addRow(redLabel, redLineEdit);
    formLayout->addRow(greenLabel, greenLineEdit);
    formLayout->addRow(blueLabel, blueLineEdit);
    formLayout->addRow(saveButton);

    window.setLayout(formLayout);

    QObject::connect(saveButton, &QPushButton::clicked, [&] {
        bool conversionOk;
        int id = idLineEdit->text().toInt(&conversionOk);
        if (!conversionOk) {
            // Manejar el error de conversión si es necesario
            return;
        }

        double voltaje = voltajeLineEdit->text().toDouble(&conversionOk);
        if (!conversionOk) {
            // Manejar el error de conversión si es necesario
            return;
        }

        int posX = posXLineEdit->text().toInt(&conversionOk);
        if (!conversionOk) {
            // Manejar el error de conversión si es necesario
            return;
        }

        int posY = posYLineEdit->text().toInt(&conversionOk);
        if (!conversionOk) {
            // Manejar el error de conversión si es necesario
            return;
        }

        int red = redLineEdit->text().toInt(&conversionOk);
        if (!conversionOk) {
            // Manejar el error de conversión si es necesario
            return;
        }

        int green = greenLineEdit->text().toInt(&conversionOk);
        if (!conversionOk) {
            // Manejar el error de conversión si es necesario
            return;
        }

        int blue = blueLineEdit->text().toInt(&conversionOk);
        if (!conversionOk) {
            // Manejar el error de conversión si es necesario
            return;
        }

        Neurona neurona(id, voltaje, posX, posY, red, green, blue);
        AdministradorNeuronas::getInstance().agregar_final(neurona);
        AdministradorNeuronas::getInstance().mostrar();
    });

    window.show();

    return a.exec();
}
