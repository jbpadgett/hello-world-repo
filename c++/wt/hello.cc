//Hello World app using the C++ Wt web server platform

#include <Wt/WApplication>
#include <Wt/WBreak>
#include <Wt/WContainerWidget>
#include <Wt/WLineEdit>
#include <Wt/WPushButton>
#include <Wt/WText>

class HelloApplication : public Wt::WApplication
{
public:
    HelloApplication(const Wt::WEnvironment& env);

private:
    Wt::WLineEdit *nameEdit_;
    Wt::WText *greeting_;

    void greet();
};

HelloApplication::HelloApplication(const Wt::WEnvironment& env)
    : Wt::WApplication(env)
{
    setTitle("Wt C++ Hello World!");

    root()->addWidget(new Wt::WText("HELLO WORLD! via the Wt C++ Web Server ===>>  Type your name:  "));
    nameEdit_ = new Wt::WLineEdit(root());
    Wt::WPushButton *button = new Wt::WPushButton("Hello World me!", root());
    root()->addWidget(new Wt::WBreak());
    greeting_ = new Wt::WText(root());
    button->clicked().connect(this, &HelloApplication::greet);
}

void HelloApplication::greet()
{
    greeting_->setText("HELLO WORLD!!!,   " + nameEdit_->text());
}

Wt::WApplication *createApplication(const Wt::WEnvironment& env)
{
    return new HelloApplication(env);
}

//Run the server and start the app
int main(int argc, char **argv)
{
    return Wt::WRun(argc, argv, &createApplication);
}