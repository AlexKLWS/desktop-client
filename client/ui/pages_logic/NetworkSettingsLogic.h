#ifndef NETWORK_SETTINGS_LOGIC_H
#define NETWORK_SETTINGS_LOGIC_H

#include "PageLogicBase.h"

class UiLogic;

class NetworkSettingsLogic : public PageLogicBase
{
    Q_OBJECT

    AUTO_PROPERTY(QString, lineEditDns1Text)
    AUTO_PROPERTY(QString, lineEditDns2Text)
    READONLY_PROPERTY(QRegExp, ipAddressRegex)

public:
    Q_INVOKABLE void onUpdatePage() override;

    Q_INVOKABLE void onLineEditDns1EditFinished(const QString& text);
    Q_INVOKABLE void onLineEditDns2EditFinished(const QString& text);
    Q_INVOKABLE void onPushButtonResetDns1Clicked();
    Q_INVOKABLE void onPushButtonResetDns2Clicked();

public:
    explicit NetworkSettingsLogic(UiLogic *uiLogic, QObject *parent = nullptr);
    ~NetworkSettingsLogic() = default;

};
#endif // NETWORK_SETTINGS_LOGIC_H
