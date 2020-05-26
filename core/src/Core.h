#ifndef CORE_H
#define CORE_H

#include <QObject>
#include <QWidget>
#include <QBoxLayout>
#include <QLabel>

class CvvINode;
class CvvINodeFactory;
class NodeControl;

class Core : public QObject {
    Q_OBJECT
public:
    Core(QObject *parent = nullptr);
    ~Core();
    CvvINode *createNode(QString);

public slots:
    void displaySettings(CvvINode*);

    NodeControl *getController(CvvINode*) const;
    void makeGlobal(NodeControl*);
    void setGlobalTime(int);

private:
    QVector<CvvINodeFactory*> m_nodeFactory;
    QVector<NodeControl*> m_nodeControl;
    int m_globalTime = 0;


    QWidget *m_settings = nullptr;
    QWidget *m_display = nullptr;
    QWidget *m_view = nullptr;
    QVBoxLayout *m_mainLayout = nullptr;
    QVBoxLayout *m_settingsLayout = nullptr;
    QVBoxLayout *m_displayLayout = nullptr;
    QLabel *m_label = nullptr;
};

#endif // CORE_H
