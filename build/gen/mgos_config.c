/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /mongoose-os/tools/mgos_gen_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/data/fwbuild-volumes/latest/apps/newsdget/esp32/build_contexts/build_ctx_368994741/build/gen/ /mongoose-os/src/mgos_debug_udp_config.yaml /mongoose-os/platforms/esp32/src/esp32_sys_config.yaml /data/fwbuild-volumes/latest/apps/newsdget/esp32/build_contexts/build_ctx_368994741/build/gen/mos_conf_schema.yml
 */

#include "mgos_config.h"

#include <stddef.h>

#include "mgos_config_util.h"

const struct mgos_conf_entry mgos_config_schema_[61] = {
  {.type = CONF_TYPE_OBJECT, .key = "", .offset = 0, .num_desc = 60},
  {.type = CONF_TYPE_OBJECT, .key = "debug", .offset = offsetof(struct mgos_config, debug), .num_desc = 10},
  {.type = CONF_TYPE_STRING, .key = "udp_log_addr", .offset = offsetof(struct mgos_config, debug.udp_log_addr)},
  {.type = CONF_TYPE_INT, .key = "udp_log_level", .offset = offsetof(struct mgos_config, debug.udp_log_level)},
  {.type = CONF_TYPE_INT, .key = "mbedtls_level", .offset = offsetof(struct mgos_config, debug.mbedtls_level)},
  {.type = CONF_TYPE_INT, .key = "level", .offset = offsetof(struct mgos_config, debug.level)},
  {.type = CONF_TYPE_STRING, .key = "file_level", .offset = offsetof(struct mgos_config, debug.file_level)},
  {.type = CONF_TYPE_INT, .key = "event_level", .offset = offsetof(struct mgos_config, debug.event_level)},
  {.type = CONF_TYPE_INT, .key = "stdout_uart", .offset = offsetof(struct mgos_config, debug.stdout_uart)},
  {.type = CONF_TYPE_INT, .key = "stderr_uart", .offset = offsetof(struct mgos_config, debug.stderr_uart)},
  {.type = CONF_TYPE_INT, .key = "factory_reset_gpio", .offset = offsetof(struct mgos_config, debug.factory_reset_gpio)},
  {.type = CONF_TYPE_STRING, .key = "mg_mgr_hexdump_file", .offset = offsetof(struct mgos_config, debug.mg_mgr_hexdump_file)},
  {.type = CONF_TYPE_OBJECT, .key = "i2c", .offset = offsetof(struct mgos_config, i2c), .num_desc = 6},
  {.type = CONF_TYPE_INT, .key = "unit_no", .offset = offsetof(struct mgos_config, i2c.unit_no)},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, i2c.enable)},
  {.type = CONF_TYPE_INT, .key = "freq", .offset = offsetof(struct mgos_config, i2c.freq)},
  {.type = CONF_TYPE_BOOL, .key = "debug", .offset = offsetof(struct mgos_config, i2c.debug)},
  {.type = CONF_TYPE_INT, .key = "sda_gpio", .offset = offsetof(struct mgos_config, i2c.sda_gpio)},
  {.type = CONF_TYPE_INT, .key = "scl_gpio", .offset = offsetof(struct mgos_config, i2c.scl_gpio)},
  {.type = CONF_TYPE_OBJECT, .key = "i2c1", .offset = offsetof(struct mgos_config, i2c1), .num_desc = 6},
  {.type = CONF_TYPE_INT, .key = "unit_no", .offset = offsetof(struct mgos_config, i2c1.unit_no)},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, i2c1.enable)},
  {.type = CONF_TYPE_INT, .key = "freq", .offset = offsetof(struct mgos_config, i2c1.freq)},
  {.type = CONF_TYPE_BOOL, .key = "debug", .offset = offsetof(struct mgos_config, i2c1.debug)},
  {.type = CONF_TYPE_INT, .key = "sda_gpio", .offset = offsetof(struct mgos_config, i2c1.sda_gpio)},
  {.type = CONF_TYPE_INT, .key = "scl_gpio", .offset = offsetof(struct mgos_config, i2c1.scl_gpio)},
  {.type = CONF_TYPE_OBJECT, .key = "sys", .offset = offsetof(struct mgos_config, sys), .num_desc = 8},
  {.type = CONF_TYPE_OBJECT, .key = "atca", .offset = offsetof(struct mgos_config, sys.atca), .num_desc = 4},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, sys.atca.enable)},
  {.type = CONF_TYPE_INT, .key = "i2c_bus", .offset = offsetof(struct mgos_config, sys.atca.i2c_bus)},
  {.type = CONF_TYPE_INT, .key = "i2c_addr", .offset = offsetof(struct mgos_config, sys.atca.i2c_addr)},
  {.type = CONF_TYPE_INT, .key = "ecdh_slots_mask", .offset = offsetof(struct mgos_config, sys.atca.ecdh_slots_mask)},
  {.type = CONF_TYPE_STRING, .key = "tz_spec", .offset = offsetof(struct mgos_config, sys.tz_spec)},
  {.type = CONF_TYPE_INT, .key = "wdt_timeout", .offset = offsetof(struct mgos_config, sys.wdt_timeout)},
  {.type = CONF_TYPE_STRING, .key = "pref_ota_lib", .offset = offsetof(struct mgos_config, sys.pref_ota_lib)},
  {.type = CONF_TYPE_OBJECT, .key = "device", .offset = offsetof(struct mgos_config, device), .num_desc = 5},
  {.type = CONF_TYPE_STRING, .key = "id", .offset = offsetof(struct mgos_config, device.id)},
  {.type = CONF_TYPE_STRING, .key = "license", .offset = offsetof(struct mgos_config, device.license)},
  {.type = CONF_TYPE_STRING, .key = "mac", .offset = offsetof(struct mgos_config, device.mac)},
  {.type = CONF_TYPE_STRING, .key = "public_key", .offset = offsetof(struct mgos_config, device.public_key)},
  {.type = CONF_TYPE_STRING, .key = "sn", .offset = offsetof(struct mgos_config, device.sn)},
  {.type = CONF_TYPE_STRING, .key = "conf_acl", .offset = offsetof(struct mgos_config, conf_acl)},
  {.type = CONF_TYPE_OBJECT, .key = "rpc", .offset = offsetof(struct mgos_config, rpc), .num_desc = 9},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.enable)},
  {.type = CONF_TYPE_BOOL, .key = "http_enable", .offset = offsetof(struct mgos_config, rpc.http_enable)},
  {.type = CONF_TYPE_BOOL, .key = "service_sys_enable", .offset = offsetof(struct mgos_config, rpc.service_sys_enable)},
  {.type = CONF_TYPE_INT, .key = "max_frame_size", .offset = offsetof(struct mgos_config, rpc.max_frame_size)},
  {.type = CONF_TYPE_INT, .key = "max_queue_length", .offset = offsetof(struct mgos_config, rpc.max_queue_length)},
  {.type = CONF_TYPE_INT, .key = "default_out_channel_idle_close_timeout", .offset = offsetof(struct mgos_config, rpc.default_out_channel_idle_close_timeout)},
  {.type = CONF_TYPE_STRING, .key = "acl_file", .offset = offsetof(struct mgos_config, rpc.acl_file)},
  {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct mgos_config, rpc.auth_domain)},
  {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct mgos_config, rpc.auth_file)},
  {.type = CONF_TYPE_OBJECT, .key = "sd", .offset = offsetof(struct mgos_config, sd), .num_desc = 1},
  {.type = CONF_TYPE_INT, .key = "max_files", .offset = offsetof(struct mgos_config, sd.max_files)},
  {.type = CONF_TYPE_OBJECT, .key = "sd_spi", .offset = offsetof(struct mgos_config, sd_spi), .num_desc = 4},
  {.type = CONF_TYPE_INT, .key = "pin_miso", .offset = offsetof(struct mgos_config, sd_spi.pin_miso)},
  {.type = CONF_TYPE_INT, .key = "pin_mosi", .offset = offsetof(struct mgos_config, sd_spi.pin_mosi)},
  {.type = CONF_TYPE_INT, .key = "pin_clk", .offset = offsetof(struct mgos_config, sd_spi.pin_clk)},
  {.type = CONF_TYPE_INT, .key = "pin_cs", .offset = offsetof(struct mgos_config, sd_spi.pin_cs)},
  {.type = CONF_TYPE_OBJECT, .key = "sd_sdmmc", .offset = offsetof(struct mgos_config, sd_sdmmc), .num_desc = 1},
  {.type = CONF_TYPE_BOOL, .key = "use1line", .offset = offsetof(struct mgos_config, sd_sdmmc.use1line)},
};

