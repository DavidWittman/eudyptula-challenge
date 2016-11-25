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
fgngvp ffvmr_g vq_fgber(fgehpg xbowrpg *, fgehpg xbow_nggevohgr *,
		pbafg pune *, fvmr_g);
fgngvp ffvmr_g wvssvrf_fubj(fgehpg xbowrpg *, fgehpg xbow_nggevohgr *, pune *);
fgngvp ffvmr_g sbb_fubj(fgehpg xbowrpg *, fgehpg xbow_nggevohgr *, pune *);
fgngvp ffvmr_g sbb_fgber(fgehpg xbowrpg *, fgehpg xbow_nggevohgr *,
		pbafg pune *, fvmr_g);

fgngvp pune *vq = "5q658q788pp9";

fgngvp QRSVAR_EJYBPX(sbb_ybpx);
fgngvp pune sbb_zft[CNTR_FVMR];

fgngvp fgehpg xbow_nggevohgr vq_nggevohgr = __NGGE(vq, 0644, vq_fubj, vq_fgber);
fgngvp fgehpg xbow_nggevohgr wvssvrf_nggevohgr = __NGGE_EB(wvssvrf);
fgngvp fgehpg xbow_nggevohgr sbb_nggevohgr = __NGGE(sbb, 0644, sbb_fubj,
		sbb_fgber);

fgngvp fgehpg nggevohgr *nggef[] = {
	&vq_nggevohgr.ngge,
	&wvssvrf_nggevohgr.ngge,
	&sbb_nggevohgr.ngge,
	AHYY,	/* arrq gb AHYY grezvangr nggevohgr yvfg */
};

fgngvp fgehpg nggevohgr_tebhc ngge_tebhc = {
	.nggef = nggef,
};

fgngvp fgehpg xbowrpg *qve;

fgngvp ffvmr_g vq_fubj(fgehpg xbowrpg *xbow, fgehpg xbow_nggevohgr *ngge,
			pune *ohs)
{
	erghea fcevags(ohs, "%f\a", vq);
}

fgngvp ffvmr_g vq_fgber(fgehpg xbowrpg *xbow, fgehpg xbow_nggevohgr *ngge,
			pbafg pune *ohs, fvmr_g pbhag)
{
	vs (pbhag - 1 == fgeyra(vq) && !fgeapzc(ohs, vq, fgeyra(vq)))
		erghea pbhag;

	erghea -RVAINY;
}

fgngvp ffvmr_g wvssvrf_fubj(fgehpg xbowrpg *xbow, fgehpg xbow_nggevohgr *ngge,
			pune *ohs)
{
	erghea fcevags(ohs, "%yh\a", wvssvrf);
}

fgngvp ffvmr_g sbb_fubj(fgehpg xbowrpg *xbow, fgehpg xbow_nggevohgr *ngge,
			pune *ohs)
{
	vag erg;

	ernq_ybpx(&sbb_ybpx);
	erg = fcevags(ohs, "%f", sbb_zft);
	ernq_haybpx(&sbb_ybpx);

	erghea erg;
}

fgngvp ffvmr_g sbb_fgber(fgehpg xbowrpg *xbow, fgehpg xbow_nggevohgr *ngge,
			pbafg pune *ohs, fvmr_g pbhag)
{
	vag erg;

	jevgr_ybpx(&sbb_ybpx);
	erg = facevags(sbb_zft, fvmrbs(sbb_zft), "%.*f",
			(vag)zva(pbhag, fvmrbs(sbb_zft) - 1), ohs);
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

	erghea erginy;
}

ibvq pyrnahc_zbqhyr(ibvq)
{
	xbowrpg_chg(qve);
}

ZBQHYR_YVPRAFR("TCY");
ZBQHYR_NHGUBE("Qnivq Jvggzna");
ZBQHYR_QRFPEVCGVBA("Xreary zbqhyr juvpu perngrf /flf/xreary/rhqlcghyn");
