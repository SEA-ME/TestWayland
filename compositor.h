#ifndef COMPOSITOR_H
#define COMPOSITOR_H

#include <QWaylandCompositor>
#include <QWaylandQuickCompositor>
#include <QQuickView>

class Compositor : public QWaylandQuickCompositor
{
    Q_OBJECT
public:
    Compositor();

private:
    QQuickView m_view;
};

#endif // COMPOSITOR_H