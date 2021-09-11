/*
 * Internal module API header file.
 *
 * Generated by SIP 4.19.7
 */

#ifndef _libqt_gui_cpp_sipAPI_H
#define _libqt_gui_cpp_sipAPI_H

#include <sip.h>

#include <QMetaType>
#include <QThread>

/* These are the qualifiers that are enabled. */
#define SIP_FEATURE_PyQt_MacOSXOnly
#define SIP_FEATURE_PyQt_Process
#define SIP_FEATURE_PyQt_NotBootstrapped
#define SIP_FEATURE_PyQt_OpenGL
#define SIP_FEATURE_PyQt_RawFont
#define SIP_FEATURE_PyQt_PrintPreviewDialog
#define SIP_FEATURE_PyQt_PrintPreviewWidget
#define SIP_FEATURE_PyQt_Printer
#define SIP_FEATURE_PyQt_PrintDialog
#define SIP_FEATURE_PyQt_qreal_double
#define SIP_FEATURE_PyQt_SSL
#define SIP_FEATURE_PyQt_SessionManager
#define SIP_FEATURE_PyQt_Accessibility
#define SIP_PLATFORM_WS_X11
#define SIP_TIMELINE_Qt_5_9_5


/*
 * Convenient names to refer to various strings defined in this module.
 * Only the class names are part of the public API.
 */
