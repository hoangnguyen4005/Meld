//
//  GlobalConfig.h
//  MeldNumber
//
//  Created by Harry Nguyen on 15/11/22.
//

#ifndef GlobalConfig_h
#define GlobalConfig_h

#define GAME_TITLE "MELD NUMBER"
#define WIDTH_HEIGHT_CELL 103
#define TOTAL_GAME_BOARD_CELL 5
#define TOTAL_SUPPLY_CELL 2
#define MIN_SAME_NUMBER 3

#define TIME_BUTTON_RUN_ROTATE 0.26
#define TIME_NUMBER_MOVE_ANIMATION 0.168
#define DELAY_BETWEEN_TWO_ANIMATION 0.136

#define IS_EMPTY_CELL -1
#define OUT_OF_GAME_BOARD_MATRIX Vec2(-1, -1)

/// Configure UI
#define DISTANCE_80_PIXEL 80
#define DISTANCE_64_PIXEL 64
#define DISTANCE_48_PIXEL 48
#define DISTANCE_32_PIXEL 32
#define DISTANCE_16_PIXEL 16

/// Resource
#define FONT_NAME_NUMBER_LABEL "BRLNSDB.TTF"
#define FONT_NAME_TILE_LABEL "ManilaSansBld.otf"
#define FONT_SIZE_NUMBER_LABEL 96
#define FONT_48_SIZE 48
#define FONT_36_SIZE 36
#define FONT_32_SIZE 32
#define FONT_28_SIZE 28
#define FONT_24_SIZE 24

#define HIGHEST_SCORE_KEY "HIGHEST_SCORE_KEY"
#define SKIP_BUTTON_IMAGE_NAME "skip_button.png"
#define RESET_BUTTON_IMAGE_NAME "reset_button.png"
#define ROTATE_BUTTON_IMAGE_NAME "rotate_button.png"
#define REPLAY_BUTTON_IMAGE_NAME "replay_button.png"

/// Guide
#define HOW_TO_PLAY_TITLE "Drag the numbers onto the board"
#define HOW_TO_PLAY_DESCRIPTION_LINE_1 "Place at least 3 same numbers adjacent"
#define HOW_TO_PLAY_DESCRIPTION_LINE_2 "to merge them."
#define HOW_TO_PLAY_ACTION_TEXT "Tap anywhere to continue"

#define AD_CLICK_RESET_KEY "AD_CLICK_RESET_KEY"
#define AD_CLICK_RESET_FREQUENCY 18

#define AD_BANNER_ID "ca-app-pub-2381211844174227/9774762752"
#define AD_INTERSTITIAL_ID "ca-app-pub-2381211844174227/8238567222"

/// If IS_DEBUG_MODE == true able to see debug layer color
/// If IS_DEBUG_MODE == false not able to see debug layer color
static bool IS_DEBUG_MODE = false;

enum {
  SINGLE_NUMBER = 0,
  PAIR_NUMBER = 1,
} SUPPLY_TYPE;


enum {
  LEFT = 0,
  RIGHT = 1,
  TOP = 2,
  BOTTOM = 3,
} MATRIX_DIRECTION;

#endif /* GlobalConfig_h */
