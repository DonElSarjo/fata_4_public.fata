class DES_mission_dialog
{
	enableSimulation = 1; // 1 (true) to allow world simulation to be running in the background, 0 to freeze it
	enableDisplay = 0; // 1 (true) to allow scene rendering in the background
	idd = -1;
	onLoad = "_this call compile preprocessFileLineNumbers '6RusLoudouts\dialogs.sqf';";
	onUnload = "";
	onChildDestroyed = "";
	class ControlsBackground // Background controls (placed behind Controls)
	{
		class Background
		{
			idc = -1;
			type = CT_STATIC;
			style = ST_LEFT;
			x = 0.0452495 * safezoneW + safezoneX;
			y = 0.499 * safezoneH + safezoneY;
			w = 0.293594 * safezoneW;
			h = 0.505 * safezoneH;
			colorBackground[] = {0,0,0,0.55};
			colorText[] = {0,0,0,0};
			font = GUI_FONT_NORMAL;
			sizeEx = GUI_GRID_CENTER_H;
			text = "";
			shadow = 1;
			moving = 1;
		};
	};
	class Controls
	{
		class RscText
		{
			access = 0;
			idc = -1;
			type = CT_STATIC;
			style = ST_MULTI;
			linespacing = 1;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			text = "";
			shadow = 0;
			font = "PuristaLight";
			SizeEx = 0.02300;
			fixedWidth = 0;
			x = 0;
			y = 0;
			h = 0;
			w = 0;

		};

		class RscPicture
		{
			access = 0;
			idc = -1;
			type = CT_STATIC;
			style = ST_PICTURE;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaLight";
			sizeEx = 0;
			lineSpacing = 0;
			text = "";
			fixedWidth = 0;
			shadow = 0;
			x = 0;
			y = 0;
			w = 0.2;
			h = 0.15;
		};

		class RscButton
		{

		    access = 0;
			idc = -1;
			type = CT_BUTTON;
			text = "";
			colorText[] = {1,1,1,.9};
			colorDisabled[] = {0.4,0.4,0.4,0};
			colorBackground[] = {0.0,0.0,0.0,1};
			colorBackgroundDisabled[] = {0,0.0,0};
			colorBackgroundActive[] = {0.75,0.75,0.75,1};
			colorFocused[] = {0.75,0.75,0.75,.5};
			colorShadow[] = {0.023529,0,0.0313725,1};
			colorBorder[] = {0.023529,0,0.0313725,1};
			soundEnter[] = {"\ca\ui\data\sound\onover",0.09,1};
			soundPush[] = {"\ca\ui\data\sound\new1",0,0};
			soundClick[] = {"\ca\ui\data\sound\onclick",0.07,1};
			soundEscape[] = {"\ca\ui\data\sound\onescape",0.09,1};
			style = 2;
			x = 0;
			y = 0;
			w = 0.0;
			h = 0.0;
			shadow = 2;
			font = "PuristaLight";
			sizeEx = 0.03921;
			offsetX = 0.003;
			offsetY = 0.003;
			offsetPressedX = 0.002;
			offsetPressedY = 0.002;
			borderSize = 0;
		};
		class _CT_BOX : RscText
		{
			x = 0.0617187 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.252656 * safezoneW;
			h = 0.07 * safezoneH;

			colorBackground[] = {0,0,0,0.7};
		};
		class _CT_LISTNBOX_RIGHT: RscButton
		{
			idc = 1000;
			text = "<";
			borderSize = 0;
			colorShadow[] = {0,0,0,0};
			action = "_acc = lnbData [1600,[lnbCurSelRow 1600,0]]; player removePrimaryWeaponItem _acc";

			tooltip = "Remove Attachment"; // Tooltip text
			tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
			tooltipColorText[] = {1,1,1,1}; // Tooltip text color
			tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color
		};
		class _CT_LISTNBOX_LEFT: _CT_LISTNBOX_RIGHT
		{
			idc = 1001;
			text = ">";
			action = "_acc = lnbData [1600,[lnbCurSelRow 1600,0]]; player addPrimaryWeaponItem _acc";

			tooltip = "Add Attachment"; // Tooltip text
			tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
			tooltipColorText[] = {1,1,1,1}; // Tooltip text color
			tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color
		};
		class _CT_LISTNBOX
		{
			access = 0; // Control access (0 - ReadAndWrite, 1 - ReadAndCreate, 2 - ReadOnly, 3 - ReadOnlyVerified)
			idc = 1600; // Control identification (without it, the control won't be displayed)
			type = CT_LISTNBOX; // Type
			style = ST_LEFT + LB_TEXTURES; // Style
			default = 0; // Control selected by default (only one within a display can be used)
			blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.

			x = 0.0617187 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.252656 * safezoneW;
			h = 0.07 * safezoneH;

			colorSelectBackground[] = {1,0.5,0,1}; // Selected item fill color
			colorSelectBackground2[] = {0,0,0,1}; // Selected item fill color (oscillates between this and colorSelectBackground)

			sizeEx = GUI_GRID_CENTER_H; // Text size
			font = GUI_FONT_NORMAL; // Font from CfgFontFamilies
			shadow = 1; // Shadow (0 - none, 1 - directional, color affected by colorShadow, 2 - black outline)
			colorText[] = {1,1,1,1}; // Text and frame color
			colorDisabled[] = {1,1,1,0.5}; // Disabled text color
			colorSelect[] = {1,1,1,1}; // Text selection color
			colorSelect2[] = {1,1,1,1}; // Text selection color (oscillates between this and colorSelect)
			colorShadow[] = {0,0,0,0.8}; // Text shadow color (used only when shadow is 1)

			tooltip = "Scopes"; // Tooltip text
			tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
			tooltipColorText[] = {1,1,1,1}; // Tooltip text color
			tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color

			columns[] = {0.1,0.4}; // Horizontal coordinates of columns (relative to list width, in range from 0 to 1)

			drawSideArrows = 1; // 1 to draw buttons linked by idcLeft and idcRight on both sides of selected line. They are resized to line height
			idcLeft = 1000; // Left button IDC
			idcRight = 1001; // Right button IDC

			period = 1; // Oscillation time between colorSelect/colorSelectBackground2 and colorSelect2/colorSelectBackground when selected

			rowHeight = GUI_GRID_CENTER_H; // Row height
			maxHistoryDelay = 1; // Time since last keyboard type search to reset it

			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1}; // Sound played when an item is selected

			// Scrollbar configuration (applied only when LB_TEXTURES style is used)
			class ListScrollBar
			{
				width = 0; // Unknown?
				height = 0; // Unknown?
				scrollSpeed = 0.01; // Unknown?

				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

				color[] = {1,1,1,1}; // Scrollbar color
			};

			onCanDestroy = "";
			onDestroy = "";
			onSetFocus = "";
			onKillFocus = "";
			onKeyDown = "";
			onKeyUp = "";
			onMouseButtonDown = "";
			onMouseButtonUp = "";
			onMouseButtonClick = "";
			onMouseButtonDblClick = "";
			onMouseZChanged = "";
			onMouseMoving = "";
			onMouseHolding = "";

			onLBSelChanged = "";

			onLBDblClick = "";
		};
		class _CT_BOX1 : RscText
		{
			x = 0.0617187 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.252656 * safezoneW;
			h = 0.07 * safezoneH;

			colorBackground[] = {0,0,0,0.7};
		};
		class _CT_LISTNBOX1_RIGHT: RscButton
		{
			idc = 2000;
			text = "<";
			borderSize = 0;
			colorShadow[] = {0,0,0,0};
			action = "_acc = lnbData [1700,[lnbCurSelRow 1700,0]]; player removePrimaryWeaponItem _acc";
		};
		class _CT_LISTNBOX1_LEFT: _CT_LISTNBOX1_RIGHT
		{
			idc = 2001;
			text = ">";
			action = "_acc = lnbData [1700,[lnbCurSelRow 1700,0]]; player addPrimaryWeaponItem _acc";
		};
		class _CT_LISTNBOX1 :_CT_LISTNBOX
		{
			idc = 1700;

			drawSideArrows = 1; // 1 to draw buttons linked by idcLeft and idcRight on both sides of selected line. They are resized to line height
			idcLeft = 2000; // Left button IDC
			idcRight = 2001; // Right button IDC

			tooltip = "Muzzles"; // Tooltip text

			x = 0.0617187 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.252656 * safezoneW;
			h = 0.07 * safezoneH;
		};
		class _CT_BOX2 : RscText
		{
			x = 0.0617187 * safezoneW + safezoneX;
			y = 0.874 * safezoneH + safezoneY;
			w = 0.252656 * safezoneW;
			h = 0.07 * safezoneH;

			colorBackground[] = {0,0,0,0.7};
		};
		class _CT_LISTNBOX2_RIGHT: RscButton
		{
			idc = 3000;
			text = "<";
			borderSize = 0;
			colorShadow[] = {0,0,0,0};
			action = "_acc = lnbData [1800,[lnbCurSelRow 1800,0]]; player removePrimaryWeaponItem _acc";
		};
		class _CT_LISTNBOX2_LEFT: _CT_LISTNBOX2_RIGHT
		{
			idc = 3001;
			text = ">";
			action = "_acc = lnbData [1800,[lnbCurSelRow 1800,0]]; player addPrimaryWeaponItem _acc";
		};
		class _CT_LISTNBOX2 : _CT_LISTNBOX
		{
			idc = 1800;

			tooltip = "Rail Attachments"; // Tooltip text

			x = 0.0617187 * safezoneW + safezoneX;
			y = 0.874 * safezoneH + safezoneY;
			w = 0.252656 * safezoneW;
			h = 0.07 * safezoneH;

			drawSideArrows = 1; // 1 to draw buttons linked by idcLeft and idcRight on both sides of selected line. They are resized to line height
			idcLeft = 3000; // Left button IDC
			idcRight = 3001; // Right button IDC
		};
		class des_text_scopes: RscText
		{
			idc = -1;
			text = "Scopes"; //--- ToDo: Localize;
			x = 0.04625 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.283594 * safezoneW;
			h = 0.044 * safezoneH;

			style = ST_CENTER;
			fixedWidth = 0;
			shadow = 1;
			font = GUI_FONT_SYSTEM;
			sizeEx = 0.04;
			colorText[] = {1,1,1,1};
		};
		class des_text_muzzles: RscText
		{
			idc = -1;
			text = "Muzzles"; //--- ToDo: Localize;
			x = 0.04625 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.283594 * safezoneW;
			h = 0.044 * safezoneH;

			style = ST_CENTER;
			fixedWidth = 0;
			shadow = 1;
			font = GUI_FONT_SYSTEM;
			sizeEx = 0.04;
			colorText[] = {1,1,1,1};
		};
		class des_text_railAttachments: RscText
		{
			idc = -1;
			text = "Rail Attachments"; //--- ToDo: Localize;
			x = 0.04625 * safezoneW + safezoneX;
			y = 0.83 * safezoneH + safezoneY;
			w = 0.283594 * safezoneW;
			h = 0.044 * safezoneH;

			style = ST_CENTER;
			fixedWidth = 0;
			shadow = 1;
			font = GUI_FONT_SYSTEM;
			sizeEx = 0.04;
			colorText[] = {1,1,1,1};
		};
		class des_text_header: RscText
		{
			idc = -1;
			text = "Attachment Selector"; //--- ToDo: Localize;
			x = 0.0462505 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.099 * safezoneH;

			style = ST_CENTER;
			fixedWidth = 0;
			shadow = 0;
			font = GUI_FONT_SYSTEM;
			sizeEx = 0.04;
			colorText[] = {1,1,1,1};
		};
		class des_button_apply: RscButton
		{
			idc = -1;
			x = 0.206094 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.04 * safezoneH;

			font = GUI_FONT_SYSTEM;
			colorBackground[] = {0.6,0.0,0.0,0.5};
			action = "closeDialog 0";
		};
		class des_text_apply: RscText
		{
			idc = -1;
			text = "Apply"; //--- ToDo: Localize;
			x = 0.206093 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.04 * safezoneH;

			style = ST_CENTER;
			fixedWidth = 0;
			shadow = 1;
			font = GUI_FONT_SYSTEM;
			sizeEx = 0.045;
			colorText[] = {1,1,1,1};
		};
	};
};
