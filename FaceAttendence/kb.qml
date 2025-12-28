import QtQuick 2.12
import QtQuick.VirtualKeyboard 2.4
import QtQuick.Controls 2.2
import QtQuick.VirtualKeyboard.Settings 2.2

Item {
    id: root
    width: 640
    height: 220        // 默认高度，可在 C++ 端或用绑定调整

    InputPanel {
        id: keyboard
        anchors.fill: parent
        // 核心：仅绑定到Qt.inputMethod.visible，由输入方法系统管理显示/隐藏
        visible: Qt.inputMethod.visible
        // 确保键盘在最上层显示
        z: 999
        // 设置键盘样式
        Component.onCompleted: {
            VirtualKeyboardSettings.styleName = "default"
            VirtualKeyboardSettings.activeLocales = ["en_GB","zh_CN"]
                        // 默认的语言，重要！
                        VirtualKeyboardSettings.locale = "zh_CN"
            // 确保输入面板关联到当前应用的输入上下文
            Qt.inputMethod.visibleChanged.connect(() => {
                keyboard.update()
            })
        }

        // 移除原有的onActiveChanged强制隐藏逻辑（这是问题根源）
    }
}
