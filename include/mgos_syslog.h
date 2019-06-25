#pragma once

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

void reinit_syslog(char *syslog_svr_addr, char *syslog_svr_hostname);
void mgos_syslog_log_error(const char *app_name, const char *fmt, ...);
void mgos_syslog_log_warn(const char *app_name, const char *fmt, ...);
void mgos_syslog_log_info(const char *app_name, const char *fmt, ...);
void mgos_syslog_log_notice(const char *app_name, const char *fmt, ...);
void mgos_syslog_log_debug(const char *app_name, const char *fmt, ...);

#ifdef __cplusplus
}
#endif /* __cplusplus */
