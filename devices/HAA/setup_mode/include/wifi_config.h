#pragma once

void wifi_config_init(const char *ssid_prefix, const char *password, void (*on_wifi_ready)(), const char *custom_hostname, const int param);
uint8_t wifi_config_connect(const uint8_t mode, const uint8_t phy, const bool with_reset);
void wifi_config_smart_connect();
void wifi_config_reset();
void setup_mode_reset_sysparam();
void save_last_working_phy();
int wifi_config_get_ip();
