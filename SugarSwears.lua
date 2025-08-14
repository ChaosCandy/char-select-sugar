-- Sugar's Code for HER SWEARING AT YOU IF YOU'RE ACTUAL DOGSHIT AT THE GAME!!!~

-- Da variables!~

SugarChatDialog = {}
SugarChatFlag = {}
SugarChatTalkFreq = {}

SugarChatTalkFreq.level = 2 -- The default setting for Sugar's talk level!
SugarChatFlag.Greeting = true
SugarChatFlag.Death = true

SugarChatTalkFreq.leveldesc = {
    [0] = "Silent - Does not talk at all, Sugar says nothing in the chat.",
    [1] = "Occasional - Says chat messages starting a game or when collecting stars/keys!",
    [2] = "Plenty - Now she has death messages! Upon every death, she says something dumb! (This is the default!)",
    [3] = "EXTREMELY ANNOYING - SHE WILL TALK RANDOMLY AFTER RANDOM ACTIONS. THIS IS A JOKE SETTING!!! [THIS LEVEL IS CURRENTLY UNFINISHED.]"
}


SugarChatDialog.Death = {
    [1] = "You're not exactly my favorite player either...",
    [2] = "OW!? CAN YOU NOT DO THAT?!?",
    [3] = "Fuck you.",
    [4] = "My severed head has more skill than your dumbass!~",
    [5] = "Despite having an IQ in the negatives, I would NEVER have made THAT mistake!~",
    [6] = "missingno",
    [7] = "Alan please add an insult.",
    [8] = "YOU ABSOLUTE CANDLESTICK!!!",
    [9] = "This is worse than the time I was a part of the 4 Sugars!",
    [10] = "You're a nimrod.",
    [11] = "Ima kick you to THE NETHER.",
    [12] = "I... AM SUGAR.",
    [13] = "AS A HUMAN I YEARNED FOR THE SLIME.",
    [14] = "Sodium Chloride",
    [15] = "I'M COMING STRAIGHT TO YOUR HOUSE.",
    [16] = "TEAR DOWN MY WIFE, TEAR DOWN MY KIDS, TEAR DOWN MY HP WHILE YOU'RE AT IT!!!",
    [17] = "you're mom",
    [18] = "NOW'S YOUR CHANCE TO BE [[BIG SHOT]] BY ME.",
    [19] = "DUDE THIS GAMEPLAY IS SO FUCKING FUNNY, IT MAKES ME WANNA MERGE WITHOUT LOOKING!!!",
    [20] = "CT, help me!!! I ran out of jokes! :(",
    [21] = "RUDE!!!",
    [22] = "*Insert 9/11 joke here.*",
    [23] = "dude.",
    [24] = "YOU'RE TAKING TOO LONG.",
    [25] = "At least take me out to dinner first... BEFORE YOU KILL ME!?",
    [26] = "I think you'd be the one person I WOULDN'T make out with.",
    [27] = "Maybe those failed debuters were right. Maybe changing the past.. would SAVE ME!",
    [28] = "Sugar.",
    [29] = "Actually how.",
    [30] = "Hey! Let's relax and get a lobotomy together!~",
    [31] = "DRIVING IN MY CARRR RIGHT AFTER A BEEER!!! HEY THAT BUMP, IS SHAPED LIKE A DEERRR! D.U.I!? HOW ABOUT YOU DIE! I'LL GO 100 MILES... IN AN HOUR!",
    [32] = "NO GAMMA, I'M NOT ADDING THAT AS AN INSULT.",
    [33] = "????????????????",
    [34] = "I'm Old!",
    [35] = "I think Pocket Sugar hates you...",
    [36] = "THE WORLD KEEPS REVOLVING!!! HELP!!!!",
    [37] = "lawnmower",
    [38] = "The water cooler in my head is a better player than you.",
    [39] = "... seriously I'm scared of the water cooler in my head.",
    [40] = "boobie.",
    [41] = "ASMR but it's me holding you hostage.",
    [42] = "you're a poop-nose",
    [43] = "I must be in Minecraft because when I look around all I see are SQUARES. >:("
}

SugarChatDialog.Win = {
    [1] = "Yay! We did it... somehow! :D",
    [2] = "I didn't know you could play well, like, at all!",
    [3] = "I will never forgive you for the amount of damage that you caused me, this victory is hollow.",
    [4] = "Oh wow, you won!",
    [5] = "I have no idea what to even say to here, I'm not used to victory.",
    [6] = "Shockingly, you didn't kill me! Woohoo!",
    [7] = "That star was EASY! I'm GLAD you won!... otherwise...",
    [8] = "Yay!",
    [9] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA",
    [10] = "Congrats! You finished..!"
}

