#include <QApplication>

#include "NodeEditor.h"
#include "Core.h"

int main(int argc, char **argv) {
    QApplication app(argc, argv);
    NodeEditor *nodeEditor = new NodeEditor();
    Core *core = new Core();

   nodeEditor->setCore(core);

    nodeEditor->show();

    return app.exec();
}
