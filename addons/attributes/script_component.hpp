#define COMPONENT attributes
#define COMPONENT_BEAUTIFIED Attributes
#include "\x\zen\addons\main\script_mod.hpp"

#define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_ATTRIBUTES
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_ATTRIBUTES
    #define DEBUG_SETTINGS DEBUG_SETTINGS_ATTRIBUTES
#endif

#include "\x\zen\addons\main\script_macros.hpp"

#include "\a3\ui_f\hpp\defineCommonGrids.inc"
#include "\a3\ui_f_curator\ui\defineResinclDesign.inc"

#define IDC_ATTRIBUTENAME 85000
#define IDC_ATTRIBUTENAME_EDIT 85001

#define IDC_ATTRIBUTESKILL 85100
#define IDC_ATTRIBUTESKILL_SLIDER 85101
#define IDC_ATTRIBUTESKILL_EDIT 85102

#define IDC_ATTRIBUTEDAMAGE 85200
#define IDC_ATTRIBUTEDAMAGE_SLIDER 85201
#define IDC_ATTRIBUTEDAMAGE_EDIT 85202

#define IDC_ATTRIBUTEAMMO 85300
#define IDC_ATTRIBUTEAMMO_SLIDER 85301
#define IDC_ATTRIBUTEAMMO_EDIT 85302

#define IDC_ATTRIBUTERANK 85400
#define IDC_ATTRIBUTERANK_PRIVATE 85401
#define IDC_ATTRIBUTERANK_CORPORAL 85402
#define IDC_ATTRIBUTERANK_SERGEANT 85403
#define IDC_ATTRIBUTERANK_LIEUTENANT 85404
#define IDC_ATTRIBUTERANK_CAPTAIN 85405
#define IDC_ATTRIBUTERANK_MAJOR 85406
#define IDC_ATTRIBUTERANK_COLONEL 85407

#define IDC_ATTRIBUTEUNITPOS 85500
#define IDC_ATTRIBUTEUNITPOS_DOWN 85501
#define IDC_ATTRIBUTEUNITPOS_CROUCH 85502
#define IDC_ATTRIBUTEUNITPOS_UP 85503
#define IDC_ATTRIBUTEUNITPOS_AUTO 85504

#define IDC_ATTRIBUTERESPAWNPOSITION 85600
#define IDC_ATTRIBUTERESPAWNPOSITION_WEST 85601
#define IDC_ATTRIBUTERESPAWNPOSITION_EAST 85602
#define IDC_ATTRIBUTERESPAWNPOSITION_GUER 85603
#define IDC_ATTRIBUTERESPAWNPOSITION_CIV 85604
#define IDC_ATTRIBUTERESPAWNPOSITION_DISABLED 85605

#define IDC_ATTRIBUTEGROUPID 85700
#define IDC_ATTRIBUTEGROUPID_EDIT 85701

#define IDC_ATTRIBUTEFORMATION 85800
#define IDC_ATTRIBUTEFORMATION_WEDGE 85801
#define IDC_ATTRIBUTEFORMATION_VEE 85802
#define IDC_ATTRIBUTEFORMATION_LINE 85803
#define IDC_ATTRIBUTEFORMATION_COLUMN 85804
#define IDC_ATTRIBUTEFORMATION_FILE 85805
#define IDC_ATTRIBUTEFORMATION_STAGCOLUMN 85806
#define IDC_ATTRIBUTEFORMATION_ECHLEFT 85807
#define IDC_ATTRIBUTEFORMATION_ECHRIGHT 85808
#define IDC_ATTRIBUTEFORMATION_DIAMOND 85809
#define IDC_ATTRIBUTEFORMATION_DEFAULT 85810

#define IDC_ATTRIBUTEBEHAVIOUR 85900
#define IDC_ATTRIBUTEBEHAVIOUR_CARELESS 85901
#define IDC_ATTRIBUTEBEHAVIOUR_SAFE 85902
#define IDC_ATTRIBUTEBEHAVIOUR_AWARE 85903
#define IDC_ATTRIBUTEBEHAVIOUR_COMBAT 85904
#define IDC_ATTRIBUTEBEHAVIOUR_STEALTH 85905
#define IDC_ATTRIBUTEBEHAVIOUR_DEFAULT 85906

#define IDC_ATTRIBUTESPEEDMODE 86000
#define IDC_ATTRIBUTESPEEDMODE_LIMITED 86001
#define IDC_ATTRIBUTESPEEDMODE_NORMAL 86002
#define IDC_ATTRIBUTESPEEDMODE_FULL 86003
#define IDC_ATTRIBUTESPEEDMODE_DEFAULT 86004
