#include "obd/command.hpp"
#include "obd/decoders.hpp"

Commands cmds = {{"Calculated Engine Load", QCanBusFrame(0x7df, QByteArray::fromHex("0201040000000000")), percentage},
                 {"Engine Coolant Temperature", QCanBusFrame(0x7df, QByteArray::fromHex("0201050000000000")), temp},
                 {"Engine Revolutions Per Minute (RPM)", QCanBusFrame(0x7df, QByteArray::fromHex("02010C0000000000")), rpm},
                 {"Vehicle Speed", QCanBusFrame(0x7df, QByteArray::fromHex("02010D0000000000")), speed},
                 {"Intake Air Temperature", QCanBusFrame(0x7df, QByteArray::fromHex("02010F0000000000")), temp},
                 {"Mass Air Flow (MAF) Rate", QCanBusFrame(0x7df, QByteArray::fromHex("0201100000000000")), flow}};
/* add-ons to original. Need to update other files                {"Engine Oil Temperature", QCanBusFrame(0x7df, QByteArray::fromHex("02015C0000000000")), oiltemp}, 
                 {"Fuel Tank Value", QCanBusFrame(0x7df, QByteArray::fromHex("02012F0000000000")), fueltank}, 
                 {"Lambda 1", QCanBusFrame(0x7df, QByteArray::fromHex("0201240000000000")), lambdaValue}, 
                 {"CAT TEMP 1", QCanBusFrame(0x7df, QByteArray::fromHex("02013C0000000000")), catTemp}, 
                 {"BOOST Pressure", QCanBusFrame(0x7df, QByteArray::fromHex("02010B0000000000")), boostPress}}; */
