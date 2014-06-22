// List with context menu project template
#ifndef FuturescopeWithHoroscope_HPP_
#define FuturescopeWithHoroscope_HPP_

#include <QObject>

namespace bb { namespace cascades { class Application; }}

/*!
 * @brief Application pane object
 *
 *Use this object to create and init app UI, to create context objects, to register the new meta types etc.
 */
class FuturescopeWithHoroscope : public QObject
{
    Q_OBJECT
public:
    FuturescopeWithHoroscope(bb::cascades::Application *app);
    virtual ~FuturescopeWithHoroscope() {}
};

#endif /* FuturescopeWithHoroscope_HPP_ */