#define sipNameNr_qt_gui_cpp__RosPluginlibPluginProvider_ForPluginProviders 0
#define sipName_qt_gui_cpp__RosPluginlibPluginProvider_ForPluginProviders &sipStrings_libqt_gui_cpp_sip[0]
#define sipNameNr_qt_gui_cpp__RosPluginlibPluginProvider_ForPlugins 58
#define sipName_qt_gui_cpp__RosPluginlibPluginProvider_ForPlugins &sipStrings_libqt_gui_cpp_sip[58]
#define sipNameNr_RosPluginlibPluginProvider_ForPluginProviders 12
#define sipName_RosPluginlibPluginProvider_ForPluginProviders &sipStrings_libqt_gui_cpp_sip[12]
#define sipNameNr_RosPluginlibPluginProvider_ForPlugins 70
#define sipName_RosPluginlibPluginProvider_ForPlugins &sipStrings_libqt_gui_cpp_sip[70]
#define sipNameNr_108 108
#define sipName_108 &sipStrings_libqt_gui_cpp_sip[108]
#define sipNameNr_qt_gui_cpp__RecursivePluginProvider 145
#define sipName_qt_gui_cpp__RecursivePluginProvider &sipStrings_libqt_gui_cpp_sip[145]
#define sipNameNr_qt_gui_cpp__CompositePluginProvider 181
#define sipName_qt_gui_cpp__CompositePluginProvider &sipStrings_libqt_gui_cpp_sip[181]
#define sipNameNr_217 217
#define sipName_217 &sipStrings_libqt_gui_cpp_sip[217]
#define sipNameNr_qt_gui_cpp__PluginDescriptor 252
#define sipName_qt_gui_cpp__PluginDescriptor &sipStrings_libqt_gui_cpp_sip[252]
#define sipNameNr_qt_gui_cpp__PluginProvider 281
#define sipName_qt_gui_cpp__PluginProvider &sipStrings_libqt_gui_cpp_sip[281]
#define sipNameNr_qt_gui_cpp__PluginContext 308
#define sipName_qt_gui_cpp__PluginContext &sipStrings_libqt_gui_cpp_sip[308]
#define sipNameNr_qt_gui_cpp__PluginBridge 334
#define sipName_qt_gui_cpp__PluginBridge &sipStrings_libqt_gui_cpp_sip[334]
#define sipNameNr_qt_gui_cpp__GenericProxy 359
#define sipName_qt_gui_cpp__GenericProxy &sipStrings_libqt_gui_cpp_sip[359]
#define sipNameNr_RecursivePluginProvider 157
#define sipName_RecursivePluginProvider &sipStrings_libqt_gui_cpp_sip[157]
#define sipNameNr_CompositePluginProvider 193
#define sipName_CompositePluginProvider &sipStrings_libqt_gui_cpp_sip[193]
#define sipNameNr_384 384
#define sipName_384 &sipStrings_libqt_gui_cpp_sip[384]
#define sipNameNr_trigger_configuration 406
#define sipName_trigger_configuration &sipStrings_libqt_gui_cpp_sip[406]
#define sipNameNr_qt_gui_cpp__Settings 428
#define sipName_qt_gui_cpp__Settings &sipStrings_libqt_gui_cpp_sip[428]
#define sipNameNr_discover_descriptors 449
#define sipName_discover_descriptors &sipStrings_libqt_gui_cpp_sip[449]
#define sipNameNr_set_plugin_providers 470
#define sipName_set_plugin_providers &sipStrings_libqt_gui_cpp_sip[470]
#define sipNameNr_load_explicit_type 491
#define sipName_load_explicit_type &sipStrings_libqt_gui_cpp_sip[491]
#define sipNameNr_qt_gui_cpp__Plugin 510
#define sipName_qt_gui_cpp__Plugin &sipStrings_libqt_gui_cpp_sip[510]
#define sipNameNr_has_configuration 529
#define sipName_has_configuration &sipStrings_libqt_gui_cpp_sip[529]
#define sipNameNr_destroySubWindows 547
#define sipName_destroySubWindows &sipStrings_libqt_gui_cpp_sip[547]
#define sipNameNr_isSignalConnected 565
#define sipName_isSignalConnected &sipStrings_libqt_gui_cpp_sip[565]
#define sipNameNr_senderSignalIndex 583
#define sipName_senderSignalIndex &sipStrings_libqt_gui_cpp_sip[583]
#define sipNameNr_sip_simplewrapper 601
#define sipName_sip_simplewrapper &sipStrings_libqt_gui_cpp_sip[601]
#define sipNameNr_libqt_gui_cpp_sip 619
#define sipName_libqt_gui_cpp_sip &sipStrings_libqt_gui_cpp_sip[619]
#define sipNameNr_PluginDescriptor 264
#define sipName_PluginDescriptor &sipStrings_libqt_gui_cpp_sip[264]
#define sipNameNr_restore_settings 637
#define sipName_restore_settings &sipStrings_libqt_gui_cpp_sip[637]
#define sipNameNr_destroyOldWindow 654
#define sipName_destroyOldWindow &sipStrings_libqt_gui_cpp_sip[654]
#define sipNameNr_initializeWindow 671
#define sipName_initializeWindow &sipStrings_libqt_gui_cpp_sip[671]
#define sipNameNr_disconnectNotify 688
#define sipName_disconnectNotify &sipStrings_libqt_gui_cpp_sip[688]
#define sipNameNr_create_instance 705
#define sipName_create_instance &sipStrings_libqt_gui_cpp_sip[705]
#define sipNameNr_shutdown_plugin 721
#define sipName_shutdown_plugin &sipStrings_libqt_gui_cpp_sip[721]
#define sipNameNr_deviceTransform 737
#define sipName_deviceTransform &sipStrings_libqt_gui_cpp_sip[737]
#define sipNameNr_internal_format 753
#define sipName_internal_format &sipStrings_libqt_gui_cpp_sip[753]
#define sipNameNr_aspectRatioMode 769
#define sipName_aspectRatioMode &sipStrings_libqt_gui_cpp_sip[769]
#define sipNameNr_PluginProvider 166
#define sipName_PluginProvider &sipStrings_libqt_gui_cpp_sip[166]
#define sipNameNr_PluginContext 320
#define sipName_PluginContext &sipStrings_libqt_gui_cpp_sip[320]
#define sipNameNr_save_settings 785
#define sipName_save_settings &sipStrings_libqt_gui_cpp_sip[785]
#define sipNameNr_unload_plugin 799
#define sipName_unload_plugin &sipStrings_libqt_gui_cpp_sip[799]
#define sipNameNr_changedSignal 813
#define sipName_changedSignal &sipStrings_libqt_gui_cpp_sip[813]
#define sipNameNr_destroyWindow 827
#define sipName_destroyWindow &sipStrings_libqt_gui_cpp_sip[827]
#define sipNameNr_thresholdTime 841
#define sipName_thresholdTime &sipStrings_libqt_gui_cpp_sip[841]
#define sipNameNr_transformMode 855
#define sipName_transformMode &sipStrings_libqt_gui_cpp_sip[855]
#define sipNameNr_connectNotify 691
#define sipName_connectNotify &sipStrings_libqt_gui_cpp_sip[691]
#define sipNameNr_reloadPlugin 869
#define sipName_reloadPlugin &sipStrings_libqt_gui_cpp_sip[869]
#define sipNameNr_PluginBridge 346
#define sipName_PluginBridge &sipStrings_libqt_gui_cpp_sip[346]
#define sipNameNr_GenericProxy 371
#define sipName_GenericProxy &sipStrings_libqt_gui_cpp_sip[371]
#define sipNameNr_sourceRegion 882
#define sipName_sourceRegion &sipStrings_libqt_gui_cpp_sip[882]
#define sipNameNr_targetOffset 895
#define sipName_targetOffset &sipStrings_libqt_gui_cpp_sip[895]
#define sipNameNr_removeWidget 908
#define sipName_removeWidget &sipStrings_libqt_gui_cpp_sip[908]
#define sipNameNr_midLineWidth 921
#define sipName_midLineWidth &sipStrings_libqt_gui_cpp_sip[921]
#define sipNameNr_serialNumber 934
#define sipName_serialNumber &sipStrings_libqt_gui_cpp_sip[934]
#define sipNameNr_boundingRect 947
#define sipName_boundingRect &sipStrings_libqt_gui_cpp_sip[947]
#define sipNameNr_closePlugin 960
#define sipName_closePlugin &sipStrings_libqt_gui_cpp_sip[960]
#define sipNameNr_load_plugin 801
#define sipName_load_plugin &sipStrings_libqt_gui_cpp_sip[801]
#define sipNameNr_matchPolicy 972
#define sipName_matchPolicy &sipStrings_libqt_gui_cpp_sip[972]
#define sipNameNr_customEvent 984
#define sipName_customEvent &sipStrings_libqt_gui_cpp_sip[984]
#define sipNameNr_eventFilter 996
#define sipName_eventFilter &sipStrings_libqt_gui_cpp_sip[996]
#define sipNameNr_qt_gui_cpp 1008
#define sipName_qt_gui_cpp &sipStrings_libqt_gui_cpp_sip[1008]
#define sipNameNr_constraint 1019
#define sipName_constraint &sipStrings_libqt_gui_cpp_sip[1019]
#define sipNameNr_repeatTime 1030
#define sipName_repeatTime &sipStrings_libqt_gui_cpp_sip[1030]
#define sipNameNr_columnSpan 1041
#define sipName_columnSpan &sipStrings_libqt_gui_cpp_sip[1041]
#define sipNameNr_genMipMaps 1052
#define sipName_genMipMaps &sipStrings_libqt_gui_cpp_sip[1052]
#define sipNameNr_childEvent 1063
#define sipName_childEvent &sipStrings_libqt_gui_cpp_sip[1063]
#define sipNameNr_timerEvent 1074
#define sipName_timerEvent &sipStrings_libqt_gui_cpp_sip[1074]
#define sipNameNr_addWidget 1085
#define sipName_addWidget &sipStrings_libqt_gui_cpp_sip[1085]
#define sipNameNr_operation 1095
#define sipName_operation &sipStrings_libqt_gui_cpp_sip[1095]
#define sipNameNr_lineWidth 1105
#define sipName_lineWidth &sipStrings_libqt_gui_cpp_sip[1105]
#define sipNameNr_directory 1115
#define sipName_directory &sipStrings_libqt_gui_cpp_sip[1115]
#define sipNameNr_alignment 1125
#define sipName_alignment &sipStrings_libqt_gui_cpp_sip[1125]
#define sipNameNr_receivers 1135
#define sipName_receivers &sipStrings_libqt_gui_cpp_sip[1135]
#define sipNameNr_precision 1145
#define sipName_precision &sipStrings_libqt_gui_cpp_sip[1145]
#define sipNameNr_Settings 440
#define sipName_Settings &sipStrings_libqt_gui_cpp_sip[440]
#define sipNameNr_discover 1155
#define sipName_discover &sipStrings_libqt_gui_cpp_sip[1155]
#define sipNameNr_shutdown 1164
#define sipName_shutdown &sipStrings_libqt_gui_cpp_sip[1164]
#define sipNameNr_shortcut 1173
#define sipName_shortcut &sipStrings_libqt_gui_cpp_sip[1173]
#define sipNameNr_userData 1182
#define sipName_userData &sipStrings_libqt_gui_cpp_sip[1182]
#define sipNameNr_fillRule 1191
#define sipName_fillRule &sipStrings_libqt_gui_cpp_sip[1191]
#define sipNameNr_tabArray 1200
#define sipName_tabArray &sipStrings_libqt_gui_cpp_sip[1200]
#define sipNameNr_tabStops 1209
#define sipName_tabStops &sipStrings_libqt_gui_cpp_sip[1209]
#define sipNameNr_nameType 1218
#define sipName_nameType &sipStrings_libqt_gui_cpp_sip[1218]
#define sipNameNr_position 1227
#define sipName_position &sipStrings_libqt_gui_cpp_sip[1227]
#define sipNameNr_property 1236
#define sipName_property &sipStrings_libqt_gui_cpp_sip[1236]
#define sipNameNr_yMargin 1245
#define sipName_yMargin &sipStrings_libqt_gui_cpp_sip[1245]
#define sipNameNr_xMargin 1253
#define sipName_xMargin &sipStrings_libqt_gui_cpp_sip[1253]
#define sipNameNr_rowSpan 1261
#define sipName_rowSpan &sipStrings_libqt_gui_cpp_sip[1261]
#define sipNameNr_exposed 1269
#define sipName_exposed &sipStrings_libqt_gui_cpp_sip[1269]
#define sipNameNr_buffers 1277
#define sipName_buffers &sipStrings_libqt_gui_cpp_sip[1277]
#define sipNameNr_sources 1285
#define sipName_sources &sipStrings_libqt_gui_cpp_sip[1285]
#define sipNameNr_quality 1293
#define sipName_quality &sipStrings_libqt_gui_cpp_sip[1293]
#define sipNameNr_filters 1301
#define sipName_filters &sipStrings_libqt_gui_cpp_sip[1301]
#define sipNameNr_enabled 1309
#define sipName_enabled &sipStrings_libqt_gui_cpp_sip[1309]
#define sipNameNr_options 1317
#define sipName_options &sipStrings_libqt_gui_cpp_sip[1317]
#define sipNameNr_Plugin 522
#define sipName_Plugin &sipStrings_libqt_gui_cpp_sip[522]
#define sipNameNr_sunken 1325
#define sipName_sunken &sipStrings_libqt_gui_cpp_sip[1325]
#define sipNameNr_layers 1332
#define sipName_layers &sipStrings_libqt_gui_cpp_sip[1332]
#define sipNameNr_stride 1339
#define sipName_stride &sipStrings_libqt_gui_cpp_sip[1339]
#define sipNameNr_window 1346
#define sipName_window &sipStrings_libqt_gui_cpp_sip[1346]
#define sipNameNr_proper 1353
#define sipName_proper &sipStrings_libqt_gui_cpp_sip[1353]
#define sipNameNr_sender 1360
#define sipName_sender &sipStrings_libqt_gui_cpp_sip[1360]
#define sipNameNr_value9 1367
#define sipName_value9 &sipStrings_libqt_gui_cpp_sip[1367]
#define sipNameNr_value8 1374
#define sipName_value8 &sipStrings_libqt_gui_cpp_sip[1374]
#define sipNameNr_value7 1381
#define sipName_value7 &sipStrings_libqt_gui_cpp_sip[1381]
#define sipNameNr_value6 1388
#define sipName_value6 &sipStrings_libqt_gui_cpp_sip[1388]
#define sipNameNr_value5 1395
#define sipName_value5 &sipStrings_libqt_gui_cpp_sip[1395]
#define sipNameNr_value4 1402
#define sipName_value4 &sipStrings_libqt_gui_cpp_sip[1402]
#define sipNameNr_value3 1409
#define sipName_value3 &sipStrings_libqt_gui_cpp_sip[1409]
#define sipNameNr_value2 1416
#define sipName_value2 &sipStrings_libqt_gui_cpp_sip[1416]
#define sipNameNr_value1 1423
#define sipName_value1 &sipStrings_libqt_gui_cpp_sip[1423]
#define sipNameNr_value0 1430
#define sipName_value0 &sipStrings_libqt_gui_cpp_sip[1430]
#define sipNameNr_system 1437
#define sipName_system &sipStrings_libqt_gui_cpp_sip[1437]
#define sipNameNr_unload 1444
#define sipName_unload &sipStrings_libqt_gui_cpp_sip[1444]
#define sipNameNr_symbol 1451
#define sipName_symbol &sipStrings_libqt_gui_cpp_sip[1451]
#define sipNameNr_suffix 1458
#define sipName_suffix &sipStrings_libqt_gui_cpp_sip[1458]
#define sipNameNr_offset 1465
#define sipName_offset &sipStrings_libqt_gui_cpp_sip[1465]
#define sipNameNr_prefix 1472
#define sipName_prefix &sipStrings_libqt_gui_cpp_sip[1472]
#define sipNameNr_filter 1479
#define sipName_filter &sipStrings_libqt_gui_cpp_sip[1479]
#define sipNameNr_option 1486
#define sipName_option &sipStrings_libqt_gui_cpp_sip[1486]
#define sipNameNr_locale 1493
#define sipName_locale &sipStrings_libqt_gui_cpp_sip[1493]
#define sipNameNr_format 762
#define sipName_format &sipStrings_libqt_gui_cpp_sip[762]
#define sipNameNr_column 1500
#define sipName_column &sipStrings_libqt_gui_cpp_sip[1500]
#define sipNameNr_object 1507
#define sipName_object &sipStrings_libqt_gui_cpp_sip[1507]
#define sipNameNr_parent 1514
#define sipName_parent &sipStrings_libqt_gui_cpp_sip[1514]
#define sipNameNr_brush 1521
#define sipName_brush &sipStrings_libqt_gui_cpp_sip[1521]
#define sipNameNr_types 1527
#define sipName_types &sipStrings_libqt_gui_cpp_sip[1527]
#define sipNameNr_order 1533
#define sipName_order &sipStrings_libqt_gui_cpp_sip[1533]
#define sipNameNr_roles 1539
#define sipName_roles &sipStrings_libqt_gui_cpp_sip[1539]
#define sipNameNr_flags 1545
#define sipName_flags &sipStrings_libqt_gui_cpp_sip[1545]
#define sipNameNr_event 1551
#define sipName_event &sipStrings_libqt_gui_cpp_sip[1551]
#define sipNameNr_msecs 1557
#define sipName_msecs &sipStrings_libqt_gui_cpp_sip[1557]
#define sipNameNr_state 1563
#define sipName_state &sipStrings_libqt_gui_cpp_sip[1563]
#define sipNameNr_load 1446
#define sipName_load &sipStrings_libqt_gui_cpp_sip[1446]
#define sipNameNr_argv 1569
#define sipName_argv &sipStrings_libqt_gui_cpp_sip[1569]
#define sipNameNr_mode 1574
#define sipName_mode &sipStrings_libqt_gui_cpp_sip[1574]
#define sipNameNr_name 1579
#define sipName_name &sipStrings_libqt_gui_cpp_sip[1579]
#define sipNameNr_base 1584
#define sipName_base &sipStrings_libqt_gui_cpp_sip[1584]
#define sipNameNr_fill 1589
#define sipName_fill &sipStrings_libqt_gui_cpp_sip[1589]
#define sipNameNr_from 1594
#define sipName_from &sipStrings_libqt_gui_cpp_sip[1594]
#define sipNameNr_sort 1599
#define sipName_sort &sipStrings_libqt_gui_cpp_sip[1599]
#define sipNameNr_pen 1604
#define sipName_pen &sipStrings_libqt_gui_cpp_sip[1604]
#define sipNameNr_pos 1608
#define sipName_pos &sipStrings_libqt_gui_cpp_sip[1608]
#define sipNameNr_sw 1612
#define sipName_sw &sipStrings_libqt_gui_cpp_sip[1612]
#define sipNameNr_sh 1524
#define sipName_sh &sipStrings_libqt_gui_cpp_sip[1524]
#define sipNameNr_sy 1615
#define sipName_sy &sipStrings_libqt_gui_cpp_sip[1615]
#define sipNameNr_sx 1618
#define sipName_sx &sipStrings_libqt_gui_cpp_sip[1618]
#define sipNameNr_at 766
#define sipName_at &sipStrings_libqt_gui_cpp_sip[766]

