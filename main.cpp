
// Qt includes
#include <QApplication>

// Qwt includes
#include <qwt_plot.h>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QwtPlot plot;
    plot.show();
    return app.exec();
}
