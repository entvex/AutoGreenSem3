#ifndef DIALOGE_SYSTEMLOG_H
#define DIALOGE_SYSTEMLOG_H

#include <QDialog>

namespace Ui {
class dialoge_systemlog;
}

class dialoge_systemlog : public QDialog
{
    Q_OBJECT

public:
    explicit dialoge_systemlog(QWidget *parent = 0);
    ~dialoge_systemlog();

private:
    Ui::dialoge_systemlog *ui;
};

#endif // DIALOGE_SYSTEMLOG_H
