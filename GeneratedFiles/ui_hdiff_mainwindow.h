/********************************************************************************
** Form generated from reading UI file 'hdiff_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HDIFF_MAINWINDOW_H
#define UI_HDIFF_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HDiff_MainWindow
{
public:
    QAction *loadAction;
    QAction *saveAction;
    QAction *saveAsAction;
    QAction *printAction;
    QAction *exitAction;
    QAction *mriAction;
    QWidget *centralWidget;
    QGraphicsView *hViewer;
    QMenuBar *menuBar;
    QMenu *menuFile_F;
    QMenu *menuProcessing_P;
    QMenu *menuTool_T;
    QMenu *menuView_V;
    QMenu *menuHelp_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;

    void setupUi(QMainWindow *HDiff_MainWindow)
    {
        if (HDiff_MainWindow->objectName().isEmpty())
            HDiff_MainWindow->setObjectName(QStringLiteral("HDiff_MainWindow"));
        HDiff_MainWindow->resize(741, 645);
        loadAction = new QAction(HDiff_MainWindow);
        loadAction->setObjectName(QStringLiteral("loadAction"));
        saveAction = new QAction(HDiff_MainWindow);
        saveAction->setObjectName(QStringLiteral("saveAction"));
        saveAsAction = new QAction(HDiff_MainWindow);
        saveAsAction->setObjectName(QStringLiteral("saveAsAction"));
        printAction = new QAction(HDiff_MainWindow);
        printAction->setObjectName(QStringLiteral("printAction"));
        exitAction = new QAction(HDiff_MainWindow);
        exitAction->setObjectName(QStringLiteral("exitAction"));
        mriAction = new QAction(HDiff_MainWindow);
        mriAction->setObjectName(QStringLiteral("mriAction"));
        centralWidget = new QWidget(HDiff_MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        hViewer = new QGraphicsView(centralWidget);
        hViewer->setObjectName(QStringLiteral("hViewer"));
        hViewer->setGeometry(QRect(0, 1, 501, 581));
        HDiff_MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HDiff_MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 741, 23));
        menuFile_F = new QMenu(menuBar);
        menuFile_F->setObjectName(QStringLiteral("menuFile_F"));
        menuProcessing_P = new QMenu(menuBar);
        menuProcessing_P->setObjectName(QStringLiteral("menuProcessing_P"));
        menuTool_T = new QMenu(menuBar);
        menuTool_T->setObjectName(QStringLiteral("menuTool_T"));
        menuView_V = new QMenu(menuBar);
        menuView_V->setObjectName(QStringLiteral("menuView_V"));
        menuHelp_H = new QMenu(menuBar);
        menuHelp_H->setObjectName(QStringLiteral("menuHelp_H"));
        HDiff_MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HDiff_MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HDiff_MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HDiff_MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HDiff_MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(HDiff_MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);
        HDiff_MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        menuBar->addAction(menuFile_F->menuAction());
        menuBar->addAction(menuProcessing_P->menuAction());
        menuBar->addAction(menuTool_T->menuAction());
        menuBar->addAction(menuView_V->menuAction());
        menuBar->addAction(menuHelp_H->menuAction());
        menuFile_F->addAction(loadAction);
        menuFile_F->addAction(saveAction);
        menuFile_F->addAction(saveAsAction);
        menuFile_F->addSeparator();
        menuFile_F->addAction(printAction);
        menuFile_F->addAction(exitAction);

        retranslateUi(HDiff_MainWindow);

        QMetaObject::connectSlotsByName(HDiff_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *HDiff_MainWindow)
    {
        HDiff_MainWindow->setWindowTitle(QApplication::translate("HDiff_MainWindow", "HDiff_MainWindow", 0));
        loadAction->setText(QApplication::translate("HDiff_MainWindow", "Load(L)", 0));
        saveAction->setText(QApplication::translate("HDiff_MainWindow", "Save(S)", 0));
        saveAsAction->setText(QApplication::translate("HDiff_MainWindow", "Save As(A)", 0));
        printAction->setText(QApplication::translate("HDiff_MainWindow", "Print(P)", 0));
        exitAction->setText(QApplication::translate("HDiff_MainWindow", "Exit(E)", 0));
        mriAction->setText(QApplication::translate("HDiff_MainWindow", "MRI Processing", 0));
        menuFile_F->setTitle(QApplication::translate("HDiff_MainWindow", "File(F)", 0));
        menuProcessing_P->setTitle(QApplication::translate("HDiff_MainWindow", "Processing(P)", 0));
        menuTool_T->setTitle(QApplication::translate("HDiff_MainWindow", "Tool(T)", 0));
        menuView_V->setTitle(QApplication::translate("HDiff_MainWindow", "View(V)", 0));
        menuHelp_H->setTitle(QApplication::translate("HDiff_MainWindow", "Help(H)", 0));
    } // retranslateUi

};

namespace Ui {
    class HDiff_MainWindow: public Ui_HDiff_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HDIFF_MAINWINDOW_H
