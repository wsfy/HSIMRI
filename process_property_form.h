#ifndef PROCESS_PROPERTY_FORM_H
#define PROCESS_PROPERTY_FORM_H

#include <QWidget>

#include <QMenu>
#include <QList>
#include <QGroupBox>
//#include <mitkStandaloneDataStorage.h>
//#include <mitkDataNode.h>
//#include <mitkImage.h>
//#include <mitkTensorImage.h>
//#include <mitkDiffusionPropertyHelper.h>

namespace Ui {
	class Process_property_form;
}

class Process_property_form : public QWidget
{
    Q_OBJECT

public:
    explicit Process_property_form(QWidget *parent = 0);
    ~Process_property_form();

    // 声明一个公有方法。
    //void SetDataNode(mitk::StandaloneDataStorage::Pointer ds, mitk::DataNode::Pointer dNode, int dataType);

private:
    Ui::Process_property_form *ui;
	/*
    mitk::DataNode::Pointer m_dNode;
    mitk::StandaloneDataStorage::Pointer m_ds;
	QString m_nodeName;
	*/
private:	
	/*
	void SetButtonEnabled(bool b);
	*/
};

#endif // PROCESS_PROPERTY_FORM_H
