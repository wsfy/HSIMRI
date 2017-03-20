#include "hdiff_mainwindow.h"
#include "ui_hdiff_mainwindow.h"

#include <QtDebug>
//#include "mitkIOUtil.h"
//#include "itkPointShell.h"

//#include "xrtensormapper2d.h"
//#include "xrtensormapper3d.h"
//#include "xrodfmapper2d.h"
//#include "xrodfmapper3d.h"

HDiff_MainWindow::HDiff_MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HDiff_MainWindow)
{
    ui->setupUi(this);

    // 由于没有显示工具栏，通过代码显示工具栏。
    this->CreateToolBar();

    this->processPropertyForm = new Process_property_form;

    /* 
	设置主界面左边要显示的widget，即设置默认的触发器。
	但是若要调用该函数，前提必须有连接函数。
	*/
    this->onActionPropertyTriggered();
	//ds_main = mitk::StandaloneDataStorage::New();
	//ui->dockWidget->setDataStorage(ds_main);


    // 显示右边的自定义控件。
    //ui->Viewer->SetDataStorage();
}

HDiff_MainWindow::~HDiff_MainWindow()
{
    delete ui;
}

/*
void HDiff_MainWindow::on_menuTool_triggered()
{

}
*/

void HDiff_MainWindow::CreateToolBar()
{
    // 1
    QMenu * menuLoad = new QMenu;
    menuLoad->addAction(ui->openAction);
    menuLoad->addAction(ui->saveAction);
    menuLoad->addAction(ui->saveAsAction);

    QToolButton *btnOpen = new QToolButton;
    btnOpen->setMenu(menuLoad);
    btnOpen->setText(tr("Load"));
    btnOpen->setPopupMode(QToolButton::MenuButtonPopup);
    btnOpen->setAutoRaise(true);
    btnOpen->setIconSize(QSize(30,30));
    // add picture
    btnOpen->setIcon(QIcon(":/viewer/img/save.png"));
	//D:\resources\6_Qt\projects\HSIMRI\img
    // set button style
    btnOpen->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    // 2.添加保存按钮。
    QToolButton *btnSave = new QToolButton;
    btnSave->setText(tr("Save"));
    btnSave->setAutoRaise(true);
    btnSave->setIconSize(QSize(30,30));
    btnOpen->setIcon(QIcon(":/viewer/img/open.png"));
	btnOpen->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    // 在ui界面中显示按钮部件。
    ui->mainToolBar->addWidget(btnOpen);
    ui->mainToolBar->addWidget(btnSave);
    ui->mainToolBar->addSeparator();

    //connect(btnOpen, SIGNAL(clicked()), this, SLOT(on_openAction_triggered()));
    connect(btnOpen, SIGNAL(clicked()), this, SLOT(onActionPropertyTriggered()));
}

void HDiff_MainWindow::onActionPropertyTriggered()
{
    ui->dockWidget->setWidget(this->processPropertyForm);
    ui->dockWidget->setWindowTitle(tr("MRI Process"));
    ui->dockWidget->show();
}

// 显示左边的控件。
// on_SelectNodeChanged()函数已在hdiff_mainwindow.h中声明。
/*
void HDiff_MainWindow::on_SelectedNodeChanged(mitk::DataNode::Pointer dNode, int dataType)
{      	         
    this->processPropertyForm->SetDataNode(this->ds_main, dNode, dataType);

    switch(dataType)
    {
        case 1:
            ui->dockWidget->setWidget(this->processPropertyForm);
            ui->dockWidget->setWindowTitle(tr("Property"));
        break;
    }
}
*/
