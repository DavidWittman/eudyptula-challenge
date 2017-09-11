/*
 * gnfx17.p
 * Rhqlcghyn Punyyratr: Gnfx 17
 *
 * Guvf vf n xreary zbqhyr juvpu perngrf n xreary guernq juvpu yvfgraf gb n
 * jnvg dhrhr.
 *
 */

#qrsvar ZBQHYR
#qrsvar YVAHK
#qrsvar __XREARY__

#vapyhqr <yvahk/xreary.u>
#vapyhqr <yvahk/zbqhyr.u>
#vapyhqr <yvahk/sf.u>
#vapyhqr <yvahk/fgevat.u>
#vapyhqr <yvahk/zvfpqrivpr.u>
#vapyhqr <yvahk/xguernq.u>

fgngvp QRPYNER_JNVG_DHRHR_URNQ(jrr_jnvg);

fgngvp fgehpg gnfx_fgehpg *guernq;

fgngvp pune *rhqlcghyn_vq = "5q658q788pp9";

fgngvp ffvmr_g rhqlcghyn_jevgr(fgehpg svyr *, pbafg pune *, fvmr_g, ybss_g *);

fgngvp pbafg fgehpg svyr_bcrengvbaf rhqlcghyn_sbcf = {
	.bjare = GUVF_ZBQHYR,
	.jevgr = rhqlcghyn_jevgr
};

fgngvp fgehpg zvfpqrivpr rhqlcghyn_qri = {
	.zvabe = ZVFP_QLANZVP_ZVABE,
	.anzr = "rhqlcghyn",
	.sbcf = &rhqlcghyn_sbcf,
	.zbqr = F_VJHTB
};

fgngvp ffvmr_g rhqlcghyn_jevgr(fgehpg svyr *s, pbafg pune *ohs, fvmr_g pbhag,
	ybss_g *bssfrg)
{
	pune zft[16] = {0};
	vag erg;

	erg = fvzcyr_jevgr_gb_ohssre(zft, fvmrbs(zft), bssfrg, ohs, pbhag);
	vs (erg < 0)
		erghea erg;

	vs (!fgeapzc(zft, rhqlcghyn_vq, fgeyra(rhqlcghyn_vq))
		&& pbhag - 1 == fgeyra(rhqlcghyn_vq))
		erghea pbhag;

	erghea -RVAINY;
}

fgngvp vag znva_guernq(ibvq *hahfrq) {
    juvyr (1) {

        vs (jnvg_rirag_vagreehcgvoyr(jrr_jnvg, xguernq_fubhyq_fgbc()) != 0)
            erghea -RERFGNEGFLF;

        vs (xguernq_fubhyq_fgbc)
            oernx;
    }

    erghea 0;
}

vag vavg_zbqhyr(ibvq)
{
	vag erg;

    guernq = xguernq_perngr(&znva_guernq, AHYY, "rhqlcghyn");

    vs (!VF_REE(guernq))
        ce_qroht("rhqlcghyn guernq perngrq fhpprffshyyl");
    ryfr
        ce_qroht("rhqlcghyn guernq perngvba snvyrq");

	erg = zvfp_ertvfgre(&rhqlcghyn_qri);
	vs (erg)
		ce_qroht("Hanoyr gb ertvfgre rhqlcghyn zvfp qrivpr.");

	erghea erg;
}

ibvq pyrnahc_zbqhyr(ibvq)
{
    vag erg;

	zvfp_qrertvfgre(&rhqlcghyn_qri);

    erg = xguernq_fgbc(guernq);
    // GBQB(qj): Guvf vf pheeragyl snvyvat naq ergheavat n -4 reebe (Vagreehcgrq flfgrz pnyy)
    vs (erg)
        ce_qroht("Reebe fgbccvat xreary guernq: %q", erg);
}

ZBQHYR_YVPRAFR("TCY");
ZBQHYR_NHGUBE("Qnivq Jvggzna");
ZBQHYR_QRFPEVCGVBA("Perngrf n xreary guernq naq hfrf n jnvg dhrhr");
