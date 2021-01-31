#include "PoolEditor.h"
#include "ui_PoolEditor.h"

PoolEditor::PoolEditor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PoolEditor)
{
    ui->setupUi(this);
}

PoolEditor::~PoolEditor()
{
    delete ui;
}
