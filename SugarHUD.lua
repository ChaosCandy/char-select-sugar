-- Setting up our variables here!

local function sugarhpvaluegrab()
    sugarhpvalue = gMarioStates[0].health >> 8
end

sugarhudhpmovevar = -32

-- Variable set up ends here!



-- This is her custom power meter!
local function sugar_hp()
    local m = gMarioStates[0]

        -- This is what handles health meter move variable, it moves the health meter up and down based on mario's health!
    if m.playerIndex == 0 then -- Checking if you're the local player.
       
        if (m.health >> 8) < 8 or m.waterLevel >= m.pos.y then -- If mario's health (shifted 8 bytes) under 8, or is he underwater.
            sugarhudhpmovevar = sugarhudhpmovevar + (8 - (sugarhudhpmovevar / 7)) -- Making Sugar's Healh Meter Move DOWN.
        else
            if m.waterLevel < m.pos.y then
                sugarhudhpmovevar = sugarhudhpmovevar - (5 + (sugarhudhpmovevar / 12)) -- Making Sugar's Healh Meter Move UP.
            end
        end

        if sugarhudhpmovevar >= 56 then -- Stopping the health move var from overflowing.
            sugarhudhpmovevar = 56 
        end

        if sugarhudhpmovevar <= -32 then -- Stopping the health move var from underflowing.
            sugarhudhpmovevar = -32 
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
        

            local sugardisplayhp = math.floor(tonumber(sugarhpvalue))
            if _G.charSelect.character_get_current_number(m.playerIndex) == CT_SUGAR and not obj_get_first_with_behavior_id(id_bhvActSelector) then
            djui_hud_set_resolution(RESOLUTION_N64)
            djui_hud_render_texture(SugarHp[sugardisplayhp], ((djui_hud_get_screen_width() / 2) - 32), ((djui_hud_get_screen_height() / 28) - 64) + sugarhudhpmovevar, 1, 1)
        end
end

local function hook_update()
    sugarhpvaluegrab()
end


-- The HUD Rendering In Action!
local function on_hud_render()
     sugar_hp()
    end

-- Hooks
hook_event(HOOK_ON_HUD_RENDER_BEHIND, on_hud_render)
hook_event(HOOK_UPDATE, hook_update)