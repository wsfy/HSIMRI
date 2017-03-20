#ifndef H_VIEWER_H
#define H_VIEWER_H

#include <QWidget>

namespace Ui {
class H_Viewer;
}

class H_Viewer : public QWidget
{
    Q_OBJECT

public:
    explicit H_Viewer(QWidget *parent = 0);
    ~H_Viewer();

private:
    Ui::H_Viewer *ui;
};

#endif // H_VIEWER_H