#define sipMalloc                   sipAPI_libqt_gui_cpp_sip->api_malloc
#define sipFree                     sipAPI_libqt_gui_cpp_sip->api_free
#define sipBuildResult              sipAPI_libqt_gui_cpp_sip->api_build_result
#define sipCallMethod               sipAPI_libqt_gui_cpp_sip->api_call_method
#define sipCallProcedureMethod      sipAPI_libqt_gui_cpp_sip->api_call_procedure_method
#define sipCallErrorHandler         sipAPI_libqt_gui_cpp_sip->api_call_error_handler
#define sipParseResultEx            sipAPI_libqt_gui_cpp_sip->api_parse_result_ex
#define sipParseResult              sipAPI_libqt_gui_cpp_sip->api_parse_result
#define sipParseArgs                sipAPI_libqt_gui_cpp_sip->api_parse_args
#define sipParseKwdArgs             sipAPI_libqt_gui_cpp_sip->api_parse_kwd_args
#define sipParsePair                sipAPI_libqt_gui_cpp_sip->api_parse_pair
#define sipInstanceDestroyed        sipAPI_libqt_gui_cpp_sip->api_instance_destroyed
#define sipConvertFromSequenceIndex sipAPI_libqt_gui_cpp_sip->api_convert_from_sequence_index
#define sipConvertFromVoidPtr       sipAPI_libqt_gui_cpp_sip->api_convert_from_void_ptr
#define sipConvertToVoidPtr         sipAPI_libqt_gui_cpp_sip->api_convert_to_void_ptr
#define sipAddException             sipAPI_libqt_gui_cpp_sip->api_add_exception
#define sipNoFunction               sipAPI_libqt_gui_cpp_sip->api_no_function
#define sipNoMethod                 sipAPI_libqt_gui_cpp_sip->api_no_method
#define sipAbstractMethod           sipAPI_libqt_gui_cpp_sip->api_abstract_method
#define sipBadClass                 sipAPI_libqt_gui_cpp_sip->api_bad_class
#define sipBadCatcherResult         sipAPI_libqt_gui_cpp_sip->api_bad_catcher_result
#define sipBadCallableArg           sipAPI_libqt_gui_cpp_sip->api_bad_callable_arg
#define sipBadOperatorArg           sipAPI_libqt_gui_cpp_sip->api_bad_operator_arg
#define sipTrace                    sipAPI_libqt_gui_cpp_sip->api_trace
#define sipTransferBack             sipAPI_libqt_gui_cpp_sip->api_transfer_back
#define sipTransferTo               sipAPI_libqt_gui_cpp_sip->api_transfer_to
#define sipTransferBreak            sipAPI_libqt_gui_cpp_sip->api_transfer_break
#define sipSimpleWrapper_Type       sipAPI_libqt_gui_cpp_sip->api_simplewrapper_type
#define sipWrapper_Type             sipAPI_libqt_gui_cpp_sip->api_wrapper_type
#define sipWrapperType_Type         sipAPI_libqt_gui_cpp_sip->api_wrappertype_type
#define sipVoidPtr_Type             sipAPI_libqt_gui_cpp_sip->api_voidptr_type
#define sipGetPyObject              sipAPI_libqt_gui_cpp_sip->api_get_pyobject
#define sipGetAddress               sipAPI_libqt_gui_cpp_sip->api_get_address
#define sipGetMixinAddress          sipAPI_libqt_gui_cpp_sip->api_get_mixin_address
#define sipGetCppPtr                sipAPI_libqt_gui_cpp_sip->api_get_cpp_ptr
#define sipGetComplexCppPtr         sipAPI_libqt_gui_cpp_sip->api_get_complex_cpp_ptr
#define sipIsPyMethod               sipAPI_libqt_gui_cpp_sip->api_is_py_method
#define sipCallHook                 sipAPI_libqt_gui_cpp_sip->api_call_hook
#define sipEndThread                sipAPI_libqt_gui_cpp_sip->api_end_thread
#define sipConnectRx                sipAPI_libqt_gui_cpp_sip->api_connect_rx
#define sipDisconnectRx             sipAPI_libqt_gui_cpp_sip->api_disconnect_rx
#define sipRaiseUnknownException    sipAPI_libqt_gui_cpp_sip->api_raise_unknown_exception
#define sipRaiseTypeException       sipAPI_libqt_gui_cpp_sip->api_raise_type_exception
#define sipBadLengthForSlice        sipAPI_libqt_gui_cpp_sip->api_bad_length_for_slice
#define sipAddTypeInstance          sipAPI_libqt_gui_cpp_sip->api_add_type_instance
#define sipFreeSipslot              sipAPI_libqt_gui_cpp_sip->api_free_sipslot
#define sipSameSlot                 sipAPI_libqt_gui_cpp_sip->api_same_slot
#define sipPySlotExtend             sipAPI_libqt_gui_cpp_sip->api_pyslot_extend
#define sipConvertRx                sipAPI_libqt_gui_cpp_sip->api_convert_rx
#define sipAddDelayedDtor           sipAPI_libqt_gui_cpp_sip->api_add_delayed_dtor
#define sipCanConvertToType         sipAPI_libqt_gui_cpp_sip->api_can_convert_to_type
#define sipConvertToType            sipAPI_libqt_gui_cpp_sip->api_convert_to_type
#define sipForceConvertToType       sipAPI_libqt_gui_cpp_sip->api_force_convert_to_type
#define sipCanConvertToEnum         sipAPI_libqt_gui_cpp_sip->api_can_convert_to_enum
#define sipConvertToEnum            sipAPI_libqt_gui_cpp_sip->api_convert_to_enum
#define sipConvertToBool            sipAPI_libqt_gui_cpp_sip->api_convert_to_bool
#define sipReleaseType              sipAPI_libqt_gui_cpp_sip->api_release_type
#define sipConvertFromType          sipAPI_libqt_gui_cpp_sip->api_convert_from_type
#define sipConvertFromNewType       sipAPI_libqt_gui_cpp_sip->api_convert_from_new_type
#define sipConvertFromNewPyType     sipAPI_libqt_gui_cpp_sip->api_convert_from_new_pytype
#define sipConvertFromEnum          sipAPI_libqt_gui_cpp_sip->api_convert_from_enum
#define sipGetState                 sipAPI_libqt_gui_cpp_sip->api_get_state
#define sipExportSymbol             sipAPI_libqt_gui_cpp_sip->api_export_symbol
#define sipImportSymbol             sipAPI_libqt_gui_cpp_sip->api_import_symbol
#define sipFindType                 sipAPI_libqt_gui_cpp_sip->api_find_type
#define sipFindNamedEnum            sipAPI_libqt_gui_cpp_sip->api_find_named_enum
#define sipBytes_AsChar             sipAPI_libqt_gui_cpp_sip->api_bytes_as_char
#define sipBytes_AsString           sipAPI_libqt_gui_cpp_sip->api_bytes_as_string
#define sipString_AsASCIIChar       sipAPI_libqt_gui_cpp_sip->api_string_as_ascii_char
#define sipString_AsASCIIString     sipAPI_libqt_gui_cpp_sip->api_string_as_ascii_string
#define sipString_AsLatin1Char      sipAPI_libqt_gui_cpp_sip->api_string_as_latin1_char
#define sipString_AsLatin1String    sipAPI_libqt_gui_cpp_sip->api_string_as_latin1_string
#define sipString_AsUTF8Char        sipAPI_libqt_gui_cpp_sip->api_string_as_utf8_char
#define sipString_AsUTF8String      sipAPI_libqt_gui_cpp_sip->api_string_as_utf8_string
#define sipUnicode_AsWChar          sipAPI_libqt_gui_cpp_sip->api_unicode_as_wchar
#define sipUnicode_AsWString        sipAPI_libqt_gui_cpp_sip->api_unicode_as_wstring
#define sipConvertFromConstVoidPtr  sipAPI_libqt_gui_cpp_sip->api_convert_from_const_void_ptr
#define sipConvertFromVoidPtrAndSize    sipAPI_libqt_gui_cpp_sip->api_convert_from_void_ptr_and_size
#define sipConvertFromConstVoidPtrAndSize   sipAPI_libqt_gui_cpp_sip->api_convert_from_const_void_ptr_and_size
#define sipInvokeSlot               sipAPI_libqt_gui_cpp_sip->api_invoke_slot
#define sipInvokeSlotEx             sipAPI_libqt_gui_cpp_sip->api_invoke_slot_ex
#define sipSaveSlot                 sipAPI_libqt_gui_cpp_sip->api_save_slot
#define sipClearAnySlotReference    sipAPI_libqt_gui_cpp_sip->api_clear_any_slot_reference
#define sipVisitSlot                sipAPI_libqt_gui_cpp_sip->api_visit_slot
#define sipWrappedTypeName(wt)      ((wt)->wt_td->td_cname)
#define sipDeprecated               sipAPI_libqt_gui_cpp_sip->api_deprecated
#define sipGetReference             sipAPI_libqt_gui_cpp_sip->api_get_reference
#define sipKeepReference            sipAPI_libqt_gui_cpp_sip->api_keep_reference
#define sipRegisterProxyResolver    sipAPI_libqt_gui_cpp_sip->api_register_proxy_resolver
#define sipRegisterPyType           sipAPI_libqt_gui_cpp_sip->api_register_py_type
#define sipTypeFromPyTypeObject     sipAPI_libqt_gui_cpp_sip->api_type_from_py_type_object
#define sipTypeScope                sipAPI_libqt_gui_cpp_sip->api_type_scope
#define sipResolveTypedef           sipAPI_libqt_gui_cpp_sip->api_resolve_typedef
#define sipRegisterAttributeGetter  sipAPI_libqt_gui_cpp_sip->api_register_attribute_getter
#define sipIsAPIEnabled             sipAPI_libqt_gui_cpp_sip->api_is_api_enabled
#define sipSetDestroyOnExit         sipAPI_libqt_gui_cpp_sip->api_set_destroy_on_exit
#define sipEnableAutoconversion     sipAPI_libqt_gui_cpp_sip->api_enable_autoconversion
#define sipEnableOverflowChecking   sipAPI_libqt_gui_cpp_sip->api_enable_overflow_checking
#define sipInitMixin                sipAPI_libqt_gui_cpp_sip->api_init_mixin
#define sipExportModule             sipAPI_libqt_gui_cpp_sip->api_export_module
#define sipInitModule               sipAPI_libqt_gui_cpp_sip->api_init_module
#define sipGetInterpreter           sipAPI_libqt_gui_cpp_sip->api_get_interpreter
#define sipSetNewUserTypeHandler    sipAPI_libqt_gui_cpp_sip->api_set_new_user_type_handler
#define sipSetTypeUserData          sipAPI_libqt_gui_cpp_sip->api_set_type_user_data
#define sipGetTypeUserData          sipAPI_libqt_gui_cpp_sip->api_get_type_user_data
#define sipPyTypeDict               sipAPI_libqt_gui_cpp_sip->api_py_type_dict
#define sipPyTypeName               sipAPI_libqt_gui_cpp_sip->api_py_type_name
#define sipGetCFunction             sipAPI_libqt_gui_cpp_sip->api_get_c_function
#define sipGetMethod                sipAPI_libqt_gui_cpp_sip->api_get_method
#define sipFromMethod               sipAPI_libqt_gui_cpp_sip->api_from_method
#define sipGetDate                  sipAPI_libqt_gui_cpp_sip->api_get_date
#define sipFromDate                 sipAPI_libqt_gui_cpp_sip->api_from_date
#define sipGetDateTime              sipAPI_libqt_gui_cpp_sip->api_get_datetime
#define sipFromDateTime             sipAPI_libqt_gui_cpp_sip->api_from_datetime
#define sipGetTime                  sipAPI_libqt_gui_cpp_sip->api_get_time
#define sipFromTime                 sipAPI_libqt_gui_cpp_sip->api_from_time
#define sipIsUserType               sipAPI_libqt_gui_cpp_sip->api_is_user_type
#define sipGetFrame                 sipAPI_libqt_gui_cpp_sip->api_get_frame
#define sipCheckPluginForType       sipAPI_libqt_gui_cpp_sip->api_check_plugin_for_type
#define sipUnicodeNew               sipAPI_libqt_gui_cpp_sip->api_unicode_new
#define sipUnicodeWrite             sipAPI_libqt_gui_cpp_sip->api_unicode_write
#define sipUnicodeData              sipAPI_libqt_gui_cpp_sip->api_unicode_data
#define sipGetBufferInfo            sipAPI_libqt_gui_cpp_sip->api_get_buffer_info
#define sipReleaseBufferInfo        sipAPI_libqt_gui_cpp_sip->api_release_buffer_info
#define sipIsOwnedByPython          sipAPI_libqt_gui_cpp_sip->api_is_owned_by_python
#define sipIsDerivedClass           sipAPI_libqt_gui_cpp_sip->api_is_derived_class
#define sipGetUserObject            sipAPI_libqt_gui_cpp_sip->api_get_user_object
#define sipSetUserObject            sipAPI_libqt_gui_cpp_sip->api_set_user_object
#define sipRegisterEventHandler     sipAPI_libqt_gui_cpp_sip->api_register_event_handler
#define sipLong_AsChar              sipAPI_libqt_gui_cpp_sip->api_long_as_char
#define sipLong_AsSignedChar        sipAPI_libqt_gui_cpp_sip->api_long_as_signed_char
#define sipLong_AsUnsignedChar      sipAPI_libqt_gui_cpp_sip->api_long_as_unsigned_char
#define sipLong_AsShort             sipAPI_libqt_gui_cpp_sip->api_long_as_short
#define sipLong_AsUnsignedShort     sipAPI_libqt_gui_cpp_sip->api_long_as_unsigned_short
#define sipLong_AsInt               sipAPI_libqt_gui_cpp_sip->api_long_as_int
#define sipLong_AsUnsignedInt       sipAPI_libqt_gui_cpp_sip->api_long_as_unsigned_int
#define sipLong_AsLong              sipAPI_libqt_gui_cpp_sip->api_long_as_long
#define sipLong_AsUnsignedLong      sipAPI_libqt_gui_cpp_sip->api_long_as_unsigned_long
#define sipLong_AsLongLong          sipAPI_libqt_gui_cpp_sip->api_long_as_long_long
#define sipLong_AsUnsignedLongLong  sipAPI_libqt_gui_cpp_sip->api_long_as_unsigned_long_long

