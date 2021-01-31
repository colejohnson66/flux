#pragma once

#include <QMainWindow>
#include <QMdiArea>

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QMdiArea *mdi;

public:
    MainWindow();
};
