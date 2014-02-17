#include "EditorSettings.h"
#include "MainWindow.h"

EditorSettings::EditorSettings():
    QDialog()
{

    //Button Generate and Cancel
    BtnCancel = new QPushButton("&Cancel");
    BtnGenerate = new QPushButton("&Generate");
    boutonsLayout = new QHBoxLayout;
    boutonsLayout->addWidget(BtnCancel);
    boutonsLayout->addWidget(BtnGenerate);

    //Mise en page générale
    globalLayout = new QVBoxLayout;
    globalLayout->addLayout(boutonsLayout);




  //  setLayout(layoutTotal);
    setWindowTitle("Editor Settings");
    setModal(true);
    resize(700,300);


}

    //Detroyer
    EditorSettings::~EditorSettings(){}
