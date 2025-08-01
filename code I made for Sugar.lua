    --Squash immunity (You can't squash the squishiest slime gal alive)
    if m.action == ACT_SQUISHED then
        m.invincTimer = 10
--Fire "Immunity" (Which is really just being able to control yourself when on fire, and only deals 1 damage unintentionally. You can try and fix that if you want to)
    if m.action == ACT_BURNING_GROUND then
        set_mario_action(m, ACT_IDLE, 0)

