// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_btnPressMe;
extern lv_obj_t * ui_sldCount;
extern lv_obj_t * ui_txaNotes;

void Btn2ClickedEvent(lv_event_t * e);





void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif