-- Death Command

local function sugarkill()
    local m = gMarioStates[0]
    if _G.charSelect.character_get_current_number(m.playerIndex) == CT_SUGAR then
        m.health = 0xFF
    return true
    end
end

-- Sugar's Flag Check!

local function debugflags()
    djui_chat_message_create("SugarChatFlag.Death == " .. tostring(SugarChatFlag.Death))
    djui_chat_message_create("SugarChatFlag.Greeting == " .. tostring(SugarChatFlag.Greeting))
    return true
end


-- Sugar's Yap Level Change Command

local function SugarYapLevel(msg)
    if msg == "0" then
        djui_chat_message_create(tostring(SugarChatTalkFreq.leveldesc[0]))
        SugarChatTalkFreq.level = 0
        djui_chat_message_create("\\#fabc0f\\Sugar\\#FFFFFF\\: Was it something I said?")
        return true
    elseif msg == "1" then
        djui_chat_message_create(tostring(SugarChatTalkFreq.leveldesc[1]))
        SugarChatTalkFreq.level = 1
        return true
    elseif msg == "2" then
        djui_chat_message_create(tostring(SugarChatTalkFreq.leveldesc[2]))
        SugarChatTalkFreq.level = 2
        return true
    elseif msg == "3" then
        djui_chat_message_create(tostring(SugarChatTalkFreq.leveldesc[3]))
        SugarChatTalkFreq.level = 3
        return true
    elseif msg == "check" then
        djui_chat_message_create("\\#fabc0f\\Sugar\\#FFFFFF\\'s Talk Level is " .. tostring(SugarChatTalkFreq.level) .. " | " .. tostring(SugarChatTalkFreq.leveldesc[SugarChatTalkFreq.level] .. " [All previous level additions are applied!]"))
        return true
    else
        djui_chat_message_create("You need to specify a value from 0 to 3! Or you can type 'check' to see the current talk level!")
        return true
    end
end

-- Hooks
hook_chat_command("sugarkill", "KILL SUGAR", sugarkill)
hook_chat_command("sugarflags", "Checks the status of Sugar's flags!", debugflags)
hook_chat_command("talklevel", "Set how much Sugar sends chat messages! [0|1|2|3|check]", SugarYapLevel)