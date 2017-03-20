/********************************************************************************
** Form generated from reading UI file 'process_property_form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESS_PROPERTY_FORM_H
#define UI_PROCESS_PROPERTY_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Process_property_form
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QSlider *horizontalSlider;
    QGroupBox *groupBox_2;
    QSlider *horizontalSlider_2;
    QGroupBox *groupBox_3;
    QSpinBox *spinBox;
    QGroupBox *groupBox_4;
    QSlider *horizontalSlider_3;

    void setupUi(QWidget *Process_property_form)
    {
        if (Process_property_form->objectName().isEmpty())
            Process_property_form->setObjectName(QStringLiteral("Process_property_form"));
        Process_property_form->resize(410, 680);
        scrollArea = new QScrollArea(Process_property_form);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(-1, 0, 411, 681));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 409, 679));
        horizontalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 9, 391, 121));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(horizontalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 140, 391, 81));
        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(120, 30, 160, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 230, 391, 121));
        horizontalSlider_2 = new QSlider(groupBox_2);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(120, 50, 160, 22));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 360, 391, 121));
        spinBox = new QSpinBox(groupBox_3);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(11, 50, 361, 22));
        spinBox->setValue(90);
        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 490, 391, 80));
        horizontalSlider_3 = new QSlider(groupBox_4);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(120, 30, 160, 22));
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(Process_property_form);

        QMetaObject::connectSlotsByName(Process_property_form);
    } // setupUi

    void retranslateUi(QWidget *Process_property_form)
    {
        Process_property_form->setWindowTitle(QApplication::translate("Process_property_form", "Form", 0));
        label->setText(QApplication::translate("Process_property_form", "Sequence:", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Process_property_form", "Spin Echo", 0)
         << QApplication::translate("Process_property_form", "Gradient Echo", 0)
         << QApplication::translate("Process_property_form", "Inversion Recovery", 0)
         << QApplication::translate("Process_property_form", "Multi Echo", 0)
        );
        groupBox->setTitle(QApplication::translate("Process_property_form", "Echo Time", 0));
        groupBox_2->setTitle(QApplication::translate("Process_property_form", "Repetition Time", 0));
        groupBox_3->setTitle(QApplication::translate("Process_property_form", "Flip Angle", 0));
        groupBox_4->setTitle(QApplication::translate("Process_property_form", "Inversion Time(IR Parameter)", 0));
    } // retranslateUi

};

namespace Ui {
    class Process_property_form: public Ui_Process_property_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESS_PROPERTY_FORM_H