const struct mgos_conf_entry *mgos_config_schema() {
  return mgos_config_schema_;
}

/* Global instance */
struct mgos_config mgos_sys_config;
const struct mgos_config mgos_config_defaults = {
  .debug.udp_log_addr = NULL,
  .debug.udp_log_level = 3,
  .debug.mbedtls_level = 1,
  .debug.level = 2,
  .debug.file_level = NULL,
  .debug.event_level = 2,
  .debug.stdout_uart = 0,
  .debug.stderr_uart = 0,
  .debug.factory_reset_gpio = -1,
  .debug.mg_mgr_hexdump_file = NULL,
  .i2c.unit_no = 0,
  .i2c.enable = 0,
  .i2c.freq = 100000,
  .i2c.debug = 0,
  .i2c.sda_gpio = 32,
  .i2c.scl_gpio = 33,
  .i2c1.unit_no = 1,
  .i2c1.enable = 0,
  .i2c1.freq = 100000,
  .i2c1.debug = 0,
  .i2c1.sda_gpio = 22,
  .i2c1.scl_gpio = 23,
  .sys.atca.enable = 0,
  .sys.atca.i2c_bus = 0,
  .sys.atca.i2c_addr = 96,
  .sys.atca.ecdh_slots_mask = 12,
  .sys.tz_spec = NULL,
  .sys.wdt_timeout = 30,
  .sys.pref_ota_lib = NULL,
  .device.id = "esp32_??????",
  .device.license = NULL,
  .device.mac = NULL,
  .device.public_key = NULL,
  .device.sn = NULL,
  .conf_acl = "*",
  .rpc.enable = 1,
  .rpc.http_enable = 1,
  .rpc.service_sys_enable = 1,
  .rpc.max_frame_size = 4096,
  .rpc.max_queue_length = 25,
  .rpc.default_out_channel_idle_close_timeout = 10,
  .rpc.acl_file = NULL,
  .rpc.auth_domain = NULL,
  .rpc.auth_file = NULL,
  .sd.max_files = 5,
  .sd_spi.pin_miso = 2,
  .sd_spi.pin_mosi = 15,
  .sd_spi.pin_clk = 14,
  .sd_spi.pin_cs = 13,
  .sd_sdmmc.use1line = 0,
};

