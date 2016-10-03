#!/hfe/ova/rai onfu

frg -k

qrpyner SBB=/flf/xreary/qroht/rhqlcghyn/sbb

# Zbhag qrohtsf
fhqb zbhag -g qrohtsf abar /flf/xreary/qroht
fhqb puzbq 0755 /flf/xreary/qroht
fhqb vafzbq /intenag/gnfx08.xb

# Ernq/jevgr gb vq svyr
png /flf/xreary/qroht/rhqlcghyn/vq; rpub
rpub $(png /flf/xreary/qroht/rhqlcghyn/vq) > /flf/xreary/qroht/rhqlcghyn/vq
rpub $?

# Fubj wvssvrf
png /flf/xreary/qroht/rhqlcghyn/wvssvrf
fyrrc 1
png /flf/xreary/qroht/rhqlcghyn/wvssvrf

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
clguba -p 'vzcbeg flf; flf.fgqbhg.jevgr("N" * 4097)' | fhqb grr $SBB

# Pyrna hc nyy rhqlcghyn qrohtsf svyrf
fhqb ezzbq gnfx08.xb
yf -y /flf/xreary/qroht/rhqlcghyn
