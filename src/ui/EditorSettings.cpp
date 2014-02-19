#include "EditorSettings.h"
#include "MainWindow.h"
#include <QtGui>
#include "Area.h"

EditorSettings::EditorSettings(): QWidget()
{
    QWidget *nouvelle_fenetre = new QWidget();

    m_btn2 = new QPushButton("Pimp mon bouton!",nouvelle_fenetre);

/*
    // main area
    this->centraleArea = new QMdiArea();
    setCentralWidget(centraleArea);
    centraleArea->setViewMode(QMdiArea::TabbedView);

    //m_btn2->setFont(QFont("Comic Sans MS", 14));
  //m_btn2->move(50,60);
    // get the widget in the central area, cast it to Area (to use the methods)
   Area* view = (Area*) this->getCentraleArea()->currentSubWindow()->widget();
    // call the method to hide or show the tree
    view->hideOrShowTree();
*/
   nouvelle_fenetre->resize(700,300);
   nouvelle_fenetre->show();
}


    //Detroyer
    EditorSettings::~EditorSettings(){}
/*
   QMdiArea* EditorSettings::getCentraleArea() {
        return this->centraleArea;
    }
*/