/* These are deprecated. */
#define sipMapStringToClass         sipAPI_libqt_gui_cpp_sip->api_map_string_to_class
#define sipMapIntToClass            sipAPI_libqt_gui_cpp_sip->api_map_int_to_class
#define sipFindClass                sipAPI_libqt_gui_cpp_sip->api_find_class
#define sipFindMappedType           sipAPI_libqt_gui_cpp_sip->api_find_mapped_type
#define sipConvertToArray           sipAPI_libqt_gui_cpp_sip->api_convert_to_array
#define sipConvertToTypedArray      sipAPI_libqt_gui_cpp_sip->api_convert_to_typed_array
#define sipEnableGC                 sipAPI_libqt_gui_cpp_sip->api_enable_gc
#define sipPrintObject              sipAPI_libqt_gui_cpp_sip->api_print_object
#define sipWrapper_Check(w)         PyObject_TypeCheck((w), sipAPI_libqt_gui_cpp_sip->api_wrapper_type)
#define sipGetWrapper(p, wt)        sipGetPyObject((p), (wt)->wt_td)
#define sipReleaseInstance(p, wt, s)    sipReleaseType((p), (wt)->wt_td, (s))
#define sipReleaseMappedType        sipReleaseType
#define sipCanConvertToInstance(o, wt, f)   sipCanConvertToType((o), (wt)->wt_td, (f))
#define sipCanConvertToMappedType   sipCanConvertToType
#define sipConvertToInstance(o, wt, t, f, s, e)     sipConvertToType((o), (wt)->wt_td, (t), (f), (s), (e))
#define sipConvertToMappedType      sipConvertToType
#define sipForceConvertToInstance(o, wt, t, f, s, e)    sipForceConvertToType((o), (wt)->wt_td, (t), (f), (s), (e))
#define sipForceConvertToMappedType sipForceConvertToType
#define sipConvertFromInstance(p, wt, t)    sipConvertFromType((p), (wt)->wt_td, (t))
#define sipConvertFromMappedType    sipConvertFromType
#define sipConvertFromNamedEnum(v, pt)  sipConvertFromEnum((v), ((sipEnumTypeObject *)(pt))->type)
#define sipConvertFromNewInstance(p, wt, t) sipConvertFromNewType((p), (wt)->wt_td, (t))

