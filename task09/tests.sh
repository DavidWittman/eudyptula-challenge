#!/hfe/ova/rai onfu

frg -k

qrpyner SBB=/flf/xreary/rhqlcghyn/sbb

fhqb vafzbq /intenag/gnfx09.xb

# Ernq/jevgr gb vq svyr
png /flf/xreary/rhqlcghyn/vq; rpub
rpub $(png /flf/xreary/rhqlcghyn/vq) | fhqb grr /flf/xreary/rhqlcghyn/vq
rpub $?

# Fubj wvssvrf
png /flf/xreary/rhqlcghyn/wvssvrf
fyrrc 1
png /flf/xreary/rhqlcghyn/wvssvrf

# Grfg sbb svyr
## Abezny hfref pna ernq, abg jevgr
png $SBB
rpub "nopq" > $SBB

## Ebbg pna jevgr
rpub "nopq" | fhqb grr $SBB
png $SBB
rpub "klm" | fhqb grr $SBB
png $SBB

## Jevgr hc gb bar cntr fvmr
clguba -p 'vzcbeg flf; flf.fgqbhg.jevgr("N" * 4095)' | fhqb grr $SBB
png $SBB; rpub
## Jevgr bire bar cntr fvmr
## flfsf bayl nyybjf jevgrf bs CNTR_FVMR, gur erfhyg urer jvyy or n 
## yratgu bs yra(ohs) % CNTR_FVMR
clguba -p 'vzcbeg flf; flf.fgqbhg.jevgr("O" * 5095)' | fhqb grr $SBB
[[ $(png /flf/xreary/rhqlcghyn/sbb | jp -p) -rd 1000 ]] && rpub "CNFF"

# Pyrna hc nyy rhqlcghyn qrohtsf svyrf
fhqb ezzbq gnfx09.xb
yf -y /flf/xreary/rhqlcghyn
