#include "Sputify.h"
#include "qgraphicsitem.h"

Sputify::Sputify(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	QGraphicsScene* scene = new QGraphicsScene();
	QGraphicsView* view = new QGraphicsView(scene);
	QGraphicsItem *item = new QGraphicsPixmapItem(QPixmap::fromImage(QImage("C:/Users/mngln/source/repos/Sputify/Resources/missing_art.png")));

	scene->addItem(item);

	ui.coverArt->setScene(scene);
	ui.coverArt->show();
}
