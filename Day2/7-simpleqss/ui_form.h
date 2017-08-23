/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *age;
    QComboBox *style;
    QLineEdit *name;
    QLabel *label_3;
    QLabel *label_2;
    QHBoxLayout *hboxLayout;
    QSlider *horizontalSlider;
    QPushButton *pushButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(318, 252);
        vboxLayout = new QVBoxLayout(Form);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        age = new QLineEdit(Form);
        age->setObjectName(QStringLiteral("age"));

        gridLayout->addWidget(age, 2, 1, 1, 2);

        style = new QComboBox(Form);
        style->setObjectName(QStringLiteral("style"));

        gridLayout->addWidget(style, 0, 2, 1, 1);

        name = new QLineEdit(Form);
        name->setObjectName(QStringLiteral("name"));

        gridLayout->addWidget(name, 1, 1, 1, 2);

        label_3 = new QLabel(Form);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(Form);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        vboxLayout->addLayout(gridLayout);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        horizontalSlider = new QSlider(Form);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setStyleSheet(QLatin1String("  QSlider::groove:horizontal {\n"
"      border: 1px solid #999999;\n"
"      height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"      background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"      margin: 2px 0;\n"
"  }\n"
"\n"
"  QSlider::handle:horizontal {\n"
"      background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"      border: 1px solid #5c5c5c;\n"
"      width: 18px;\n"
"      margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"      border-radius: 3px;\n"
"  }"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        hboxLayout->addWidget(horizontalSlider);

        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral(""));

        hboxLayout->addWidget(pushButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        label->setText(QApplication::translate("Form", "Choose Qt Style", 0));
        style->clear();
        style->insertItems(0, QStringList()
         << QApplication::translate("Form", "Windows", 0)
         << QApplication::translate("Form", "Fusion", 0)
         << QApplication::translate("Form", "WindowsXP", 0)
        );
        label_3->setText(QApplication::translate("Form", "Age", 0));
        label_2->setText(QApplication::translate("Form", "Name", 0));
        pushButton->setText(QApplication::translate("Form", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