/* The strings used by this module. */
extern const char sipStrings_libqt_gui_cpp_sip[];

#define sipType_qt_gui_cpp sipExportedTypes_libqt_gui_cpp_sip[3]
#define sipClass_qt_gui_cpp sipExportedTypes_libqt_gui_cpp_sip[3]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_libqt_gui_cpp_sip_qt_gui_cpp;

#define sipType_qt_gui_cpp_PluginProvider sipExportedTypes_libqt_gui_cpp_sip[10]
#define sipClass_qt_gui_cpp_PluginProvider sipExportedTypes_libqt_gui_cpp_sip[10]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_libqt_gui_cpp_sip_qt_gui_cpp_PluginProvider;

#define sipType_qt_gui_cpp_CompositePluginProvider sipExportedTypes_libqt_gui_cpp_sip[4]
#define sipClass_qt_gui_cpp_CompositePluginProvider sipExportedTypes_libqt_gui_cpp_sip[4]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_libqt_gui_cpp_sip_qt_gui_cpp_CompositePluginProvider;

#define sipType_qt_gui_cpp_GenericProxy sipExportedTypes_libqt_gui_cpp_sip[5]
#define sipClass_qt_gui_cpp_GenericProxy sipExportedTypes_libqt_gui_cpp_sip[5]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_libqt_gui_cpp_sip_qt_gui_cpp_GenericProxy;

