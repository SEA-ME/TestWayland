#include <QGuiApplication>
#include <QQuickView>
#include <cstdlib>

int main(int argc, char *argv[])
{
    // Set the WAYLAND_DISPLAY environment variable
    setenv("WAYLAND_DISPLAY", "wayland-qt-0", 1);
    // Set the QT_QPA_PLATFORM environment variable
    setenv("QT_QPA_PLATFORM", "wayland", 1);

    QGuiApplication app(argc, argv);

    QQuickView view;
    view.setSource(QUrl("qrc:/client.qml"));
    view.show();

    return app.exec();
}
