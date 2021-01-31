#include "MainWindow.h"

#include <QMdiSubWindow>

MainWindow::MainWindow()
{
    this->mdi = new QMdiArea;

    this->resize(800, 600);

    this->setCentralWidget(this->mdi);

    QMdiSubWindow *sub = new QMdiSubWindow;
    sub->setAttribute(Qt::WA_DeleteOnClose);
    this->mdi->addSubWindow(sub);
}
