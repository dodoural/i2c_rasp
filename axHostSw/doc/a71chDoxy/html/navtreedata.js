/*
@ @licstart  The following is the entire license notice for the
JavaScript code in this file.

Copyright (C) 1997-2017 by Dimitri van Heesch

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

@licend  The above is the entire license notice
for the JavaScript code in this file
*/
var NAVTREE =
[
  [ "A71CH Host Sw", "index.html", [
    [ "A71CH Host SW documentation", "index.html", [
      [ "Introduction", "index.html#intro", null ],
      [ "A71CH API", "index.html#hostLib", null ],
      [ "Hostlib API based examples", "index.html#sw_maina71ch_ex", null ],
      [ "SW structure", "index.html#sw_structure", [
        [ "OpenSSL", "index.html#sw_structure_o", null ],
        [ "mbed TLS", "index.html#sw_structure_m", null ],
        [ "Common", "index.html#sw_structure_c", null ]
      ] ],
      [ "Configure Tool", "index.html#configure_tool", null ],
      [ "OpenSSL Engine", "index.html#open_ssl_engine", null ],
      [ "mbed TLS Integration", "index.html#mbedtls_alt", null ],
      [ "Host Library Secure Element Generic API (HLSE)", "index.html#generic_api", null ],
      [ "RJCT Server", "index.html#rjct_server", null ],
      [ "VCOM", "index.html#sec_page_VCOM", null ],
      [ "Building SW", "index.html#building_sw", null ]
    ] ],
    [ "A71CH example deployment scenario", "walkthrough.html", [
      [ "Introduction (Typical deployment scenario)", "walkthrough.html#intro_hads", null ],
      [ "Binding of Host Controller with A71CH", "walkthrough.html#binding_hc_a71ch", null ],
      [ "Provisioning in Secured Environment", "walkthrough.html#provisioning_in_sec_env", null ],
      [ "Prepare for shipment to End-Customer", "walkthrough.html#prepare_shipment", null ],
      [ "Typical operational usage", "walkthrough.html#typ_operations", null ]
    ] ],
    [ "A71CH Configure Tool", "page_a71ch_configure_tool.html", [
      [ "(1) Introduction", "page_a71ch_configure_tool.html#sec_a71chcfgtool_introduction", null ],
      [ "(2) Usage modes", "page_a71ch_configure_tool.html#sec_a71chcfgtool_usagemdoes", null ],
      [ "(3) Tool deployment", "page_a71ch_configure_tool.html#sec_a71chcfgtool_tool_deployment", [
        [ "HW Setup for iMX", "page_a71ch_configure_tool.html#sec_a71chcfgtool_hw_setup_imx", null ],
        [ "HW Setup for Kinetis", "page_a71ch_configure_tool.html#sec_a71chcfgtool_hw_setup_kinetis", null ],
        [ "SW layers and communication for iMX", "page_a71ch_configure_tool.html#sec_a71chcfgtool_swlayer_imx", null ],
        [ "SW layers and communication for Kinetis", "page_a71ch_configure_tool.html#sec_a71chcfgtool_swlayer_kinetis", null ]
      ] ],
      [ "(4) Command reference", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_ref", [
        [ "Overall introduction", "page_a71ch_configure_tool.html#sec_a71chcfgtool_overall_intro", null ],
        [ "apdu", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_apdu", null ],
        [ "connect", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_connect", null ],
        [ "debug", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_debug", null ],
        [ "ecrt", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_ecrt", null ],
        [ "erase", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_erase", null ],
        [ "gen", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_gen", null ],
        [ "get", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_get", null ],
        [ "info", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_info", null ],
        [ "interactive", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_interactive", null ],
        [ "lock", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_lock", null ],
        [ "obj erase", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_obj_erase", null ],
        [ "obj get", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_obj_get", null ],
        [ "obj update", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_obj_update", null ],
        [ "obj write", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_obj_write", null ],
        [ "rcrt", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_rcrt", null ],
        [ "refpem", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_refpm", null ],
        [ "script", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_script", null ],
        [ "scp", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_scp", null ],
        [ "set", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_set", null ],
        [ "transport", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_transport", null ],
        [ "ucrt", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_urct", null ],
        [ "wcrt", "page_a71ch_configure_tool.html#sec_a71chcfgtool_cmd_wrct", null ]
      ] ],
      [ "(5) Not connected mode", "page_a71ch_configure_tool.html#sec_a71chcfgtool_mode_nc", null ]
    ] ],
    [ "HLSE (Generic) API", "page_hlse_generic_api.html", [
      [ "HLSE API", "page_hlse_generic_api.html#genAPI", [
        [ "Host Crypto API", "page_hlse_generic_api.html#hcApi", null ],
        [ "Logical objects", "page_hlse_generic_api.html#logicalObjects", null ]
      ] ],
      [ "SW Structure", "page_hlse_generic_api.html#sw_structure_hlse", [
        [ "Object creation", "page_hlse_generic_api.html#autotoc_md1", null ],
        [ "Value Update", "page_hlse_generic_api.html#autotoc_md2", null ],
        [ "Direct Access Value Update", "page_hlse_generic_api.html#autotoc_md3", null ],
        [ "Erasing an object", "page_hlse_generic_api.html#autotoc_md4", null ],
        [ "Interoperability of Object storage and locked chunks", "page_hlse_generic_api.html#autotoc_md5", null ],
        [ "Notes", "page_hlse_generic_api.html#autotoc_md6", null ]
      ] ],
      [ "HLSE API Examples", "page_hlse_generic_api.html#autotoc_md7", null ]
    ] ],
    [ "A71CH examples", "page__a71_c_h_example.html", "page__a71_c_h_example" ],
    [ "OpenSSL Engine", "gax_openssl_engine.html", "gax_openssl_engine" ],
    [ "mbed TLS Integraton", "page_mbed_t_l_s.html", [
      [ "ALT Implementation", "page_mbed_t_l_s.html#mbedTLS_alt", [
        [ "Introduction", "page_mbed_t_l_s.html#mbedTLS_alt_Introduction", null ],
        [ "mbedTLS", "page_mbed_t_l_s.html#mbedTLS_alt_mbedTLS", [
          [ "mbedTLS configuration header file", "page_mbed_t_l_s.html#mbedTLS_alt_config_header_file", null ],
          [ "MBEDTLS_*_ALT Macros", "page_mbed_t_l_s.html#mbedTLS_alt_macros", null ],
          [ "Kinetis/Freedom/KSDK alt implementation", "page_mbed_t_l_s.html#mbedTLS_alt_ksdk", null ],
          [ "A71CH ALT implementation", "page_mbed_t_l_s.html#mbedTLS_alt_a71ch", null ],
          [ "Extensions on top of KSDK’s mbed TLS modifications", "page_mbed_t_l_s.html#mbedTLS_alt_extensions", null ]
        ] ],
        [ "Key usage", "page_mbed_t_l_s.html#mbedtls_alt_key_usage", [
          [ "Generating/Loading Keys vs referencing by index", "page_mbed_t_l_s.html#mbedtls_alt_gen_load_key", null ],
          [ "mbedtls_ecp_group::type_ax_index", "page_mbed_t_l_s.html#type_ax_index", null ],
          [ "Associating keys", "page_mbed_t_l_s.html#asso_key", null ],
          [ "Public Keys", "page_mbed_t_l_s.html#pub_key", null ],
          [ "Private Keys", "page_mbed_t_l_s.html#priv_key", null ],
          [ "TLS ECDH handshake", "page_mbed_t_l_s.html#tls_ecdh_handshake", null ],
          [ "Existing middleware/wrappers", "page_mbed_t_l_s.html#existing_middleware", null ]
        ] ],
        [ "Certificates", "page_mbed_t_l_s.html#cert", null ]
      ] ]
    ] ],
    [ "Build Environments", "page_build.html", "page_build" ],
    [ "Common Utilities", "building_blocks.html", "building_blocks" ],
    [ "Platform", "page_platform.html", "page_platform" ],
    [ "OpenSDA Installation/Update", "opensda.html", [
      [ "Quick Steps", "opensda.html#quick_steps", null ],
      [ "Introduction", "opensda.html#opensda_introduction", null ]
    ] ],
    [ "RJCT Server", "page_rjct_server.html", [
      [ "(1) Introduction", "page_rjct_server.html#autotoc_md62", null ],
      [ "(2) Using the RJCT server", "page_rjct_server.html#autotoc_md63", null ]
    ] ],
    [ "VCOM", "page__v_c_o_m.html", [
      [ "Installing VCOM Drivers on Windows 7 PC", "page__v_c_o_m.html#autotoc_md64", null ],
      [ "Steps to use VCOM for running the examples", "page__v_c_o_m.html#autotoc_md65", null ]
    ] ],
    [ "Modules", "modules.html", "modules" ],
    [ "Data Structures", "annotated.html", [
      [ "Data Structures", "annotated.html", "annotated_dup" ],
      [ "Data Structure Index", "classes.html", null ],
      [ "Data Fields", "functions.html", [
        [ "All", "functions.html", null ],
        [ "Variables", "functions_vars.html", null ]
      ] ]
    ] ],
    [ "Files", "files.html", [
      [ "File List", "files.html", "files_dup" ],
      [ "Globals", "globals.html", [
        [ "All", "globals.html", "globals_dup" ],
        [ "Functions", "globals_func.html", "globals_func" ],
        [ "Variables", "globals_vars.html", null ],
        [ "Typedefs", "globals_type.html", null ],
        [ "Enumerations", "globals_enum.html", null ],
        [ "Enumerator", "globals_eval.html", null ],
        [ "Macros", "globals_defs.html", "globals_defs" ]
      ] ]
    ] ]
  ] ]
];

var NAVTREEINDEX =
[
"_a71_h_l_s_e_wrapper_8c.html",
"a71ch__api_8h.html#ad71585041312c43b696277c3f5d64ee2",
"ax__common_8h.html#a195a7ddd48d9272f9c533686c72b49bcac08ae9ceecd77863b53ddf4f097ab0a2",
"ex__config_8c.html#af1003ad72c683eb483caf7d95ff82ee2",
"globals_func_u.html",
"group__ghlse__types.html#gad69965039f8951f9b5dbd5c7ae1c95b9",
"page_platform_kinetis_timers.html#kinetis_timer",
"struct_h_l_s_e___s_c_p03___s_e_s_s_i_o_n___s_t_a_t_e.html#a90ad674567ccbb9e3f6f2c6060be44b4",
"tst__host__crypto_8c.html#a58ce34069b320cf94a2031a892c685df"
];

var SYNCONMSG = 'click to disable panel synchronisation';
var SYNCOFFMSG = 'click to enable panel synchronisation';