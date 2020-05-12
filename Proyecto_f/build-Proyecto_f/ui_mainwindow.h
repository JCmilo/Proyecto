/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_5;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *N_carnet;
    QPushButton *Button;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *v_dato;
    QLineEdit *f_dato;
    QLineEdit *volt_dato;
    QLineEdit *t_dato;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_8;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuM;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(553, 394);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 20, 481, 291));
        widget->setMaximumSize(QSize(481, 291));
        verticalWidget = new QWidget(widget);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        verticalWidget->setGeometry(QRect(-10, -5, 491, 301));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        dateTimeEdit = new QDateTimeEdit(verticalWidget);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));

        verticalLayout_5->addWidget(dateTimeEdit);

        label = new QLabel(verticalWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_5->addWidget(label, 0, Qt::AlignHCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        N_carnet = new QLineEdit(verticalWidget);
        N_carnet->setObjectName(QStringLiteral("N_carnet"));

        horizontalLayout->addWidget(N_carnet);

        Button = new QPushButton(verticalWidget);
        Button->setObjectName(QStringLiteral("Button"));

        horizontalLayout->addWidget(Button);


        verticalLayout_5->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_4->setContentsMargins(22, 0, -1, 0);
        label_8 = new QLabel(verticalWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(16777215, 17));

        horizontalLayout_4->addWidget(label_8);

        label_7 = new QLabel(verticalWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(16777215, 17));

        horizontalLayout_4->addWidget(label_7);

        label_9 = new QLabel(verticalWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMaximumSize(QSize(16777215, 17));

        horizontalLayout_4->addWidget(label_9);


        horizontalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(verticalWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_5 = new QLabel(verticalWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(verticalWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_4 = new QLabel(verticalWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_3 = new QLabel(verticalWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        v_dato = new QLineEdit(verticalWidget);
        v_dato->setObjectName(QStringLiteral("v_dato"));

        verticalLayout_4->addWidget(v_dato);

        f_dato = new QLineEdit(verticalWidget);
        f_dato->setObjectName(QStringLiteral("f_dato"));

        verticalLayout_4->addWidget(f_dato);

        volt_dato = new QLineEdit(verticalWidget);
        volt_dato->setObjectName(QStringLiteral("volt_dato"));

        verticalLayout_4->addWidget(volt_dato);

        t_dato = new QLineEdit(verticalWidget);
        t_dato->setObjectName(QStringLiteral("t_dato"));

        verticalLayout_4->addWidget(t_dato);

        label_10 = new QLabel(verticalWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_4->addWidget(label_10);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lineEdit_7 = new QLineEdit(verticalWidget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        verticalLayout_3->addWidget(lineEdit_7);

        lineEdit_9 = new QLineEdit(verticalWidget);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        verticalLayout_3->addWidget(lineEdit_9);

        lineEdit_10 = new QLineEdit(verticalWidget);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        verticalLayout_3->addWidget(lineEdit_10);

        lineEdit_11 = new QLineEdit(verticalWidget);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));

        verticalLayout_3->addWidget(lineEdit_11);

        lineEdit_8 = new QLineEdit(verticalWidget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        verticalLayout_3->addWidget(lineEdit_8);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 553, 22));
        menuM = new QMenu(menuBar);
        menuM->setObjectName(QStringLiteral("menuM"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuM->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", " N\303\272mero de carnet.", Q_NULLPTR));
        Button->setText(QApplication::translate("MainWindow", "Ingresar", Q_NULLPTR));
        label_8->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "Medida", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Estado", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Velocidad", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Frecuencia", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Voltaje", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Temperatura ", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Estando general ", Q_NULLPTR));
        label_10->setText(QString());
        menuM->setTitle(QApplication::translate("MainWindow", "Funcionamiento del Motor", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