/* debug */
#define MGOS_CONFIG_HAVE_DEBUG
#define MGOS_SYS_CONFIG_HAVE_DEBUG
const struct mgos_config_debug * mgos_config_get_debug(struct mgos_config *cfg) {
  return &cfg->debug;
}
const struct mgos_conf_entry *mgos_config_schema_debug(void) {
  return mgos_conf_find_schema_entry("debug", mgos_config_schema());
}
bool mgos_config_parse_debug(struct mg_str json, struct mgos_config_debug *cfg) {
  return mgos_conf_parse_sub(json, mgos_config_schema(), cfg);
}
bool mgos_config_copy_debug(const struct mgos_config_debug *src, struct mgos_config_debug *dst) {
  return mgos_conf_copy(mgos_config_schema_debug(), src, dst);
}
void mgos_config_free_debug(struct mgos_config_debug *cfg) {
  return mgos_conf_free(mgos_config_schema_debug(), cfg);
}

/* debug.udp_log_addr */
#define MGOS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
#define MGOS_SYS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
const char * mgos_config_get_debug_udp_log_addr(struct mgos_config *cfg) {
  return cfg->debug.udp_log_addr;
}
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->debug.udp_log_addr, v);
}

/* debug.udp_log_level */
#define MGOS_CONFIG_HAVE_DEBUG_UDP_LOG_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_UDP_LOG_LEVEL
int mgos_config_get_debug_udp_log_level(struct mgos_config *cfg) {
  return cfg->debug.udp_log_level;
}
void mgos_config_set_debug_udp_log_level(struct mgos_config *cfg, int v) {
  cfg->debug.udp_log_level = v;
}

/* debug.mbedtls_level */
#define MGOS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
int mgos_config_get_debug_mbedtls_level(struct mgos_config *cfg) {
  return cfg->debug.mbedtls_level;
}
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int v) {
  cfg->debug.mbedtls_level = v;
}

/* debug.level */
#define MGOS_CONFIG_HAVE_DEBUG_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_LEVEL
int mgos_config_get_debug_level(struct mgos_config *cfg) {
  return cfg->debug.level;
}
void mgos_config_set_debug_level(struct mgos_config *cfg, int v) {
  cfg->debug.level = v;
}

/* debug.file_level */
#define MGOS_CONFIG_HAVE_DEBUG_FILE_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FILE_LEVEL
const char * mgos_config_get_debug_file_level(struct mgos_config *cfg) {
  return cfg->debug.file_level;
}
void mgos_config_set_debug_file_level(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->debug.file_level, v);
}

/* debug.event_level */
#define MGOS_CONFIG_HAVE_DEBUG_EVENT_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_EVENT_LEVEL
int mgos_config_get_debug_event_level(struct mgos_config *cfg) {
  return cfg->debug.event_level;
}
void mgos_config_set_debug_event_level(struct mgos_config *cfg, int v) {
  cfg->debug.event_level = v;
}

/* debug.stdout_uart */
#define MGOS_CONFIG_HAVE_DEBUG_STDOUT_UART
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDOUT_UART
int mgos_config_get_debug_stdout_uart(struct mgos_config *cfg) {
  return cfg->debug.stdout_uart;
}
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int v) {
  cfg->debug.stdout_uart = v;
}

/* debug.stderr_uart */
#define MGOS_CONFIG_HAVE_DEBUG_STDERR_UART
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDERR_UART
int mgos_config_get_debug_stderr_uart(struct mgos_config *cfg) {
  return cfg->debug.stderr_uart;
}
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int v) {
  cfg->debug.stderr_uart = v;
}

/* debug.factory_reset_gpio */
#define MGOS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
int mgos_config_get_debug_factory_reset_gpio(struct mgos_config *cfg) {
  return cfg->debug.factory_reset_gpio;
}
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int v) {
  cfg->debug.factory_reset_gpio = v;
}

/* debug.mg_mgr_hexdump_file */
#define MGOS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
const char * mgos_config_get_debug_mg_mgr_hexdump_file(struct mgos_config *cfg) {
  return cfg->debug.mg_mgr_hexdump_file;
}
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->debug.mg_mgr_hexdump_file, v);
}

