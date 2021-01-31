#include "PoolEditor.h"
#include "flux.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QCoreApplication::setOrganizationName("Hexware (Cole Johnson)");
    QCoreApplication::setApplicationName("Flux");
    QCoreApplication::setApplicationVersion(FLUX_VERSION_STR);

    PoolEditor w;
    w.show();

    return app.exec();
}
