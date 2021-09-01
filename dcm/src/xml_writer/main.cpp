#include "announce_xml.h"
#include "abstract_command.h"

//namespacing for this file
using std::string;
using std::cout;
using std::endl;
namespace announcer = dcm::xml;

const string MSG_LOG_PATH = "../../msg_logs/dtm_messages_testing.xml"; //path to msg log

//void InterfaceCommandTest(); // prototypes of testing functions
void XMLAdapterTest();
void ClientTest();

int main()
{
    cout<<"     TESTING X     "<<endl;
    //XMLAdapterTest();
    //InterfaceCommandTest();

}

void XMLAdapterTest()
{
    cout << "XMLADAPTER TEST " << endl;
    announcer::XMLCommandAdapter CommandIs;
    //CommandIs.GenerateNamedTestFile(MSG_LOG_PATH);
    //CommandIs.Load();
    CommandIs.Shed();
    //CommandIs.OutputTreeToTerminal();
    CommandIs.AppendTreeToTestLog(MSG_LOG_PATH);

}
/*
void InterfaceCommandTest()
{
    cout<<"InterfaceCommandTest creating command object..."<<endl;
    announcer::InterfaceCommand command;
    cout<<"now testing..."<<endl;
    cout << " NOW ADD LINES" << endl;
    cout<<"test over"<<endl;
}
 */