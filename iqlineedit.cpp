#include "iqlineedit.h"

IQLineEdit::IQLineEdit(QWidget *parent) : QLineEdit(parent)
{
    this->installEventFilter(this);
}

bool IQLineEdit::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyPress)
    {
        QKeyEvent* key = static_cast<QKeyEvent*>(event);
        if ( key->key()==Qt::Key_Escape )
            emit escapePressed();
    }
    return QObject::eventFilter(obj, event);
}
