#include "esp_log.h"
#include "bsp/esp-lcd-3-5-bsp.h"
#include "lvgl.h"
#include "ui/ui.h"


#define TAG "MAIN"
#define APP_DISP_DEFAULT_BRIGHTNESS 50

void app_lvgl_display(void)
{
    bsp_display_lock(0);

    ui_init();

    bsp_display_unlock();
}

void app_main(void)
{
    /* Initialize I2C */
    bsp_i2c_init();

    /* Initialize display and LVGL */
    lv_disp_t *disp = bsp_display_start(true);
 
    /* Set default display brightness */
    bsp_display_brightness_set(APP_DISP_DEFAULT_BRIGHTNESS);

    /* Add and show objects on display */
    app_lvgl_display();

    ESP_LOGI(TAG, "Example initialization done.");
}