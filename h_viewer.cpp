#include "h_viewer.h"
#include "ui_h_viewer.h"

H_Viewer::H_Viewer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::H_Viewer)
{
    ui->setupUi(this);
}

H_Viewer::~H_Viewer()
{
    delete ui;
}