/* i2c */
#define MGOS_CONFIG_HAVE_I2C
#define MGOS_SYS_CONFIG_HAVE_I2C
const struct mgos_config_i2c * mgos_config_get_i2c(struct mgos_config *cfg) {
  return &cfg->i2c;
}
const struct mgos_conf_entry *mgos_config_schema_i2c(void) {
  return mgos_conf_find_schema_entry("i2c", mgos_config_schema());
}
bool mgos_config_parse_i2c(struct mg_str json, struct mgos_config_i2c *cfg) {
  return mgos_conf_parse_sub(json, mgos_config_schema(), cfg);
}
bool mgos_config_copy_i2c(const struct mgos_config_i2c *src, struct mgos_config_i2c *dst) {
  return mgos_conf_copy(mgos_config_schema_i2c(), src, dst);
}
void mgos_config_free_i2c(struct mgos_config_i2c *cfg) {
  return mgos_conf_free(mgos_config_schema_i2c(), cfg);
}

/* i2c.unit_no */
#define MGOS_CONFIG_HAVE_I2C_UNIT_NO
#define MGOS_SYS_CONFIG_HAVE_I2C_UNIT_NO
int mgos_config_get_i2c_unit_no(struct mgos_config *cfg) {
  return cfg->i2c.unit_no;
}
void mgos_config_set_i2c_unit_no(struct mgos_config *cfg, int v) {
  cfg->i2c.unit_no = v;
}

/* i2c.enable */
#define MGOS_CONFIG_HAVE_I2C_ENABLE
#define MGOS_SYS_CONFIG_HAVE_I2C_ENABLE
int mgos_config_get_i2c_enable(struct mgos_config *cfg) {
  return cfg->i2c.enable;
}
void mgos_config_set_i2c_enable(struct mgos_config *cfg, int v) {
  cfg->i2c.enable = v;
}

/* i2c.freq */
#define MGOS_CONFIG_HAVE_I2C_FREQ
#define MGOS_SYS_CONFIG_HAVE_I2C_FREQ
int mgos_config_get_i2c_freq(struct mgos_config *cfg) {
  return cfg->i2c.freq;
}
void mgos_config_set_i2c_freq(struct mgos_config *cfg, int v) {
  cfg->i2c.freq = v;
}

/* i2c.debug */
#define MGOS_CONFIG_HAVE_I2C_DEBUG
#define MGOS_SYS_CONFIG_HAVE_I2C_DEBUG
int mgos_config_get_i2c_debug(struct mgos_config *cfg) {
  return cfg->i2c.debug;
}
void mgos_config_set_i2c_debug(struct mgos_config *cfg, int v) {
  cfg->i2c.debug = v;
}

/* i2c.sda_gpio */
#define MGOS_CONFIG_HAVE_I2C_SDA_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C_SDA_GPIO
int mgos_config_get_i2c_sda_gpio(struct mgos_config *cfg) {
  return cfg->i2c.sda_gpio;
}
void mgos_config_set_i2c_sda_gpio(struct mgos_config *cfg, int v) {
  cfg->i2c.sda_gpio = v;
}

/* i2c.scl_gpio */
#define MGOS_CONFIG_HAVE_I2C_SCL_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C_SCL_GPIO
int mgos_config_get_i2c_scl_gpio(struct mgos_config *cfg) {
  return cfg->i2c.scl_gpio;
}
void mgos_config_set_i2c_scl_gpio(struct mgos_config *cfg, int v) {
  cfg->i2c.scl_gpio = v;
}

/* i2c1 */
#define MGOS_CONFIG_HAVE_I2C1
#define MGOS_SYS_CONFIG_HAVE_I2C1
const struct mgos_config_i2c * mgos_config_get_i2c1(struct mgos_config *cfg) {
  return &cfg->i2c1;
}

/* i2c1.unit_no */
#define MGOS_CONFIG_HAVE_I2C1_UNIT_NO
#define MGOS_SYS_CONFIG_HAVE_I2C1_UNIT_NO
int mgos_config_get_i2c1_unit_no(struct mgos_config *cfg) {
  return cfg->i2c1.unit_no;
}
void mgos_config_set_i2c1_unit_no(struct mgos_config *cfg, int v) {
  cfg->i2c1.unit_no = v;
}

/* i2c1.enable */
#define MGOS_CONFIG_HAVE_I2C1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_I2C1_ENABLE
int mgos_config_get_i2c1_enable(struct mgos_config *cfg) {
  return cfg->i2c1.enable;
}
void mgos_config_set_i2c1_enable(struct mgos_config *cfg, int v) {
  cfg->i2c1.enable = v;
}

/* i2c1.freq */
#define MGOS_CONFIG_HAVE_I2C1_FREQ
#define MGOS_SYS_CONFIG_HAVE_I2C1_FREQ
int mgos_config_get_i2c1_freq(struct mgos_config *cfg) {
  return cfg->i2c1.freq;
}
void mgos_config_set_i2c1_freq(struct mgos_config *cfg, int v) {
  cfg->i2c1.freq = v;
}