#define sipType_qt_gui_cpp_Plugin sipExportedTypes_libqt_gui_cpp_sip[6]
#define sipClass_qt_gui_cpp_Plugin sipExportedTypes_libqt_gui_cpp_sip[6]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_libqt_gui_cpp_sip_qt_gui_cpp_Plugin;

#define sipType_qt_gui_cpp_PluginBridge sipExportedTypes_libqt_gui_cpp_sip[7]
#define sipClass_qt_gui_cpp_PluginBridge sipExportedTypes_libqt_gui_cpp_sip[7]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_libqt_gui_cpp_sip_qt_gui_cpp_PluginBridge;

#define sipType_qt_gui_cpp_PluginContext sipExportedTypes_libqt_gui_cpp_sip[8]
#define sipClass_qt_gui_cpp_PluginContext sipExportedTypes_libqt_gui_cpp_sip[8]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_libqt_gui_cpp_sip_qt_gui_cpp_PluginContext;

#define sipType_qt_gui_cpp_PluginDescriptor sipExportedTypes_libqt_gui_cpp_sip[9]
#define sipClass_qt_gui_cpp_PluginDescriptor sipExportedTypes_libqt_gui_cpp_sip[9]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_libqt_gui_cpp_sip_qt_gui_cpp_PluginDescriptor;

