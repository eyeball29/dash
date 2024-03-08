# OpenDash

OpenDash is a Qt-based infotainment center for your Linux OpenAuto installation!
The OpenDash project includes OpenAuto, AASDK, and Dash.

Main features of Dash include:

*	Embedded OpenAuto `Windowed/Fullscreen`
*	Wireless OpenAuto Capability
*	On-screen Volume, Brightness, & Theme Control
*	Responsive Scalable UI `Adjustable for screen size`
*	Bluetooth Media Control
*	Real-Time Vehicle OBD-II Data & SocketCAN Capabilities
*	Theming `Dark/Light mode` `Customizable RGB Accent Color`
*	True Raspberry Pi 7” Official Touchscreen Brightness Control
*	App-Launcher built in
*	Camera Access `Streaming/Local` `Backup` `Dash`
*	Keyboard Shortcuts `GPIO Triggerable`

![](docs/imgs/opendash-ui.gif)

# Getting Started

## Video walk through
_steps may be slightly different such as ia (intelligent-auto) has been renamed to dash, the UI has changed, etc..._

https://youtu.be/CIdEN2JNAzw

## Install Script

Dash can be built automatically utilizing an included script.

The install script included in the dash repo will install all the required packages and compile all portions of the OpenDash project.

### 1. Clone the repo, Run the install script
```
git clone https://github.com/openDsh/dash

cd dash

./install.sh
```
### 2. Install error temp fixes
#### Update this file:
*/aasdk/src/Transport/SSLWrapper.cpp
Comment out 
`FIPS_mode_set(0);`
line 42

#### Remove the "volatile" keyword
*/qt-gstreamer/elements/gstqtvideosink/gstqtvideosinkplugin.h 
line 30
### 2. Install error temp fixes
####Update this file:
*/aasdk/src/Transport/SSLWrapper.cpp
Comment out 
`FIPS_mode_set(0);`
line 42

####Remove the "volatile" keyword
*/qt-gstreamer/elements/gstqtvideosink/gstqtvideosinkplugin.h 
line 30

##Updating Gauge on Vehicle Tab
*/dash/src/obd/command.cpp
Example:
`{"Intake Air Temperature", QCanBusFrame(0x7df, QByteArray::fromHex("02010F0000000000")), temp}`
Alter desired cmd with appropriate data:
1. title (e.g. - Intake Air Temperature)
2. hex value
3. decoder value (e.g. - temp) - if using others than are noted in decoders.hpp, see update section on this.

*dash//include/obd/decoders.hpp
Example - percentage:
`double percentage(Response resp) { return (100.0 / 255.0) * (int)resp.data.at(0); }`
1. double value = percentage
2. {(100/255)*A} = OBDII table formula for this PID

*/dash/include/obd/command.hpp
Add 
*/dash/src/app/pages/vehicle.cpp

## Updating Gauge on Vehicle Tab
*/dash/src/obd/command.cpp
Example:
`{"Intake Air Temperature", QCanBusFrame(0x7df, QByteArray::fromHex("02010F0000000000")), temp}`
Alter desired cmd with appropriate data:
1. title (e.g. - Intake Air Temperature)
2. hex value
3. decoder value (e.g. - temp) - if using others than are noted in decoders.hpp, see update section on this.

*dash//include/obd/decoders.hpp
Example - percentage:
`double percentage(Response resp) { return (100.0 / 255.0) * (int)resp.data.at(0); }`
1. double value = percentage
2. {(100/255)*A} = OBDII table formula for this PID

*/dash/include/obd/command.hpp
Add 
*/dash/src/app/pages/vehicle.cpp