/* i2c1.debug */
#define MGOS_CONFIG_HAVE_I2C1_DEBUG
#define MGOS_SYS_CONFIG_HAVE_I2C1_DEBUG
int mgos_config_get_i2c1_debug(struct mgos_config *cfg) {
  return cfg->i2c1.debug;
}
void mgos_config_set_i2c1_debug(struct mgos_config *cfg, int v) {
  cfg->i2c1.debug = v;
}

/* i2c1.sda_gpio */
#define MGOS_CONFIG_HAVE_I2C1_SDA_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C1_SDA_GPIO
int mgos_config_get_i2c1_sda_gpio(struct mgos_config *cfg) {
  return cfg->i2c1.sda_gpio;
}
void mgos_config_set_i2c1_sda_gpio(struct mgos_config *cfg, int v) {
  cfg->i2c1.sda_gpio = v;
}

/* i2c1.scl_gpio */
#define MGOS_CONFIG_HAVE_I2C1_SCL_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C1_SCL_GPIO
int mgos_config_get_i2c1_scl_gpio(struct mgos_config *cfg) {
  return cfg->i2c1.scl_gpio;
}
void mgos_config_set_i2c1_scl_gpio(struct mgos_config *cfg, int v) {
  cfg->i2c1.scl_gpio = v;
}

/* sys */
#define MGOS_CONFIG_HAVE_SYS
#define MGOS_SYS_CONFIG_HAVE_SYS
const struct mgos_config_sys * mgos_config_get_sys(struct mgos_config *cfg) {
  return &cfg->sys;
}
const struct mgos_conf_entry *mgos_config_schema_sys(void) {
  return mgos_conf_find_schema_entry("sys", mgos_config_schema());
}
bool mgos_config_parse_sys(struct mg_str json, struct mgos_config_sys *cfg) {
  return mgos_conf_parse_sub(json, mgos_config_schema(), cfg);
}
bool mgos_config_copy_sys(const struct mgos_config_sys *src, struct mgos_config_sys *dst) {
  return mgos_conf_copy(mgos_config_schema_sys(), src, dst);
}
void mgos_config_free_sys(struct mgos_config_sys *cfg) {
  return mgos_conf_free(mgos_config_schema_sys(), cfg);
}

/* sys.atca */
#define MGOS_CONFIG_HAVE_SYS_ATCA
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA
const struct mgos_config_sys_atca * mgos_config_get_sys_atca(struct mgos_config *cfg) {
  return &cfg->sys.atca;
}
const struct mgos_conf_entry *mgos_config_schema_sys_atca(void) {
  return mgos_conf_find_schema_entry("sys.atca", mgos_config_schema());
}
bool mgos_config_parse_sys_atca(struct mg_str json, struct mgos_config_sys_atca *cfg) {
  return mgos_conf_parse_sub(json, mgos_config_schema(), cfg);
}
bool mgos_config_copy_sys_atca(const struct mgos_config_sys_atca *src, struct mgos_config_sys_atca *dst) {
  return mgos_conf_copy(mgos_config_schema_sys_atca(), src, dst);
}
void mgos_config_free_sys_atca(struct mgos_config_sys_atca *cfg) {
  return mgos_conf_free(mgos_config_schema_sys_atca(), cfg);
}

/* sys.atca.enable */
#define MGOS_CONFIG_HAVE_SYS_ATCA_ENABLE
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_ENABLE
int mgos_config_get_sys_atca_enable(struct mgos_config *cfg) {
  return cfg->sys.atca.enable;
}
void mgos_config_set_sys_atca_enable(struct mgos_config *cfg, int v) {
  cfg->sys.atca.enable = v;
}

/* sys.atca.i2c_bus */
#define MGOS_CONFIG_HAVE_SYS_ATCA_I2C_BUS
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_I2C_BUS
int mgos_config_get_sys_atca_i2c_bus(struct mgos_config *cfg) {
  return cfg->sys.atca.i2c_bus;
}
void mgos_config_set_sys_atca_i2c_bus(struct mgos_config *cfg, int v) {
  cfg->sys.atca.i2c_bus = v;
}

/* sys.atca.i2c_addr */
#define MGOS_CONFIG_HAVE_SYS_ATCA_I2C_ADDR
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_I2C_ADDR
int mgos_config_get_sys_atca_i2c_addr(struct mgos_config *cfg) {
  return cfg->sys.atca.i2c_addr;
}
void mgos_config_set_sys_atca_i2c_addr(struct mgos_config *cfg, int v) {
  cfg->sys.atca.i2c_addr = v;
}

/* sys.atca.ecdh_slots_mask */
#define MGOS_CONFIG_HAVE_SYS_ATCA_ECDH_SLOTS_MASK
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_ECDH_SLOTS_MASK
int mgos_config_get_sys_atca_ecdh_slots_mask(struct mgos_config *cfg) {
  return cfg->sys.atca.ecdh_slots_mask;
}
void mgos_config_set_sys_atca_ecdh_slots_mask(struct mgos_config *cfg, int v) {
  cfg->sys.atca.ecdh_slots_mask = v;
}

