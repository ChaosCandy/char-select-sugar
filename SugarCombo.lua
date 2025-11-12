-- Sugar's Test Code for what is gonna be a combo meter! :D

SugarCombo = {}
SugarComboFlags = {}


SugarCombo.Meter = 10
SugarCombo.Count = 0
SugarCombo.Fill = 3


-- A list of interactions that will refill Sugar's combo meter by 3 points.
SugarCombo.FillSmallList = {
    [1] = INTERACT_COIN,
    [2] = INTERACT_BREAKABLE,
    [3] = INTERACT_WARP,
    [4] = INTERACT_WATER_RING
}

-- The combo meter's code to go down over time.
local function combotimer()
    SugarCombo.Meter = SugarCombo.Meter - 0.002
end


-- A debug display for the combo meter itself, not the combo number. This is pretty much the timer that decides when a current combo should end.
local function combometerdebugdisplay()
    djui_hud_set_resolution(RESOLUTION_N64)
    djui_hud_set_font(FONT_HUD)

    djui_hud_print_text("Combo Timer: " .. tostring(math.floor(SugarCombo.Meter)), 50, 50, 1)
end

-- A debug display for the combo number you have.
local function combodebugdisplay()
    djui_hud_set_resolution(RESOLUTION_N64)
    djui_hud_set_font(FONT_HUD)

    djui_hud_print_text("Combo Count: " .. tostring(math.floor(SugarCombo.Count)), 50, 80, 1)
end

-- This code adds 3 points to the combo meter using "SugarCombo.FillSmallList".
local function combosmallrefill()
    -- Check for interact types and just fill in the blanks here--
end


---------------------------------------------------- Hooks ----------------------------------------------------

local function on_hud_render()
    local m = gMarioStates[0]
    if _G.charSelect.character_get_current_number(m.playerIndex) == CT_SUGAR and not obj_get_first_with_behavior_id(id_bhvActSelector) then
        combometerdebugdisplay()
        combodebugdisplay()
    end
end

local function mario_update()
    local m = gMarioStates[0]
    if _G.charSelect.character_get_current_number(m.playerIndex) == CT_SUGAR and not obj_get_first_with_behavior_id(id_bhvActSelector) then
        combotimer()
    end
end

local function on_interact()
    local m = gMarioStates[0]
    if _G.charSelect.character_get_current_number(m.playerIndex) == CT_SUGAR and not obj_get_first_with_behavior_id(id_bhvActSelector) then
        combosmallrefill()
    end
end



hook_event(HOOK_ON_HUD_RENDER, on_hud_render)
hook_event(HOOK_MARIO_UPDATE, mario_update)
hook_event(HOOK_ON_INTERACT, on_interact)
