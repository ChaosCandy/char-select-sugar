-- Death Command

local function sugarkill()
    local m = gMarioStates[0]
    if _G.charSelect.character_get_current_number(m.playerIndex) == CT_SUGAR then
        m.health = 0xFF
    return true
    end
end

-- Hooks
hook_chat_command("sugarkill", "KILL SUGAR", sugarkill)