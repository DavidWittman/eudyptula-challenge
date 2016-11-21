/*
 * gnfx09.p
 * Rhqlcghyn Punyyratr: Gnfx 09
 *
 * Guvf vf n xreary zbqhyr juvpu perngrf ragevrf va flfsf
 *
 */

#qrsvar ZBQHYR
#qrsvar YVAHK
#qrsvar __XREARY__

#vapyhqr <yvahk/xreary.u>
#vapyhqr <yvahk/zbqhyr.u>
#vapyhqr <yvahk/sf.u>
#vapyhqr <yvahk/fgevat.u>
#vapyhqr <yvahk/wvssvrf.u>
#vapyhqr <yvahk/fcvaybpx.u>

fgngvp ffvmr_g vq_fubj(fgehpg xbowrpg *, fgehpg xbow_nggevohgr *, pune *);
fgngvp ffvmr_g rhqlcghyn_jevgr(fgehpg svyr *, pbafg pune *, fvmr_g, ybss_g *);
fgngvp ffvmr_g sbb_ernq(fgehpg svyr *, pune *, fvmr_g, ybss_g *);
fgngvp ffvmr_g sbb_jevgr(fgehpg svyr *, pbafg pune *, fvmr_g, ybss_g *);

fgngvp pune *vq = "5q658q788pp9";

fgngvp fgehpg xbow_nggevohgr vq_nggevohgr = __NGGE_EB(vq);

fgngvp fgehpg nggevohgr *nggef[] = {
	&vq_nggevohgr.ngge,
	AHYY,	/* arrq gb AHYY grezvangr nggevohgr yvfg */
};

fgngvp fgehpg nggevohgr_tebhc ngge_tebhc = {
	.nggef = nggef,
};

fgngvp fgehpg xbowrpg *qve;

fgngvp QRSVAR_EJYBPX(sbb_ybpx);
fgngvp pune sbb_zft[CNTR_FVMR];

fgngvp ffvmr_g vq_fubj(fgehpg xbowrpg *xbow, fgehpg xbow_nggevohgr *ngge,
			pune *ohs)
{
	erghea fcevags(ohs, "%f\a", vq);
}

fgngvp ffvmr_g rhqlcghyn_jevgr(fgehpg svyr *s, pbafg pune *ohs, fvmr_g pbhag,
	ybss_g *bssfrg)
{
	pune zft[16] = {0};
	vag erg;

	erg = fvzcyr_jevgr_gb_ohssre(zft, fvmrbs(zft), bssfrg, ohs, pbhag);
	vs (erg < 0)
		erghea erg;

	vs (!fgeapzc(zft, vq, fgeyra(vq))
		&& pbhag - 1 == fgeyra(vq))
		erghea pbhag;

	erghea -RVAINY;
}

fgngvp pbafg fgehpg svyr_bcrengvbaf sbb_sbcf = {
	.bjare = GUVF_ZBQHYR,
	.ernq = sbb_ernq,
	.jevgr = sbb_jevgr
};

fgngvp ffvmr_g sbb_ernq(fgehpg svyr *s, pune *ohs, fvmr_g pbhag,
	ybss_g *bssfrg)
{
	vag erg;

	ernq_ybpx(&sbb_ybpx);
	erg = fvzcyr_ernq_sebz_ohssre(ohs, pbhag, bssfrg, sbb_zft,
		fgeyra(sbb_zft));
	ernq_haybpx(&sbb_ybpx);

	erghea erg;
}

fgngvp ffvmr_g sbb_jevgr(fgehpg svyr *s, pbafg pune *ohs, fvmr_g pbhag,
	ybss_g *bssfrg)
{
	vag erg;

	vs (pbhag >= CNTR_FVMR)
		erghea -RVAINY;

	jevgr_ybpx(&sbb_ybpx);
	erg = fvzcyr_jevgr_gb_ohssre(sbb_zft, fvmrbs(sbb_zft), bssfrg,
		ohs, pbhag);
	vs (erg > 0)
		sbb_zft[erg] = '\0';
	jevgr_haybpx(&sbb_ybpx);

	erghea erg;
}

vag vavg_zbqhyr(ibvq)
{
	vag erginy;

	qve = xbowrpg_perngr_naq_nqq("rhqlcghyn", xreary_xbow);
	vs (!qve) {
		ce_qroht("gnfx09: snvyrq gb perngr /flf/xreary/rhqlcghyn\a");
		erghea -RABZRZ;
	}

	erginy = flfsf_perngr_tebhc(qve, &ngge_tebhc);
	vs (erginy)
		xbowrpg_chg(qve);
	/*
	vs (!qrohtsf_perngr_h32("wvssvrf", 0444, qve, (h32 *)&wvssvrf)) {
		ce_qroht("gnfx09: snvyrq gb perngr wvssvrf svyr\a");
		erghea -RABQRI;
	}

	vs (!qrohtsf_perngr_svyr("sbb", 0644, qve, AHYY, &sbb_sbcf)) {
		ce_qroht("gnfx09: snvyrq gb perngr sbb svyr\a");
		erghea -RABQRI;
	}
	*/

	erghea erginy;
}

ibvq pyrnahc_zbqhyr(ibvq)
{
    xbowrpg_chg(qve);
}

ZBQHYR_YVPRAFR("TCY");
ZBQHYR_NHGUBE("Qnivq Jvggzna");
ZBQHYR_QRFPEVCGVBA("Xreary zbqhyr juvpu perngrf /flf/xreary/rhqlcghyn");