#define sipType_qt_gui_cpp_RecursivePluginProvider sipExportedTypes_libqt_gui_cpp_sip[11]
#define sipClass_qt_gui_cpp_RecursivePluginProvider sipExportedTypes_libqt_gui_cpp_sip[11]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_libqt_gui_cpp_sip_qt_gui_cpp_RecursivePluginProvider;

#define sipType_qt_gui_cpp_RosPluginlibPluginProvider_ForPluginProviders sipExportedTypes_libqt_gui_cpp_sip[12]
#define sipClass_qt_gui_cpp_RosPluginlibPluginProvider_ForPluginProviders sipExportedTypes_libqt_gui_cpp_sip[12]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_libqt_gui_cpp_sip_qt_gui_cpp_RosPluginlibPluginProvider_ForPluginProviders;

#define sipType_qt_gui_cpp_RosPluginlibPluginProvider_ForPlugins sipExportedTypes_libqt_gui_cpp_sip[13]
#define sipClass_qt_gui_cpp_RosPluginlibPluginProvider_ForPlugins sipExportedTypes_libqt_gui_cpp_sip[13]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_libqt_gui_cpp_sip_qt_gui_cpp_RosPluginlibPluginProvider_ForPlugins;

#define sipType_qt_gui_cpp_Settings sipExportedTypes_libqt_gui_cpp_sip[14]
#define sipClass_qt_gui_cpp_Settings sipExportedTypes_libqt_gui_cpp_sip[14]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_libqt_gui_cpp_sip_qt_gui_cpp_Settings;

