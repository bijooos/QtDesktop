#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QMenu *fileMenu = new QMenu(this);
//    fileMenu->setTitle("File");
//    QAction *newAction = new QAction(this);
//    newAction->setText("New");
//    fileMenu->addAction(newAction);
//    ui->menuBar->addMenu(fileMenu);
//    ui->

   // QObject::connect(newAction, SIGNAL(triggered(bool)), this, SLOT(on_newAction_triggered(bool)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_newAction_triggered(bool)
{
    ui->label->setText("Triggered");

}
