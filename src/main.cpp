#include "MainWindow.h"
#include "flux.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QCoreApplication::setOrganizationName("Hexware (Cole Johnson)");
    QCoreApplication::setApplicationName("Flux");
    QCoreApplication::setApplicationVersion(FLUX_VERSION_STR);

    MainWindow w;
    w.show();

    return app.exec();
}
