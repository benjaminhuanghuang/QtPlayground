import QtQuick 2.1
import QtQuick.Controls 1.0
import QtQuick.Layouts 1.0

ApplicationWindow{
    id:root
    visible: true
    width: 500
    minimumWidth: mianToolBar.implicitWidth
    height: 360
    title:"Qt Rocks!"

    toolBar:ToolBar{
        id:mianToolBar
        RowLayout{
            width:parent.width
            ToolButton{
                text:"Push me"
                iconSource: "icons/icons/save.ico"
                onClicked: root.color="red"
            }
            ToolButton{
                text:"Push me"
                iconSource: "icons/icons/open.ico"
                onClicked: root.color="red"
            }
            ToolButton{
                text:"Push me"
                iconSource: "icons/icons/print.ico"
                onClicked: root.color="red"
            }
            Slider
            {
                Layout.fillWidth:true
                implicitWidth: 150
            }
            TextField{

            }
        }
    }
    ExclusiveGroup{
        id:group
    }

    GroupBox{
        title:"GroupBox"
        anchors.centerIn: parent
        ColumnLayout{
            RadioButton{text:"button 1"; exclusiveGroup: group}
            RadioButton{text:"button 2"; exclusiveGroup: group}
            RadioButton{text:"button 3"; exclusiveGroup: group}
        }
    }
}
