#include "mainwindow.h"
#include <QApplication>
#include "mazoprincipal.h"
#include "mazoordenado.h"
#include "mazomovimientos.h"
#include "juego.h"
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(application);
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/images/SolitaireMCE.png"));
    MainWindow w;
    w.setWindowIcon(QIcon(":/images/SolitaireMCE.png"));

       QGraphicsScene scene;
       scene.setSceneRect( -100.0, -100.0, 200.0, 200.0 );

       QGraphicsEllipseItem *item = new QGraphicsEllipseItem( 0, &scene );
       item->setRect( -50.0, -50.0, 100.0, 100.0 );

       QGraphicsView view( scene );
       view.setRenderHints( QPainter::Antialiasing );

    //MainWindow b()
     Juego solitario;

     solitario.distribuir();
     solitario.mazo.imprimir();
   //  w.setJuego(solitario);

     //solitario.distribuir();

     solitario.uno.imprimir();
     solitario.dos.imprimir();
     solitario.tres.imprimir();
     solitario.cuatro.imprimir();
     solitario.cinco.imprimir();
     solitario.seis.imprimir();
     solitario.siete.imprimir();
  //w.setl
     /* w.crearCartasVisuales(solitario.uno,20);
      w.crearCartasVisuales2(solitario.dos,20);
      w.crearCartasVisuales3(solitario.tres,20);
      w.crearCartasVisuales4(solitario.cuatro,20);
      w.crearCartasVisuales5(solitario.cinco,20);
      w.crearCartasVisuales6(solitario.seis,20);
      w.crearCartasVisuales7(solitario.siete,20);

      w.show();

      w.setMazo(solitario.mazo);

     // w.barajear(solitario.mazo);*/

    w.show();
    return a.exec();
}
