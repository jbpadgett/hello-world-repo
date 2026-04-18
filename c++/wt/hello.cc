// Hello World app using the C++ Wt 4.x web server platform

#include <Wt/WApplication.h>
#include <Wt/WBreak.h>
#include <Wt/WContainerWidget.h>
#include <Wt/WLineEdit.h>
#include <Wt/WPushButton.h>
#include <Wt/WText.h>

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

    root()->addNew<Wt::WText>("HELLO WORLD! via the Wt C++ Web Server ===>>  Type your name:  ");
    nameEdit_ = root()->addNew<Wt::WLineEdit>();
    auto button = root()->addNew<Wt::WPushButton>("Hello World me!");
    root()->addNew<Wt::WBreak>();
    greeting_ = root()->addNew<Wt::WText>();
    button->clicked().connect(this, &HelloApplication::greet);
}

void HelloApplication::greet()
{
    greeting_->setText("HELLO WORLD!!!,   " + nameEdit_->text());
}

int main(int argc, char **argv)
{
    return Wt::WRun(argc, argv, [](const Wt::WEnvironment& env) {
        return std::make_unique<HelloApplication>(env);
    });
}
