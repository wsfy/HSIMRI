#ifndef HDIFF_MAINWINDOW_H
#define HDIFF_MAINWINDOW_H

#include <QMainWindow>
#include <QToolButton>

#include "process_property_form.h"

#include <QMainWindow>
#include <QList>
#include <QToolButton>
#include <QFileDialog>

//#include "mitkStandaloneDataStorage.h"
//#include "mitkProperties.h"
//#include <QmitkStatusBar.h>
//#include <QmitkMemoryUsageIndicatorView.h>
//#include <QmitkProgressBar.h>

namespace Ui {
class HDiff_MainWindow;
}

class HDiff_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit HDiff_MainWindow(QWidget *parent = 0);
    ~HDiff_MainWindow();

private:
    Ui::HDiff_MainWindow *ui;

    // 声明要使用的成员变量和成员方法。
    void CreateToolBar();

    // 声明指向自定义类的指针。
    Process_property_form *processPropertyForm;

	// 声明一个私有变量。
	//mitk::StandaloneDataStorage::Pointer ds_main;

private slots://声明槽函数
    // void on_menuTool_triggered();
    void onActionPropertyTriggered();
    // 声明界面的左侧选择哪个控件的函数。
    //void on_SelectedNodeChanged(mitk::DataNode::Pointer dNode, int dataType);


};

#endif // HDIFF_MAINWINDOW_H
