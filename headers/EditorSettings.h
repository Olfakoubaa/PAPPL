#ifndef EDITORSETTINGS_H
#define EDITORSETTINGS_H
#include <iostream>
#include <QtGui>
#include <QtGui>
#include "MyArea.h"




class EditorSettings : public QWidget
{
    Q_OBJECT

public:
    //constructor , destructor
    EditorSettings();
    ~EditorSettings();

    QMdiArea* getCentraleArea();

private:
    //button
    QPushButton *m_btn2;

};

#endif // EDITORSETTINGS_H
