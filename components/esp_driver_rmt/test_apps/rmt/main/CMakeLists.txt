set(srcs "test_app_main.c"
         "test_rmt_common.c"
         "test_rmt_tx.c"
         "test_rmt_rx.c"
         "test_util_rmt_encoders.c")

if(CONFIG_RMT_ISR_CACHE_SAFE)
    list(APPEND srcs "test_rmt_cache_safe.c")
endif()

if(CONFIG_SOC_LIGHT_SLEEP_SUPPORTED AND CONFIG_PM_ENABLE)
    list(APPEND srcs "test_rmt_sleep.c")
endif()

idf_component_register(SRCS "${srcs}"
                       PRIV_REQUIRES unity esp_driver_rmt esp_driver_gpio esp_timer esp_psram
                       WHOLE_ARCHIVE)
