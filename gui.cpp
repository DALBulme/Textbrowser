#include "gui.h"
#include "httpclient.h"

Gui::Gui(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);
    connect (&m_http, &HttpClient::read, this, &Gui::ShowResult);
}

void Gui::on_goButton_clicked()
{
        QString host = hostEntry->text();
        m_http.read();
}

void Gui::ShowResult()
{
    QString host = hostEntry->text();
    QString result = "X";
    resultBrowser->append(result);
}
