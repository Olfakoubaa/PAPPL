#ifndef EDITORSETTINGS_H
#define EDITORSETTINGS_H

#include <QtGui>

class EditorSettings : public QDialog
{
    Q_OBJECT

public:
    //constructor , destructor
    EditorSettings();
    ~EditorSettings();

private:
    //button
    QPushButton *BtnCancel;
    QPushButton *BtnGenerate;
    QHBoxLayout *boutonsLayout;

    //Mise en page générale
    QVBoxLayout *globalLayout;

    //scroll area
//    QWidget *widget;
//    QScrollArea *area;
//    QVBoxLayout *layoutTotal;

};

#endif // EDITORSETTINGS_H
