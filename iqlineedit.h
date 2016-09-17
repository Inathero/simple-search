#ifndef IQLINEEDIT_H
#define IQLINEEDIT_H

#include <QObject>
#include <QLineEdit>
#include <QWidget>
#include <QKeyEvent>
#include <QEvent>

class IQLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    explicit IQLineEdit(QWidget * parent = 0);
signals:
    void escapePressed();
protected:
    bool eventFilter(QObject* obj, QEvent* event);
};

#endif // IQLINEEDIT_H
