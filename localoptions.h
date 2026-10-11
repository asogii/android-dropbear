/*
 * Copyright © 2020-2026 Matt Robinson
 *
 * SPDX-License-Identifier: MIT
 */

// Disable server password auth as crypt() isn't available under Android
#define DROPBEAR_SVR_PASSWORD_AUTH 0

// Disable client password auth as getpass() isn't available under Android
#define DROPBEAR_CLI_PASSWORD_AUTH 0

// Speed up symmetrical ciphers and hashes at the expense of larger binaries
#define DROPBEAR_SMALL_CODE 0

// Build all but the most verbose level of trace messages into the binaries
#define DEBUG_TRACE 0

// Path
#define DEFAULT_PATH "/data/adb/dropbear/bin:/data/data/com.termux/files/usr/bin:/system/bin:/system/xbin"
#define DEFAULT_ROOT_PATH "/data/adb/dropbear/bin:/data/data/com.termux/files/usr/bin:/system/bin:/system/xbin"

#define SFTPSERVER_PATH "/data/data/com.termux/files/usr/libexec/sftp-server"

#define DROPBEAR_PIDFILE "/data/adb/dropbear/dropbear.pid"
#define ED25519_PRIV_FILENAME "/data/adb/dropbear/dropbear_ed25519_host_key"

// Network speed
#define DEFAULT_RECV_WINDOW 262144

#define DO_MOTD 0
#define DROPBEAR_REEXEC 0

