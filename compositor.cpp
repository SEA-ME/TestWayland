#include "compositor.h"

Compositor::Compositor()
    : QWaylandQuickCompositor()
{
    setSocketName("wayland-qt-0"); // Set the display name
    m_view.setSource(QUrl("main.qml"));
    m_view.setResizeMode(QQuickView::SizeRootObjectToView);
    m_view.show();
}
