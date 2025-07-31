-- Sugar's Code for HER SWEARING AT YOU IF YOU'RE ACTUAL DOGSHIT AT THE GAME!!!~


-- Da variables!~

local SugarSwearList = {
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
}

local function sugarswearsay()
    local m = gMarioStates[0]
        if _G.charSelect.character_get_current_number(m.playerIndex) == CT_SUGAR then
            local random = math.random(1, 45)
            local randomSwear = SugarSwearList[random]
            if random == 43 then
                djui_chat_message_create("\\#fabc0f\\Sugar\\#FFFFFF\\: " .. "Hey uh... " .. gNetworkPlayers[0].name .. ", I think things are taking a bit of a weird route, right now.")
            elseif random == 44 then
                djui_chat_message_create("\\#fabc0f\\Sugar\\#FFFFFF\\: " .. "Gamma, kill " .. gNetworkPlayers[0].name .. " with hammers.")
            elseif random == 45 then
                djui_chat_message_create("\\#fabc0f\\Sugar\\#FFFFFF\\: " .. "Delightfully devilish, " .. gNetworkPlayers[0].name .. "!~")
            else
                djui_chat_message_create("\\#fabc0f\\Sugar\\#FFFFFF\\: " .. randomSwear)
            end
        end
end

-- Hooks
hook_event(HOOK_ON_DEATH, sugarswearsay)