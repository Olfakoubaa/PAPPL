#ifndef EDITORSETTINGS_H
#define EDITORSETTINGS_H
#include <iostream>
#include <QtGui>
#include <QtGui>
#include "MyArea.h"
#include <QWidget>
#include <QApplication>
#include <QtGui>



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

protected:

    /**
      * @brief pointer to the central area of the window
      *
      */
    QMdiArea* centraleArea;

};

#endif // EDITORSETTINGS_H