#define sipType_QList_0101qt_gui_cpp_PluginProvider sipExportedTypes_libqt_gui_cpp_sip[1]

extern sipMappedTypeDef sipTypeDef_libqt_gui_cpp_sip_QList_0101qt_gui_cpp_PluginProvider;

#define sipType_QList_0101qt_gui_cpp_PluginDescriptor sipExportedTypes_libqt_gui_cpp_sip[0]

extern sipMappedTypeDef sipTypeDef_libqt_gui_cpp_sip_QList_0101qt_gui_cpp_PluginDescriptor;

#define sipType_QMap_0100QString_0100QString sipExportedTypes_libqt_gui_cpp_sip[2]

extern sipMappedTypeDef sipTypeDef_libqt_gui_cpp_sip_QMap_0100QString_0100QString;

/* The SIP API, this module's API and the APIs of any imported modules. */
extern const sipAPIDef *sipAPI_libqt_gui_cpp_sip;
extern sipExportedModuleDef sipModuleAPI_libqt_gui_cpp_sip;
extern sipTypeDef *sipExportedTypes_libqt_gui_cpp_sip[];

#define sipType_QObject sipImportedTypes_libqt_gui_cpp_sip_QtCore[3].it_td
#define sipClass_QObject sipImportedTypes_libqt_gui_cpp_sip_QtCore[3].it_td->u.td_wrapper_type

#define sipType_QEvent sipImportedTypes_libqt_gui_cpp_sip_QtCore[1].it_td
#define sipClass_QEvent sipImportedTypes_libqt_gui_cpp_sip_QtCore[1].it_td->u.td_wrapper_type

#define sipType_QTimerEvent sipImportedTypes_libqt_gui_cpp_sip_QtCore[6].it_td
#define sipClass_QTimerEvent sipImportedTypes_libqt_gui_cpp_sip_QtCore[6].it_td->u.td_wrapper_type

#define sipType_QChildEvent sipImportedTypes_libqt_gui_cpp_sip_QtCore[0].it_td
#define sipClass_QChildEvent sipImportedTypes_libqt_gui_cpp_sip_QtCore[0].it_td->u.td_wrapper_type

#define sipType_QMetaMethod sipImportedTypes_libqt_gui_cpp_sip_QtCore[2].it_td
#define sipClass_QMetaMethod sipImportedTypes_libqt_gui_cpp_sip_QtCore[2].it_td->u.td_wrapper_type

#define sipType_QStringList sipImportedTypes_libqt_gui_cpp_sip_QtCore[5].it_td

#define sipType_QString sipImportedTypes_libqt_gui_cpp_sip_QtCore[4].it_td
extern sipImportedTypeDef sipImportedTypes_libqt_gui_cpp_sip_QtCore[];
extern sipImportedVirtErrorHandlerDef sipImportedVirtErrorHandlers_libqt_gui_cpp_sip_QtCore[];

#define sipType_QWidget sipImportedTypes_libqt_gui_cpp_sip_QtWidgets[0].it_td
#define sipClass_QWidget sipImportedTypes_libqt_gui_cpp_sip_QtWidgets[0].it_td->u.td_wrapper_type
extern sipImportedTypeDef sipImportedTypes_libqt_gui_cpp_sip_QtWidgets[];

typedef const QMetaObject *(*sip_qt_metaobject_func)(sipSimpleWrapper *,sipTypeDef *);
extern sip_qt_metaobject_func sip_libqt_gui_cpp_sip_qt_metaobject;

typedef int (*sip_qt_metacall_func)(sipSimpleWrapper *,sipTypeDef *,QMetaObject::Call,int,void **);
extern sip_qt_metacall_func sip_libqt_gui_cpp_sip_qt_metacall;

typedef bool (*sip_qt_metacast_func)(sipSimpleWrapper *, const sipTypeDef *, const char *, void **);
extern sip_qt_metacast_func sip_libqt_gui_cpp_sip_qt_metacast;

#endif