/* sys.tz_spec */
#define MGOS_CONFIG_HAVE_SYS_TZ_SPEC
#define MGOS_SYS_CONFIG_HAVE_SYS_TZ_SPEC
const char * mgos_config_get_sys_tz_spec(struct mgos_config *cfg) {
  return cfg->sys.tz_spec;
}
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->sys.tz_spec, v);
}

/* sys.wdt_timeout */
#define MGOS_CONFIG_HAVE_SYS_WDT_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_SYS_WDT_TIMEOUT
int mgos_config_get_sys_wdt_timeout(struct mgos_config *cfg) {
  return cfg->sys.wdt_timeout;
}
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int v) {
  cfg->sys.wdt_timeout = v;
}

/* sys.pref_ota_lib */
#define MGOS_CONFIG_HAVE_SYS_PREF_OTA_LIB
#define MGOS_SYS_CONFIG_HAVE_SYS_PREF_OTA_LIB
const char * mgos_config_get_sys_pref_ota_lib(struct mgos_config *cfg) {
  return cfg->sys.pref_ota_lib;
}
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->sys.pref_ota_lib, v);
}

/* device */
#define MGOS_CONFIG_HAVE_DEVICE
#define MGOS_SYS_CONFIG_HAVE_DEVICE
const struct mgos_config_device * mgos_config_get_device(struct mgos_config *cfg) {
  return &cfg->device;
}
const struct mgos_conf_entry *mgos_config_schema_device(void) {
  return mgos_conf_find_schema_entry("device", mgos_config_schema());
}
bool mgos_config_parse_device(struct mg_str json, struct mgos_config_device *cfg) {
  return mgos_conf_parse_sub(json, mgos_config_schema(), cfg);
}
bool mgos_config_copy_device(const struct mgos_config_device *src, struct mgos_config_device *dst) {
  return mgos_conf_copy(mgos_config_schema_device(), src, dst);
}
void mgos_config_free_device(struct mgos_config_device *cfg) {
  return mgos_conf_free(mgos_config_schema_device(), cfg);
}

/* device.id */
#define MGOS_CONFIG_HAVE_DEVICE_ID
#define MGOS_SYS_CONFIG_HAVE_DEVICE_ID
const char * mgos_config_get_device_id(struct mgos_config *cfg) {
  return cfg->device.id;
}
void mgos_config_set_device_id(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->device.id, v);
}

/* device.license */
#define MGOS_CONFIG_HAVE_DEVICE_LICENSE
#define MGOS_SYS_CONFIG_HAVE_DEVICE_LICENSE
const char * mgos_config_get_device_license(struct mgos_config *cfg) {
  return cfg->device.license;
}
void mgos_config_set_device_license(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->device.license, v);
}

/* device.mac */
#define MGOS_CONFIG_HAVE_DEVICE_MAC
#define MGOS_SYS_CONFIG_HAVE_DEVICE_MAC
const char * mgos_config_get_device_mac(struct mgos_config *cfg) {
  return cfg->device.mac;
}
void mgos_config_set_device_mac(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->device.mac, v);
}

/* device.public_key */
#define MGOS_CONFIG_HAVE_DEVICE_PUBLIC_KEY
#define MGOS_SYS_CONFIG_HAVE_DEVICE_PUBLIC_KEY
const char * mgos_config_get_device_public_key(struct mgos_config *cfg) {
  return cfg->device.public_key;
}
void mgos_config_set_device_public_key(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->device.public_key, v);
}

/* device.sn */
#define MGOS_CONFIG_HAVE_DEVICE_SN
#define MGOS_SYS_CONFIG_HAVE_DEVICE_SN
const char * mgos_config_get_device_sn(struct mgos_config *cfg) {
  return cfg->device.sn;
}
void mgos_config_set_device_sn(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->device.sn, v);
}

/* conf_acl */
#define MGOS_CONFIG_HAVE_CONF_ACL
#define MGOS_SYS_CONFIG_HAVE_CONF_ACL
const char * mgos_config_get_conf_acl(struct mgos_config *cfg) {
  return cfg->conf_acl;
}
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->conf_acl, v);
}

/* rpc */
#define MGOS_CONFIG_HAVE_RPC
#define MGOS_SYS_CONFIG_HAVE_RPC
const struct mgos_config_rpc * mgos_config_get_rpc(struct mgos_config *cfg) {
  return &cfg->rpc;
}
const struct mgos_conf_entry *mgos_config_schema_rpc(void) {
  return mgos_conf_find_schema_entry("rpc", mgos_config_schema());
}
bool mgos_config_parse_rpc(struct mg_str json, struct mgos_config_rpc *cfg) {
  return mgos_conf_parse_sub(json, mgos_config_schema(), cfg);
}
bool mgos_config_copy_rpc(const struct mgos_config_rpc *src, struct mgos_config_rpc *dst) {
  return mgos_conf_copy(mgos_config_schema_rpc(), src, dst);
}
void mgos_config_free_rpc(struct mgos_config_rpc *cfg) {
  return mgos_conf_free(mgos_config_schema_rpc(), cfg);
}