local function sugargreeting() -- Sugar's Greeting when the player hosts a game!
    if SugarChatFlag.Greeting == true and SugarChatTalkFreq.level >= 1 then -- Make sure the SugarChatFlag.Greeting is set to false first, so it doesn't spam the greeting in every frame.
        local random = math.random(3)
            if random == 1 then
                    djui_chat_message_create("\\#fabc0f\\Sugar\\#FFFFFF\\: " .. "OMG HAI HAI HAII " .. gNetworkPlayers[0].name .. "\\#FFFFFF\\!~ I hope you have fun!~")
                    SugarChatFlag.Greeting = false
            elseif random == 2 then
                    djui_chat_message_create("\\#fabc0f\\Sugar\\#FFFFFF\\: " .. "Oh god, " .. gNetworkPlayers[0].name .. "\\#FFFFFF\\. Here we go again...")
                    SugarChatFlag.Greeting = false
            elseif random == 3 then
                    djui_chat_message_create("\\#fabc0f\\Sugar\\#FFFFFF\\: " .. "Are you ready, " .. gNetworkPlayers[0].name .. "\\#FFFFFF\\? I certainly am!~")
                    SugarChatFlag.Greeting = false
            end
        end
end

local function sugarswearsay() -- The function that handles the Death Messages!
    local m = gMarioStates[0]
        if _G.charSelect.character_get_current_number(m.playerIndex) == CT_SUGAR and SugarChatFlag.Death == true and SugarChatTalkFreq.level >= 2 then
            local random = math.random(46)
            local randomSwear = SugarChatDialog.Death[random]
            if random == 44 then
                djui_chat_message_create("\\#fabc0f\\Sugar\\#FFFFFF\\: " .. "Hey uh... " .. gNetworkPlayers[0].name .. "\\#FFFFFF\\, I think things are taking a bit of a weird route, right now.")
                SugarChatFlag.Death = false
            elseif random == 45 then
                djui_chat_message_create("\\#fabc0f\\Sugar\\#FFFFFF\\: " .. "Gamma, kill " .. gNetworkPlayers[0].name .. "\\#FFFFFF\\ with hammers.")
                SugarChatFlag.Death = false
            elseif random == 46 then
                djui_chat_message_create("\\#fabc0f\\Sugar\\#FFFFFF\\: " .. "Delightfully devilish, " .. gNetworkPlayers[0].name .. "\\#FFFFFF\\!~")
                SugarChatFlag.Death = false
            else
                djui_chat_message_create("\\#fabc0f\\Sugar\\#FFFFFF\\: " .. randomSwear)
                SugarChatFlag.Death = false
            end
        end
end

local function sugarvictorysay(m, o, intType) -- The function that controls Sugar's victory messages that appear whenever a star or key is collected.
    local m = gMarioStates[0]
        if _G.charSelect.character_get_current_number(m.playerIndex) == CT_SUGAR and intType == INTERACT_STAR_OR_KEY and SugarChatTalkFreq.level >= 1 then
            local random = math.random(11)
            local randomvictory = SugarChatDialog.Win[random]
            if random == 11 and m.numStars <= 120 then
                djui_chat_message_create("\\#fabc0f\\Sugar\\#FFFFFF\\: Yay! We now have " .. m.numStars .. " stars! Good job! :3")
            elseif random == 11 and m.numStars >= 121 then
                djui_chat_message_create("\\#fabc0f\\Sugar\\#FFFFFF\\: Yay! We now have " .. m.numStars .. "... wait a minute? What the fuck? HOW???")
            elseif random == 11 and m.numStars >= 250 then
                djui_chat_message_create("\\#fabc0f\\Sugar\\#FFFFFF\\: Yay! We now have " .. m.numStars .. " stars... YOU CHEATER!!! YOU'RE CHEATING!!!")
            else
                djui_chat_message_create("\\#fabc0f\\Sugar\\#FFFFFF\\: " .. randomvictory)
            end
        end
end


local function sugardeathflagreset() -- The function that controls Sugar's death flag, so death messages work properly.
    local m = gMarioStates[0]
        if _G.charSelect.character_get_current_number(m.playerIndex) == CT_SUGAR and m.action == ACT_WALKING or m.action == ACT_IDLE then
            SugarChatFlag.Death = true
        end
end

-- Hooks
hook_event(HOOK_ON_DEATH, sugarswearsay)
hook_event(HOOK_ON_INTERACT, sugarvictorysay)
hook_event(HOOK_UPDATE, sugardeathflagreset)
hook_event(HOOK_UPDATE, sugargreeting)