#include "addressbookcontroller.h"

AddressBookController::AddressBookController(AddressBook *addressBook, QObject *parent):QObject(parent), m_addressBook(addressBook)
{
    Q_ASSERT(addressBook);

}

AddressBookEntry *AddressBookController::createEntry()
{
    auto result = m_addressBook->createEntry();
    if(result)
    {
        result->setName(tr("New entry..."));
    }
    return result;
}

bool AddressBookController::deleteEntry(AddressBookEntry *entry)
{
    return m_addressBook->deleteEntry(entry);
}