/* rpc.enable */
#define MGOS_CONFIG_HAVE_RPC_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_ENABLE
int mgos_config_get_rpc_enable(struct mgos_config *cfg) {
  return cfg->rpc.enable;
}
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int v) {
  cfg->rpc.enable = v;
}

/* rpc.http_enable */
#define MGOS_CONFIG_HAVE_RPC_HTTP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_HTTP_ENABLE
int mgos_config_get_rpc_http_enable(struct mgos_config *cfg) {
  return cfg->rpc.http_enable;
}
void mgos_config_set_rpc_http_enable(struct mgos_config *cfg, int v) {
  cfg->rpc.http_enable = v;
}

/* rpc.service_sys_enable */
#define MGOS_CONFIG_HAVE_RPC_SERVICE_SYS_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_SERVICE_SYS_ENABLE
int mgos_config_get_rpc_service_sys_enable(struct mgos_config *cfg) {
  return cfg->rpc.service_sys_enable;
}
void mgos_config_set_rpc_service_sys_enable(struct mgos_config *cfg, int v) {
  cfg->rpc.service_sys_enable = v;
}

/* rpc.max_frame_size */
#define MGOS_CONFIG_HAVE_RPC_MAX_FRAME_SIZE
#define MGOS_SYS_CONFIG_HAVE_RPC_MAX_FRAME_SIZE
int mgos_config_get_rpc_max_frame_size(struct mgos_config *cfg) {
  return cfg->rpc.max_frame_size;
}
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int v) {
  cfg->rpc.max_frame_size = v;
}

/* rpc.max_queue_length */
#define MGOS_CONFIG_HAVE_RPC_MAX_QUEUE_LENGTH
#define MGOS_SYS_CONFIG_HAVE_RPC_MAX_QUEUE_LENGTH
int mgos_config_get_rpc_max_queue_length(struct mgos_config *cfg) {
  return cfg->rpc.max_queue_length;
}
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int v) {
  cfg->rpc.max_queue_length = v;
}

/* rpc.default_out_channel_idle_close_timeout */
#define MGOS_CONFIG_HAVE_RPC_DEFAULT_OUT_CHANNEL_IDLE_CLOSE_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_RPC_DEFAULT_OUT_CHANNEL_IDLE_CLOSE_TIMEOUT
int mgos_config_get_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg) {
  return cfg->rpc.default_out_channel_idle_close_timeout;
}
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int v) {
  cfg->rpc.default_out_channel_idle_close_timeout = v;
}

/* rpc.acl_file */
#define MGOS_CONFIG_HAVE_RPC_ACL_FILE
#define MGOS_SYS_CONFIG_HAVE_RPC_ACL_FILE
const char * mgos_config_get_rpc_acl_file(struct mgos_config *cfg) {
  return cfg->rpc.acl_file;
}
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->rpc.acl_file, v);
}

/* rpc.auth_domain */
#define MGOS_CONFIG_HAVE_RPC_AUTH_DOMAIN
#define MGOS_SYS_CONFIG_HAVE_RPC_AUTH_DOMAIN
const char * mgos_config_get_rpc_auth_domain(struct mgos_config *cfg) {
  return cfg->rpc.auth_domain;
}
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->rpc.auth_domain, v);
}

/* rpc.auth_file */
#define MGOS_CONFIG_HAVE_RPC_AUTH_FILE
#define MGOS_SYS_CONFIG_HAVE_RPC_AUTH_FILE
const char * mgos_config_get_rpc_auth_file(struct mgos_config *cfg) {
  return cfg->rpc.auth_file;
}
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char * v) {
  mgos_conf_set_str(&cfg->rpc.auth_file, v);
}

/* sd */
#define MGOS_CONFIG_HAVE_SD
#define MGOS_SYS_CONFIG_HAVE_SD
const struct mgos_config_sd * mgos_config_get_sd(struct mgos_config *cfg) {
  return &cfg->sd;
}
const struct mgos_conf_entry *mgos_config_schema_sd(void) {
  return mgos_conf_find_schema_entry("sd", mgos_config_schema());
}
bool mgos_config_parse_sd(struct mg_str json, struct mgos_config_sd *cfg) {
  return mgos_conf_parse_sub(json, mgos_config_schema(), cfg);
}
bool mgos_config_copy_sd(const struct mgos_config_sd *src, struct mgos_config_sd *dst) {
  return mgos_conf_copy(mgos_config_schema_sd(), src, dst);
}
void mgos_config_free_sd(struct mgos_config_sd *cfg) {
  return mgos_conf_free(mgos_config_schema_sd(), cfg);
}

/* sd.max_files */
#define MGOS_CONFIG_HAVE_SD_MAX_FILES
#define MGOS_SYS_CONFIG_HAVE_SD_MAX_FILES
int mgos_config_get_sd_max_files(struct mgos_config *cfg) {
  return cfg->sd.max_files;
}
void mgos_config_set_sd_max_files(struct mgos_config *cfg, int v) {
  cfg->sd.max_files = v;
}

