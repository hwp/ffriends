#include "puff.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv); 

  Puff window;
  window.show();

  return app.exec();
}

