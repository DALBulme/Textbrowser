#ifndef HTTPCLIENT_H
#define HTTPCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QAbstractSocket>

const int TIMEOUT = 5000;
class HttpClient : public QObject
{
    Q_OBJECT
public:
    explicit HttpClient(QObject *parent = nullptr);
    void connected();
    void read();

signals:

public slots:
private:
    QTcpSocket *m_socket;
    QByteArray m_hostname;
};

#endif // HTTPCLIENT_H
