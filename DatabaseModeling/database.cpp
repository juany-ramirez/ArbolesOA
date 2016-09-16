#include "database.h"
#include "ui_database.h"
#include <iostream>
#include <fstream>
#include <string>
#include "OpenFileDialog.h"
using namespace std;

Database::Database(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Database)
{
    ui->setupUi(this);
}

Database::~Database()
{
    delete ui;
}

void Database::on_pushButton_8_clicked()
{/*
    string line;
    OpenFileDialog* openFileDialog1 = new OpenFileDialog();

    if (openFileDialog1->ShowDialog())
    {
        MessageBox(0, openFileDialog1->FileName, _T("Выбран файл"),
                   MB_OK | MB_ICONINFORMATION);
    }
    ...
    openFileDialog1->FilterIndex = 1;
    openFileDialog1->Flags |= OFN_SHOWHELP;
    openFileDialog1->InitialDir = _T("C:\\Windows\\");
    openFileDialog1->Title = _T("Open Text File");

    if (openFileDialog1->ShowDialog())
    {
        MessageBox(0, openFileDialog1->FileName, _T("texto"),
                   MB_OK | MB_ICONINFORMATION);
    }

    ifstream myfile ("example.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }
        myfile.close();
    }

    else cout << "Unable to open file";
    */
}
