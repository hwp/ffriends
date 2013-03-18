#include "puff.h"

#include <QPainter>
#include <QMouseEvent>
#include <QImageReader>

Puff::Puff(QWidget *parent)
    : QWidget(parent)
{
  p = QPoint(0, 0);
  
  QImageReader ir;
  ir.setFileName(QString("/usr/share/icons/gnome/32x32/emotes/face-monkey.png"));
  img = ir.read();
  
  resize(350, 280);
  move(0, -20);      
  setWindowTitle("Puff");
}

void Puff::paintEvent(QPaintEvent *e)
{
  Q_UNUSED(e);  
  QPainter painter(this);
  
  //painter.drawRect(p.x(), p.y(), 10, 10);
  painter.drawImage(p, img);
}

void Puff::mousePressEvent(QMouseEvent *e)
{
  Q_UNUSED(e);
  
  p = e->pos();
  repaint();
}

