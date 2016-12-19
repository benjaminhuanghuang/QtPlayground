import QtQuick 2.1
import QtQuick.Controls 1.0

ApplicationWindow{
    id:root
    visible: true
    width: 500
    height: 360
    title:"Qt Rocks!"

    Button{
        anchors.centerIn: parent
        text:"Push me"
        onClicked: root.color="red"
    }
}
