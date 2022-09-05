#include <QApplication>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>

int main(int argc,char *argv[])
{
	QApplication app(argc,argv);
	
	QLabel *infoLabel = new QLabel;
	QLabel *OpenLabel = new QLabel;
	QLineEdit *CmdLineEdit = new QLineEdit;
	QPushButton *commitButton = new QPushButton;
	QPushButton *cancelButton = new QPushButton;
	QPushButton *browseButton = new QPushButton;
	
	infoLabel->setText("input cmd:");
	OpenLabel->setText("Open");
	
	commitButton->setText("commit");
	cancelButton->setText("cancel");
	browseButton->setText("browse");
	
	QHBoxLayout *cmdLayOut = new QHBoxLayout;
	cmdLayOut->addWidget(OpenLabel);
	cmdLayOut->addWidget(CmdLineEdit);
	
	QHBoxLayout *ButtonLayOut = new QHBoxLayout;
	ButtonLayOut->addWidget(commitButton);
	ButtonLayOut->addWidget(cancelButton);
	ButtonLayOut->addWidget(browseButton);
	
	QVBoxLayout *mainLayout = new QVBoxLayout;
	mainLayout->addWidget(infoLabel);
	mainLayout->addLayout(cmdLayOut);
	mainLayout->addLayout(ButtonLayOut);
	
	QWidget w;
	w.setLayout(mainLayout);
	w.setWindowTitle("running");
	w.show();
	return app.exec();
}