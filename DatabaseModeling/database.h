#ifndef DATABASE_H
#define DATABASE_H

#include <QMainWindow>

namespace Ui {
class Database;
}

class Database : public QMainWindow
{
    Q_OBJECT

public:
    explicit Database(QWidget *parent = 0);
    ~Database();

private:
    Ui::Database *ui;
};

#endif // DATABASE_H