/* sd_spi */
#define MGOS_CONFIG_HAVE_SD_SPI
#define MGOS_SYS_CONFIG_HAVE_SD_SPI
const struct mgos_config_sd_spi * mgos_config_get_sd_spi(struct mgos_config *cfg) {
  return &cfg->sd_spi;
}
const struct mgos_conf_entry *mgos_config_schema_sd_spi(void) {
  return mgos_conf_find_schema_entry("sd_spi", mgos_config_schema());
}
bool mgos_config_parse_sd_spi(struct mg_str json, struct mgos_config_sd_spi *cfg) {
  return mgos_conf_parse_sub(json, mgos_config_schema(), cfg);
}
bool mgos_config_copy_sd_spi(const struct mgos_config_sd_spi *src, struct mgos_config_sd_spi *dst) {
  return mgos_conf_copy(mgos_config_schema_sd_spi(), src, dst);
}
void mgos_config_free_sd_spi(struct mgos_config_sd_spi *cfg) {
  return mgos_conf_free(mgos_config_schema_sd_spi(), cfg);
}

/* sd_spi.pin_miso */
#define MGOS_CONFIG_HAVE_SD_SPI_PIN_MISO
#define MGOS_SYS_CONFIG_HAVE_SD_SPI_PIN_MISO
int mgos_config_get_sd_spi_pin_miso(struct mgos_config *cfg) {
  return cfg->sd_spi.pin_miso;
}
void mgos_config_set_sd_spi_pin_miso(struct mgos_config *cfg, int v) {
  cfg->sd_spi.pin_miso = v;
}

/* sd_spi.pin_mosi */
#define MGOS_CONFIG_HAVE_SD_SPI_PIN_MOSI
#define MGOS_SYS_CONFIG_HAVE_SD_SPI_PIN_MOSI
int mgos_config_get_sd_spi_pin_mosi(struct mgos_config *cfg) {
  return cfg->sd_spi.pin_mosi;
}
void mgos_config_set_sd_spi_pin_mosi(struct mgos_config *cfg, int v) {
  cfg->sd_spi.pin_mosi = v;
}

/* sd_spi.pin_clk */
#define MGOS_CONFIG_HAVE_SD_SPI_PIN_CLK
#define MGOS_SYS_CONFIG_HAVE_SD_SPI_PIN_CLK
int mgos_config_get_sd_spi_pin_clk(struct mgos_config *cfg) {
  return cfg->sd_spi.pin_clk;
}
void mgos_config_set_sd_spi_pin_clk(struct mgos_config *cfg, int v) {
  cfg->sd_spi.pin_clk = v;
}

/* sd_spi.pin_cs */
#define MGOS_CONFIG_HAVE_SD_SPI_PIN_CS
#define MGOS_SYS_CONFIG_HAVE_SD_SPI_PIN_CS
int mgos_config_get_sd_spi_pin_cs(struct mgos_config *cfg) {
  return cfg->sd_spi.pin_cs;
}
void mgos_config_set_sd_spi_pin_cs(struct mgos_config *cfg, int v) {
  cfg->sd_spi.pin_cs = v;
}

/* sd_sdmmc */
#define MGOS_CONFIG_HAVE_SD_SDMMC
#define MGOS_SYS_CONFIG_HAVE_SD_SDMMC
const struct mgos_config_sd_sdmmc * mgos_config_get_sd_sdmmc(struct mgos_config *cfg) {
  return &cfg->sd_sdmmc;
}
const struct mgos_conf_entry *mgos_config_schema_sd_sdmmc(void) {
  return mgos_conf_find_schema_entry("sd_sdmmc", mgos_config_schema());
}
bool mgos_config_parse_sd_sdmmc(struct mg_str json, struct mgos_config_sd_sdmmc *cfg) {
  return mgos_conf_parse_sub(json, mgos_config_schema(), cfg);
}
bool mgos_config_copy_sd_sdmmc(const struct mgos_config_sd_sdmmc *src, struct mgos_config_sd_sdmmc *dst) {
  return mgos_conf_copy(mgos_config_schema_sd_sdmmc(), src, dst);
}
void mgos_config_free_sd_sdmmc(struct mgos_config_sd_sdmmc *cfg) {
  return mgos_conf_free(mgos_config_schema_sd_sdmmc(), cfg);
}

/* sd_sdmmc.use1line */
#define MGOS_CONFIG_HAVE_SD_SDMMC_USE1LINE
#define MGOS_SYS_CONFIG_HAVE_SD_SDMMC_USE1LINE
int mgos_config_get_sd_sdmmc_use1line(struct mgos_config *cfg) {
  return cfg->sd_sdmmc.use1line;
}
void mgos_config_set_sd_sdmmc_use1line(struct mgos_config *cfg, int v) {
  cfg->sd_sdmmc.use1line = v;
}
bool mgos_sys_config_get(const struct mg_str key, struct mg_str *value) {
  return mgos_config_get(key, value, &mgos_sys_config, mgos_config_schema());
}
bool mgos_sys_config_set(const struct mg_str key, const struct mg_str value, bool free_strings) {
  return mgos_config_set(key, value, &mgos_sys_config, mgos_config_schema(), free_strings);
}
