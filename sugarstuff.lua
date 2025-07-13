-- Comment Test Again!

local function sugarhpvaluegrab()
    sugarhpvalue = gMarioStates[0].health >> 8
end

sugarhudmovevar = -32

-- This is her custom power meter!
local function sugar_hp()
local m = gMarioStates[0]
if m.playerIndex == 0 then
if (m.health >> 8) < 8 or m.waterLevel >= m.pos.y then -- if mario's health (shifted 8 bytes) under 8, or is he underwater
sugarhudmovevar = sugarhudmovevar + (8 - (sugarhudmovevar / 7)) -- health meter move stuff
else
    if m.waterLevel < m.pos.y then
sugarhudmovevar = sugarhudmovevar - (5 + (sugarhudmovevar / 12)) -- more health meter move stuff
    end
end
if sugarhudmovevar >= 56 then
sugarhudmovevar = 56 -- stopping the health move var from overflowing
end
if sugarhudmovevar <= -32 then
sugarhudmovevar = -32 -- stopping the health move var from underflowing
end
end
            local SugarHp = {
            [0] = get_texture_info("HPMeter0"),
            [1] = get_texture_info("HPMeter1"),
            [2] = get_texture_info("HPMeter2"),
            [3] = get_texture_info("HPMeter3"),
            [4] = get_texture_info("HPMeter4"),
            [5] = get_texture_info("HPMeter5"),
            [6] = get_texture_info("HPMeter6"),
            [7] = get_texture_info("HPMeter7"),
            [8] = get_texture_info("HPMeter8"),
            }
            
            local hudmovetimer = 0
            hudmovetimer = hudmovetimer + 1


            local sugardisplayhp = math.floor(tonumber(sugarhpvalue))
            if _G.charSelect.character_get_current_number(m.playerIndex) == CT_SUGAR and not obj_get_first_with_behavior_id(id_bhvActSelector) then
            djui_hud_set_resolution(RESOLUTION_N64)
            djui_hud_render_texture(SugarHp[sugardisplayhp], ((djui_hud_get_screen_width() / 2) - 32), ((djui_hud_get_screen_height() / 28) - 64) + sugarhudmovevar, 1, 1)
        end
    end

 --[[ This is just a font test! [WHY IS THIS STILL FUCKING HERE!!?!?!?!?!?!? THIS CODE IS FROM AN ENTIRELY DIFFERENT MOD!!!]
        local function sugar_texttest(text)
            
            local scale = 1
            
            djui_hud_set_resolution(RESOLUTION_N64)
            djui_hud_set_font(FONT_HUD)
        
            -- Getting the screen width!
            local screenwidth = djui_hud_get_screen_width()
            local hudwidth = djui_hud_measure_text(text) * scale
        
            -- Getting the screen height!
            local screenheight = djui_hud_get_screen_height()
            local hudheight = 32 * scale
        
            -- Positioning!
            local x = screenwidth - hudwidth
            local y = screenheight - hudheight
        
            djui_hud_set_filter(FILTER_NEAREST)
            djui_hud_print_text(text, (x / 2), y, scale)
        end
    ]]

local function hook_update()
    sugarhpvaluegrab()
end


-- The HUD Rendering In Action!
local function on_hud_render()
     sugar_hp()
    -- sugar_texttest((tostring(sugarhpvalue)))
    end

-- Hooks
hook_event(HOOK_ON_HUD_RENDER_BEHIND, on_hud_render)
hook_event(HOOK_UPDATE, hook_update)