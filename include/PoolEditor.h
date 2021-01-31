#pragma once

#include <QMainWindow>

namespace Ui {
class PoolEditor;
}

class PoolEditor : public QMainWindow
{
    Q_OBJECT

public:
    explicit PoolEditor(QWidget *parent = nullptr);
    ~PoolEditor();

private:
    Ui::PoolEditor *ui;
};

