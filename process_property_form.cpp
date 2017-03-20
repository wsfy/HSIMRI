#include "process_property_form.h"
#include "ui_process_property_form.h"

//#include <mitkDiffusionPropertyHelper.h>
//#include <itkDiffusionTensor3DReconstructionImageFilter.h>
//#include <mitkImageCaster.h>
//#include <mitkITKImageImport.h>
//#include <itkTensorReconstructionWithEigenvalueCorrectionFilter.h>
//#include <itkPointShell.h>
//#include <itkDiffusionQballReconstructionImageFilter.h>
//#include <itkAnalyticalDiffusionQballReconstructionImageFilter.h>
//#include <itkFlipImageFilter.h>

//#include <xrtensormapper2d.h>
//#include <xrtensormapper3d.h>
//#include <xrodfmapper2d.h>
//#include <xrodfmapper3d.h>

Process_property_form::Process_property_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Process_property_form)
{
    ui->setupUi(this);
}

// 析构函数。
Process_property_form::~Process_property_form()
{
    delete ui;
}

/*
void Process_property_form::SetButtonEnabled(bool b)
{
	
    ui->toolButton_tensorEstimation->setEnabled(b);
    ui->toolButton_ODFEstimation->setEnabled(b);
    ui->toolButton_extract->setEnabled(b);
    ui->toolButton_flip->setEnabled(b);
    ui->toolButton_threshold->setEnabled(b);
    qApp->processEvents();
}
*/

/*
void Process_property_form::SetDataNode(mitk::StandaloneDataStorage::Pointer ds, mitk::DataNode::Pointer dNode, int dataType)
{
	
    m_dNode = dNode;
    m_ds = ds;

    if(m_dNode.IsNotNull() && dataType==1)
    {
        std::string name;
        m_dNode->GetStringProperty("name",name);
        m_nodeName = QString::fromStdString(name);
        //ui->lineEdit_name->setText( this->m_nodeName );
        //ui->lineEdit_name->setStyleSheet( "color: green" );
        // setButtonEnabled()这个成员方法需要自己定义。
        this->SetButtonEnabled(true);

        int num;
        mitk::Image::Pointer img = dynamic_cast<mitk::Image *>(m_dNode->GetData());
        num = img->GetPixelType().GetNumberOfComponents();
        //ui->spinBox_from->setRange(0,num);
        //ui->spinBox_to->setRange(0,num);

        int component;
        m_dNode->GetIntProperty("Image.Displayed Component",component);
        //ui->spinBox_from->setValue(component);
        //ui->spinBox_to->setValue(component);
    }
    else
    {
        //ui->lineEdit_name->setText( tr("Select in Data Manager") );
        //ui->lineEdit_name->setStyleSheet( "color: red" );
        this->SetButtonEnabled(false);
    }
	
}
*/