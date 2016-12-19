import QtQuick 2.1
import QtQuick.Controls 1.0
import QtQuick.Layouts 1.0
import QtQuick.XmlListModel 2.0

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
    SplitView{
        anchors.fill: parent
        TableView{
            id:flickerTable
//            anchors.centerIn: parent
            TableViewColumn{
                title:"Column 1"
                role:"title"
            }
            model:flickerModel
        }
        Image{
            id:image
            source:flickerModel.get(flickerTable.currentRow).source
        }
    }
    statusBar: StatusBar{
        RowLayout{
            Label{
                id:label
                text:image.source
                Layout.fillWidth: true
                elide:Text.ElideMiddle
            }
            ProgressBar{
                value:image.progress
            }
        }
    }

    XmlListModel{
        id : flickerModel
        source:"http://api.flicker.com/services/feeds/photos_public.gne?format=rss2&tags=Cat"
        query:"/rss/channel/item"
        namespaceDeclarations: "declare namespace media=\"http://search.yahoo.com/mrss/\";"
        XmlRole {name:"title"; query:"title/string()"}
        XmlRole {name:"date"; query:"pubDate/string()"}
        XmlRole {name:"source"; query:"media:thumbnail/@url/string()"}
        XmlRole {name:"credit"; query:"media:credit/string()"}
    }
}
