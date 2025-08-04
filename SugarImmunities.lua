-- Squash and Fire Immunities for Sugar added by CT_Himself! [Edited by Sugar herself!]

-- Squash immunity (You can't squash the squishiest slime gal alive)


local function squishimmunity()
    local m = gMarioStates[0]
    if m.action == ACT_SQUISHED and _G.charSelect.character_get_current_number(m.playerIndex) == CT_SUGAR then
        m.invincTimer = 10
    end
end

-- Hooks
hook_event(HOOK_MARIO_UPDATE, squishimmunity)