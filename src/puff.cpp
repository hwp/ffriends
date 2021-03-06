#include "puff.h"

#include <QPainter>
#include <QMouseEvent>
#include <QImageReader>

Puff::Puff(QWidget *parent)
    : QWidget(parent)
{
  p = QPoint(0, 0);

  rdr.load(QString(":/data/bonded.svg"));
  
  setStyleSheet("QWidget {background : green}");
  resize(350, 280);
  move(0, -20);      
  setWindowTitle("Puff");
}

void Puff::paintEvent(QPaintEvent *e)
{
  Q_UNUSED(e);  
  QPainter painter(this);
  
  // painter.drawRect(p.x(), p.y(), 10, 10);
  // painter.drawImage(p, img);
  QString card("red_joker");
  QRect roi = rdr.boundsOnElement(card).toRect();
  rdr.render(&painter, card, QRect(p, roi.size()));
}

void Puff::mousePressEvent(QMouseEvent *e)
{
  Q_UNUSED(e);
  
  p = e->pos();
  repaint();
}

