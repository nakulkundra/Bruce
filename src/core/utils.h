#ifndef __UTILS_H__
#define __UTILS_H__

void backToMenu();
void addOptionToMainMenu();
void addOption(const char* name, void (*callback)());
void updateClockTimezone();
void updateTimeStr(struct tm timeInfo);
void showDeviceInfo();

void touchHeatMap(struct TouchPoint t);

#endif
